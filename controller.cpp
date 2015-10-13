#include "controller.h"

controller::controller()
{
    qDebug() << "New controller created!";
    newSpectrometer = new Spectrometer_Control(&mutex, &waitCond);
    qCritical() << "Initializing controller";
    MainServer = new Server("127.0.0.1", port, "MAIN");
    MovementServer = new Server("127.0.0.1", port + 2, "Movement");
    DataServer = new Server("127.0.0.1", port + 4, "DATA");
    mainTX = NULL;
    dataTX = NULL;
    this->mainConnected = false;
    this->movConnected = false;
    this->dataConnected = false;
    connect(this, &controller::sendDataMain, MainServer, &Server::sendData);
    connect(this, &controller::sendDataMov, MovementServer, &Server::sendData);
    connect(this, &controller::sendDataDat, DataServer, &Server::sendData);
    connect(MainServer, &Server::gotNewConnection, this, &controller::gotNewConnection);
    connect(MovementServer, &Server::gotNewConnection, this, &controller::MovgotNewconnection);
    connect(DataServer, &Server::gotNewConnection, this, &controller::DatgotNewconnection);

    connect(newSpectrometer, &Spectrometer_Control::positionChanged, this, &controller::positionChanged);
    connect(newSpectrometer, &Spectrometer_Control::stepperMoving, this, &controller::stepperMoving);
    connect(newSpectrometer, &Spectrometer_Control::currentScanPosition, this, &controller::currentScanPosition);
    connect(newSpectrometer, &Spectrometer_Control::currentCounterData, this, &controller::currentCounterData);
    connect(newSpectrometer, &Spectrometer_Control::newPosition, this, &controller::newPosition);
    connect(newSpectrometer, &Spectrometer_Control::scanFinished, this, &controller::scanFinished);
    connect(newSpectrometer, &Spectrometer_Control::currentStepperStatus, this, &controller::currentStepperStatus);
	
}

controller::~controller()
{
    delete MainServer;
    delete MovementServer;
    delete newSpectrometer;
    delete mainTX;
    delete dataTX;
}

void controller::writeConfig()
{
    QString filename = "Config.txt";
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << file.errorString();
        return;
    }
    QTextStream out(&file);
    QString CalibrationData;
    if(calibrated == true)
    {

        for(int i = 0; i < CorrectionValues.size(); i++)
        {
            CalibrationData += QString::number(CorrectionValues[i].first) + " " + QString::number(CorrectionValues[i].second) + " ";
        }
    }
    out << newSpectrometer->getMonoPos() << '\n';
    //out << newSpectrometer->getMonoSpeed() << '\n';
    out << (int)(newSpectrometer->getPolarizers()[0])*1 + (int)(newSpectrometer->getPolarizers()[1])*2 + (int)(newSpectrometer->getPolarizers()[2])*4 << '\n';
    if(calibrated == true)
        out << CalibrationData;
    file.close();
}

void controller::gotNewConnection(QVariant data)
{
    qDebug() << "MainServer got new connection from " << data.toString();
    controller::ipAddr = data.toString();
    mainTX = new TX_master(ipAddr, port + 1, "MAIN");
    this->mainConnected = true;
    //dataTX = new TX_master(ipAddr, port + 3, "MOVEMENT");
    qDebug() << "Created new Client, client is gonna started!";
    qDebug() << "Connecting 1";
    connect(this, &controller::connectTX, mainTX, &TX_master::connectTX);
    //connect(this, &controller::DataConnectTX, dataTX, &TX_master::connectTX);
//    qDebug() << "Connecting 2";
//    connect(this, &controller::DataConnectTX, dataTX, &TX_master::connectTX);
    qDebug() << "Connecting 3";
    connect(mainTX, &TX_master::gotNewData, this, &controller::gotData);
    //connect(dataTX, &TX_master::gotNewData, this, &controller::DataGotData);
    qDebug() << "Connecting 4";
    connect(mainTX, &TX_master::wrongIP, this, &controller::wrongIP);
    //connect(dataTX, &TX_master::wrongIP, this, &controller::DataWrongIP);
    qDebug() << "Connecting finished";
    emit connectTX();
    //emit DataConnectTX();
}

void controller::currentStepperStatus(int status)
{
    //emit this->sendDataMain(qMakePair(QString("STP"), qMakePair(QString("S"), QVariant(status))));
}

void controller::gotData(QPair<QString, QPair<QString, QVariant> > data)
{
    if(data.first == "STP" && data.second.first == "M")
    {
        qDebug() << "Moving stepper: " << data.second.second.toInt() << " in direction " << QString::number(data.second.second.toInt() >= 0);
        newSpectrometer->moveStepper(data.second.second.toInt(), data.second.second.toInt() >= 0);
        //emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("M"), QVariant(1))));
    }
    if(data.first == "SCN")
    {
        //Somehow I have to get data over here for scan...
    }
    if(data.first == "POL")
    {
        int newPolarizerState = data.second.second.toInt();
        if(newPolarizerState == 0)
        {
            newSpectrometer->setPolarizers(xPol, !newSpectrometer->getPolarizerState(xPol));
            if(this->mainConnected == true)
                emit sendDataMain(qMakePair(QString("POL"), qMakePair(QString("X"), QVariant(xPol))));
        }
        if(newPolarizerState == 1)
        {
            newSpectrometer->setPolarizers(yPol, !newSpectrometer->getPolarizerState(yPol));
            if(this->mainConnected == true)
                emit sendDataMain(qMakePair(QString("POL"), qMakePair(QString("Y"), QVariant(yPol))));
        }
        if(newPolarizerState == 2)
        {
            newSpectrometer->setPolarizers(zPol, !newSpectrometer->getPolarizerState(zPol));
            if(this->mainConnected == true)
                emit sendDataMain(qMakePair(QString("POL"), qMakePair(QString("X"), QVariant(zPol))));
        }
    }
    if(data.first == "CTL")
    {
        switch(data.second.second.toInt())
        {
            case 0://Return current MonoPos
            {
                QVariant tmp(newSpectrometer->getMonoPos());
                if(this->mainConnected == true)
                    emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("A"), QVariant(tmp))));
                break;
            }
            case 1://return current DPC value
            {
                QVariant tmp(currentCounts);
                if(this->mainConnected == true)
                    emit sendDataMain(qMakePair(QString("DPC"), qMakePair(QString("A"), QVariant(tmp)/*Hier muss der aktuelle Zählerstand eingebaut werden*/)));
                break;
            }
            case 2://return Polarizer state
            {
                int currentPos = 1*(int)newSpectrometer->getPolarizers()[0] + 2*(int)newSpectrometer->getPolarizers()[1] + 4*(int)newSpectrometer->getPolarizers()[2];
                QVariant tmp(currentPos);
                if(this->mainConnected == true)
                    emit sendDataMain(qMakePair(QString("POL"), qMakePair(QString("A"), QVariant(tmp))));
                break;
            }
            default:
            {
                //do nothing
            }
        }
    }
    if(data.first == "FIL")
    {
        //Schick das aktuelle Datenfile rüber
    }
    if(data.first == "EXIT")
        qApp->exit();
    //everything else is missing
}

void controller::DataGotData(QPair<QString, QPair<QString, QVariant> > data)
{
    //do something with data here
}

void controller::DataWrongIP()
{
    qDebug() << "No connection to target ip!";
}

void controller::MovgotNewconnection(QVariant data)
{
    if(data.toString() != ipAddr)
    {
        qDebug() << "An error occured in movement server!";
        return;
    }
    this->movConnected = true;
}

void controller::DatgotNewconnection(QVariant data)
{
    if(data.toString() != ipAddr)
    {
        qDebug() << "An error occured in data server!";
        return;
    }
    this->dataConnected = true;
}

void controller::wrongIP()
{
    qDebug() << "No connection to target ip!";
}

void controller::sortPoints()
{
    qSort(CorrectionValues);
}

void controller::readConfig()
{
    QString filename = "Config.txt";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "No config file found!";
        return;
    }
    QTextStream in(&file);
    QString monoPos, monoSpeed;
    QString calibData;
    QStringList Data;
    int PolarizerConfig;
    monoPos = in.readLine();//in >> monoPos;
    qDebug() << "MonoPos from Config: " << monoPos;
    //in >> monoSpeed;
    PolarizerConfig = in.readLine().toInt();//in >> PolarizerConfig;
    qDebug() << "PolarizerConfig from Config: " << PolarizerConfig;
    calibData = in.readLine();
    qDebug() << "Calibration data: " << calibData;
    if(calibData.isEmpty())
        calibrated = false;
    else
    {
        Data = calibData.split(" ");
        qDebug() << "Data size is: " << Data.size();
        if(Data.size()%2 == 0)
        {
            for(int i = 0; i < Data.size(); i+=2)
            {
                CorrectionValues.push_back(qMakePair(Data[i].toInt(), Data[i+1].toInt()));
            }
        }
        else
        {
            Data.pop_back();
            for(int i = 0; i < Data.size(); i+=2)
            {
                CorrectionValues.push_back(qMakePair(Data[i].toInt(), Data[i+1].toInt()));
            }
        }
        qDebug() << "Size of the corrected values: " << CorrectionValues.size();
        if(CorrectionValues.size() > 0)
        {
            sortPoints();
            calibrated = true;
            qDebug() << "Yay, new correction values!";
        }
    }


    newSpectrometer->setMonoPos(monoPos.toDouble());
    //newSpectrometer->setMonoSpeed(monoSpeed.toDouble());
    newSpectrometer->setPolarizers(xPol, (PolarizerConfig % 2 == 1)?true:false );
    newSpectrometer->setPolarizers(yPol, (PolarizerConfig == 2 || PolarizerConfig == 3 || PolarizerConfig == 6)?true:false);
    newSpectrometer->setPolarizers(zPol, (PolarizerConfig >= 4)?true:false);
}

void controller::scanFinished()
{
    if(this->mainConnected == true)
        emit sendDataMain(qMakePair(QString("SCN"), qMakePair(QString("S"), QVariant(0))));
}

void controller::positionChanged()
{
    qDebug() << "Position changed, stepper stopped!";
    //emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("M"), QVariant(0))));
    if(this->movConnected == true)
        emit sendDataMov(qMakePair(QString("STP"), qMakePair(QString("M"), QVariant(0))));
}

void controller::newPosition(int steps, bool dir)
{
	QVariant tmp(steps * ((dir==true)?1:-1));
    qDebug() << "STP " + QString::number(tmp.toDouble()) + " " + QString::number(steps);
    //emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("P"), QVariant(tmp))));
    //emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("M"), QVariant(0))));
    //emit sendDataMov(qMakePair(QString("STP"), qMakePair(QString("M"), QVariant(0))));
}

void controller::currentCounterData(int counts)
{
    QVariant tmp(counts);
    //qDebug() << "Current counts emitted!";
    //emit sendDataMain(qMakePair(QString("DPC"), qMakePair(QString("C"), QVariant(tmp))));
    if(this->dataConnected == true)
        emit sendDataDat(qMakePair(QString("DPC"), qMakePair(QString("C"), QVariant(counts))));
}

void controller::currentScanPosition(double position)
{
    QVariant tmp(position);
    if(this->mainConnected == true)
        emit sendDataMain(qMakePair(QString("SCN"), qMakePair(QString("P"), QVariant(tmp))));//Muss überprüft werden
}

void controller::currentData(QPair<int, int> data)
{
    QStringList tmp;
    tmp.push_back(QString::number(data.first));
    tmp.push_back(QString::number(data.second));
    QVariant tmp2(tmp);
    if(this->mainConnected == true)
        emit sendDataMain(qMakePair(QString("SCN"), qMakePair(QString("D"), tmp2)));
}

void controller::stepperMoving()
{
    QVariant tmp(1);
    qDebug() << "Stepper moving!";
    //emit sendDataMain(qMakePair(QString("STP"), qMakePair(QString("M"), tmp)));
    if(this->movConnected == true)
        emit sendDataMov(qMakePair(QString("STP"), qMakePair(QString("M"), tmp)));
}
//Polarizer fehlt noch
