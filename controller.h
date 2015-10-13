#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QFile>
#include <QObject>
#include <QMutex>
#include <QWaitCondition>
#include "spectrometer.h"
#include "../remoteController/tx_thread.h"


class controller:public QObject
{
    Q_OBJECT
private:
    QMutex mutex;
    QWaitCondition waitCond;
    QString ipAddr;
    quint32 port = 50000;
    bool mainConnected, movConnected, dataConnected;
    Spectrometer_Control *newSpectrometer;
    TX_master *mainTX, *dataTX;
    Server *MainServer, *MovementServer, *DataServer;
    QVector<QPair<int, int> > CorrectionValues;
    bool calibrated = false;
    int currentCounts = 0;
private slots:
    //From Mainserver:
    void gotNewConnection(QVariant data);
    //From MovementServer:
    void MovgotNewconnection(QVariant data);
    //From DataServer:
    void DatgotNewconnection(QVariant data);
    //from mainTX
    void gotData(QPair<QString, QPair<QString, QVariant> > data);
    void wrongIP(void);
    //from dataTX
    void DataGotData(QPair<QString, QPair<QString, QVariant> > data);
    void DataWrongIP(void);
    //From spectrometer
    void currentData(QPair<int, int> data);
    void scanFinished(void);
    void currentStepperStatus(int status);
    void currentScanPosition(double position);
    void currentCounterData(int counts);
    void positionChanged(void);
    void newPosition(int steps, bool dir);
    void stepperMoving(void);
signals:
    //To MainServer:
    void sendDataMain(QPair<QString, QPair<QString, QVariant> >);

    //To MovementServer:
    void sendDataMov(QPair<QString, QPair<QString, QVariant> >);
    //To DataServer:
    void sendDataDat(QPair<QString, QPair<QString, QVariant> >);
    //To mainTX
    void connectTX(void);
    //To dataTX
    void DataConnectTX(void);
public:
    controller();
    ~controller();

    void sortPoints();
    void writeConfig();
    void readConfig();
};

#endif // CONTROLLER_H
