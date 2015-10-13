/****************************************************************************
** Meta object code from reading C++ file 'spectrometer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spectrometer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrometer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Spectrometer_t {
    QByteArrayData data[37];
    char stringdata[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spectrometer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spectrometer_t qt_meta_stringdata_Spectrometer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Spectrometer"
QT_MOC_LITERAL(1, 13, 15), // "switchPolarizer"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "Polarizer"
QT_MOC_LITERAL(4, 40, 19), // "moveStepperToTarget"
QT_MOC_LITERAL(5, 60, 7), // "scanNow"
QT_MOC_LITERAL(6, 68, 13), // "interruptScan"
QT_MOC_LITERAL(7, 82, 4), // "Data"
QT_MOC_LITERAL(8, 87, 14), // "QPair<int,int>"
QT_MOC_LITERAL(9, 102, 4), // "data"
QT_MOC_LITERAL(10, 107, 9), // "DPCCounts"
QT_MOC_LITERAL(11, 117, 6), // "counts"
QT_MOC_LITERAL(12, 124, 10), // "scanFinish"
QT_MOC_LITERAL(13, 135, 7), // "ScanPos"
QT_MOC_LITERAL(14, 143, 8), // "position"
QT_MOC_LITERAL(15, 152, 15), // "currentPosition"
QT_MOC_LITERAL(16, 168, 5), // "steps"
QT_MOC_LITERAL(17, 174, 3), // "dir"
QT_MOC_LITERAL(18, 178, 13), // "stepperMoving"
QT_MOC_LITERAL(19, 192, 13), // "stepperStatus"
QT_MOC_LITERAL(20, 206, 16), // "switchingSucceed"
QT_MOC_LITERAL(21, 223, 3), // "pol"
QT_MOC_LITERAL(22, 227, 16), // "switchingSuccess"
QT_MOC_LITERAL(23, 244, 12), // "stepperMoved"
QT_MOC_LITERAL(24, 257, 13), // "StepperStatus"
QT_MOC_LITERAL(25, 271, 6), // "status"
QT_MOC_LITERAL(26, 278, 13), // "currentCounts"
QT_MOC_LITERAL(27, 292, 11), // "currentData"
QT_MOC_LITERAL(28, 304, 14), // "updatePosition"
QT_MOC_LITERAL(29, 319, 19), // "currentScanPosition"
QT_MOC_LITERAL(30, 339, 12), // "scanFinished"
QT_MOC_LITERAL(31, 352, 9), // "switchPol"
QT_MOC_LITERAL(32, 362, 12), // "moveToTarget"
QT_MOC_LITERAL(33, 375, 7), // "runScan"
QT_MOC_LITERAL(34, 383, 5), // "start"
QT_MOC_LITERAL(35, 389, 4), // "stop"
QT_MOC_LITERAL(36, 394, 8) // "accuracy"

    },
    "Spectrometer\0switchPolarizer\0\0Polarizer\0"
    "moveStepperToTarget\0scanNow\0interruptScan\0"
    "Data\0QPair<int,int>\0data\0DPCCounts\0"
    "counts\0scanFinish\0ScanPos\0position\0"
    "currentPosition\0steps\0dir\0stepperMoving\0"
    "stepperStatus\0switchingSucceed\0pol\0"
    "switchingSuccess\0stepperMoved\0"
    "StepperStatus\0status\0currentCounts\0"
    "currentData\0updatePosition\0"
    "currentScanPosition\0scanFinished\0"
    "switchPol\0moveToTarget\0runScan\0start\0"
    "stop\0accuracy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spectrometer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    2,  132,    2, 0x06 /* Public */,
       5,    3,  137,    2, 0x06 /* Public */,
       6,    0,  144,    2, 0x06 /* Public */,
       7,    1,  145,    2, 0x06 /* Public */,
      10,    1,  148,    2, 0x06 /* Public */,
      12,    0,  151,    2, 0x06 /* Public */,
      13,    1,  152,    2, 0x06 /* Public */,
      15,    2,  155,    2, 0x06 /* Public */,
      18,    0,  160,    2, 0x06 /* Public */,
      19,    1,  161,    2, 0x06 /* Public */,
      20,    1,  164,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  167,    2, 0x08 /* Private */,
      23,    2,  170,    2, 0x08 /* Private */,
      24,    1,  175,    2, 0x08 /* Private */,
      26,    1,  178,    2, 0x08 /* Private */,
      27,    1,  181,    2, 0x08 /* Private */,
      28,    2,  184,    2, 0x08 /* Private */,
      29,    1,  189,    2, 0x08 /* Private */,
      30,    0,  192,    2, 0x08 /* Private */,
      31,    1,  193,    2, 0x0a /* Public */,
      32,    2,  196,    2, 0x0a /* Public */,
      33,    3,  201,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::QReal,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   34,   35,   36,

       0        // eod
};

void Spectrometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Spectrometer *_t = static_cast<Spectrometer *>(_o);
        switch (_id) {
        case 0: _t->switchPolarizer((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 1: _t->moveStepperToTarget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->scanNow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->interruptScan(); break;
        case 4: _t->Data((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 5: _t->DPCCounts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->scanFinish(); break;
        case 7: _t->ScanPos((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->currentPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->stepperMoving(); break;
        case 10: _t->stepperStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->switchingSucceed((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 12: _t->switchingSuccess((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 13: _t->stepperMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->StepperStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->currentCounts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->currentData((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 17: _t->updatePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->currentScanPosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 19: _t->scanFinished(); break;
        case 20: _t->switchPol((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 21: _t->moveToTarget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->runScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Spectrometer::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::switchPolarizer)) {
                *result = 0;
            }
        }
        {
            typedef void (Spectrometer::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::moveStepperToTarget)) {
                *result = 1;
            }
        }
        {
            typedef void (Spectrometer::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::scanNow)) {
                *result = 2;
            }
        }
        {
            typedef void (Spectrometer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::interruptScan)) {
                *result = 3;
            }
        }
        {
            typedef void (Spectrometer::*_t)(QPair<int,int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::Data)) {
                *result = 4;
            }
        }
        {
            typedef void (Spectrometer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::DPCCounts)) {
                *result = 5;
            }
        }
        {
            typedef void (Spectrometer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::scanFinish)) {
                *result = 6;
            }
        }
        {
            typedef void (Spectrometer::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::ScanPos)) {
                *result = 7;
            }
        }
        {
            typedef void (Spectrometer::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::currentPosition)) {
                *result = 8;
            }
        }
        {
            typedef void (Spectrometer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::stepperMoving)) {
                *result = 9;
            }
        }
        {
            typedef void (Spectrometer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::stepperStatus)) {
                *result = 10;
            }
        }
        {
            typedef void (Spectrometer::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer::switchingSucceed)) {
                *result = 11;
            }
        }
    }
}

const QMetaObject Spectrometer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Spectrometer.data,
      qt_meta_data_Spectrometer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Spectrometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spectrometer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Spectrometer.stringdata))
        return static_cast<void*>(const_cast< Spectrometer*>(this));
    return QObject::qt_metacast(_clname);
}

int Spectrometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Spectrometer::switchPolarizer(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Spectrometer::moveStepperToTarget(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Spectrometer::scanNow(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Spectrometer::interruptScan()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Spectrometer::Data(QPair<int,int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Spectrometer::DPCCounts(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Spectrometer::scanFinish()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Spectrometer::ScanPos(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Spectrometer::currentPosition(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Spectrometer::stepperMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Spectrometer::stepperStatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Spectrometer::switchingSucceed(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
struct qt_meta_stringdata_Spectrometer_Control_t {
    QByteArrayData data[35];
    char stringdata[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spectrometer_Control_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spectrometer_Control_t qt_meta_stringdata_Spectrometer_Control = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Spectrometer_Control"
QT_MOC_LITERAL(1, 21, 15), // "switchPolarizer"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "Polarizer"
QT_MOC_LITERAL(4, 48, 3), // "pol"
QT_MOC_LITERAL(5, 52, 19), // "moveStepperToTarget"
QT_MOC_LITERAL(6, 72, 5), // "steps"
QT_MOC_LITERAL(7, 78, 3), // "dir"
QT_MOC_LITERAL(8, 82, 7), // "runScan"
QT_MOC_LITERAL(9, 90, 5), // "start"
QT_MOC_LITERAL(10, 96, 4), // "stop"
QT_MOC_LITERAL(11, 101, 8), // "accuracy"
QT_MOC_LITERAL(12, 110, 11), // "initMonoPos"
QT_MOC_LITERAL(13, 122, 7), // "MonoPos"
QT_MOC_LITERAL(14, 130, 11), // "currentData"
QT_MOC_LITERAL(15, 142, 14), // "QPair<int,int>"
QT_MOC_LITERAL(16, 157, 4), // "data"
QT_MOC_LITERAL(17, 162, 12), // "scanFinished"
QT_MOC_LITERAL(18, 175, 19), // "currentScanPosition"
QT_MOC_LITERAL(19, 195, 8), // "position"
QT_MOC_LITERAL(20, 204, 20), // "currentStepperStatus"
QT_MOC_LITERAL(21, 225, 18), // "currentCounterData"
QT_MOC_LITERAL(22, 244, 6), // "counts"
QT_MOC_LITERAL(23, 251, 15), // "positionChanged"
QT_MOC_LITERAL(24, 267, 11), // "newPosition"
QT_MOC_LITERAL(25, 279, 13), // "stepperMoving"
QT_MOC_LITERAL(26, 293, 8), // "scanData"
QT_MOC_LITERAL(27, 302, 11), // "counterData"
QT_MOC_LITERAL(28, 314, 21), // "updateCurrentPosition"
QT_MOC_LITERAL(29, 336, 15), // "stepperIsMoving"
QT_MOC_LITERAL(30, 352, 13), // "stepperStatus"
QT_MOC_LITERAL(31, 366, 6), // "status"
QT_MOC_LITERAL(32, 373, 16), // "updatePolarizers"
QT_MOC_LITERAL(33, 390, 10), // "scanFinish"
QT_MOC_LITERAL(34, 401, 12) // "scanPosition"

    },
    "Spectrometer_Control\0switchPolarizer\0"
    "\0Polarizer\0pol\0moveStepperToTarget\0"
    "steps\0dir\0runScan\0start\0stop\0accuracy\0"
    "initMonoPos\0MonoPos\0currentData\0"
    "QPair<int,int>\0data\0scanFinished\0"
    "currentScanPosition\0position\0"
    "currentStepperStatus\0currentCounterData\0"
    "counts\0positionChanged\0newPosition\0"
    "stepperMoving\0scanData\0counterData\0"
    "updateCurrentPosition\0stepperIsMoving\0"
    "stepperStatus\0status\0updatePolarizers\0"
    "scanFinish\0scanPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spectrometer_Control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    2,  117,    2, 0x06 /* Public */,
       8,    3,  122,    2, 0x06 /* Public */,
      12,    1,  129,    2, 0x06 /* Public */,
      14,    1,  132,    2, 0x06 /* Public */,
      17,    0,  135,    2, 0x06 /* Public */,
      18,    1,  136,    2, 0x06 /* Public */,
      20,    1,  139,    2, 0x06 /* Public */,
      21,    1,  142,    2, 0x06 /* Public */,
      23,    0,  145,    2, 0x06 /* Public */,
      24,    2,  146,    2, 0x06 /* Public */,
      25,    0,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    1,  152,    2, 0x0a /* Public */,
      27,    1,  155,    2, 0x0a /* Public */,
      28,    2,  158,    2, 0x0a /* Public */,
      29,    0,  163,    2, 0x0a /* Public */,
      30,    1,  164,    2, 0x0a /* Public */,
      32,    1,  167,    2, 0x0a /* Public */,
      33,    0,  170,    2, 0x0a /* Public */,
      34,    1,  171,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   19,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   19,

       0        // eod
};

void Spectrometer_Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Spectrometer_Control *_t = static_cast<Spectrometer_Control *>(_o);
        switch (_id) {
        case 0: _t->switchPolarizer((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 1: _t->moveStepperToTarget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->runScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->initMonoPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->currentData((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 5: _t->scanFinished(); break;
        case 6: _t->currentScanPosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->currentStepperStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->currentCounterData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->positionChanged(); break;
        case 10: _t->newPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->stepperMoving(); break;
        case 12: _t->scanData((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 13: _t->counterData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateCurrentPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->stepperIsMoving(); break;
        case 16: _t->stepperStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->updatePolarizers((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 18: _t->scanFinish(); break;
        case 19: _t->scanPosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Spectrometer_Control::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::switchPolarizer)) {
                *result = 0;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::moveStepperToTarget)) {
                *result = 1;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::runScan)) {
                *result = 2;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::initMonoPos)) {
                *result = 3;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(QPair<int,int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::currentData)) {
                *result = 4;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::scanFinished)) {
                *result = 5;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::currentScanPosition)) {
                *result = 6;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::currentStepperStatus)) {
                *result = 7;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::currentCounterData)) {
                *result = 8;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::positionChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::newPosition)) {
                *result = 10;
            }
        }
        {
            typedef void (Spectrometer_Control::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Spectrometer_Control::stepperMoving)) {
                *result = 11;
            }
        }
    }
}

const QMetaObject Spectrometer_Control::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Spectrometer_Control.data,
      qt_meta_data_Spectrometer_Control,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Spectrometer_Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spectrometer_Control::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Spectrometer_Control.stringdata))
        return static_cast<void*>(const_cast< Spectrometer_Control*>(this));
    return QObject::qt_metacast(_clname);
}

int Spectrometer_Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Spectrometer_Control::switchPolarizer(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Spectrometer_Control::moveStepperToTarget(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Spectrometer_Control::runScan(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Spectrometer_Control::initMonoPos(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Spectrometer_Control::currentData(QPair<int,int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Spectrometer_Control::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Spectrometer_Control::currentScanPosition(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Spectrometer_Control::currentStepperStatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Spectrometer_Control::currentCounterData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Spectrometer_Control::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Spectrometer_Control::newPosition(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Spectrometer_Control::stepperMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
