/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_controller_t {
    QByteArrayData data[30];
    char stringdata[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller_t qt_meta_stringdata_controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "controller"
QT_MOC_LITERAL(1, 11, 12), // "sendDataMain"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 39), // "QPair<QString,QPair<QString,Q..."
QT_MOC_LITERAL(4, 65, 11), // "sendDataMov"
QT_MOC_LITERAL(5, 77, 11), // "sendDataDat"
QT_MOC_LITERAL(6, 89, 9), // "connectTX"
QT_MOC_LITERAL(7, 99, 13), // "DataConnectTX"
QT_MOC_LITERAL(8, 113, 16), // "gotNewConnection"
QT_MOC_LITERAL(9, 130, 4), // "data"
QT_MOC_LITERAL(10, 135, 19), // "MovgotNewconnection"
QT_MOC_LITERAL(11, 155, 19), // "DatgotNewconnection"
QT_MOC_LITERAL(12, 175, 7), // "gotData"
QT_MOC_LITERAL(13, 183, 7), // "wrongIP"
QT_MOC_LITERAL(14, 191, 11), // "DataGotData"
QT_MOC_LITERAL(15, 203, 11), // "DataWrongIP"
QT_MOC_LITERAL(16, 215, 11), // "currentData"
QT_MOC_LITERAL(17, 227, 14), // "QPair<int,int>"
QT_MOC_LITERAL(18, 242, 12), // "scanFinished"
QT_MOC_LITERAL(19, 255, 20), // "currentStepperStatus"
QT_MOC_LITERAL(20, 276, 6), // "status"
QT_MOC_LITERAL(21, 283, 19), // "currentScanPosition"
QT_MOC_LITERAL(22, 303, 8), // "position"
QT_MOC_LITERAL(23, 312, 18), // "currentCounterData"
QT_MOC_LITERAL(24, 331, 6), // "counts"
QT_MOC_LITERAL(25, 338, 15), // "positionChanged"
QT_MOC_LITERAL(26, 354, 11), // "newPosition"
QT_MOC_LITERAL(27, 366, 5), // "steps"
QT_MOC_LITERAL(28, 372, 3), // "dir"
QT_MOC_LITERAL(29, 376, 13) // "stepperMoving"

    },
    "controller\0sendDataMain\0\0"
    "QPair<QString,QPair<QString,QVariant> >\0"
    "sendDataMov\0sendDataDat\0connectTX\0"
    "DataConnectTX\0gotNewConnection\0data\0"
    "MovgotNewconnection\0DatgotNewconnection\0"
    "gotData\0wrongIP\0DataGotData\0DataWrongIP\0"
    "currentData\0QPair<int,int>\0scanFinished\0"
    "currentStepperStatus\0status\0"
    "currentScanPosition\0position\0"
    "currentCounterData\0counts\0positionChanged\0"
    "newPosition\0steps\0dir\0stepperMoving"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    1,  117,    2, 0x06 /* Public */,
       5,    1,  120,    2, 0x06 /* Public */,
       6,    0,  123,    2, 0x06 /* Public */,
       7,    0,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  125,    2, 0x08 /* Private */,
      10,    1,  128,    2, 0x08 /* Private */,
      11,    1,  131,    2, 0x08 /* Private */,
      12,    1,  134,    2, 0x08 /* Private */,
      13,    0,  137,    2, 0x08 /* Private */,
      14,    1,  138,    2, 0x08 /* Private */,
      15,    0,  141,    2, 0x08 /* Private */,
      16,    1,  142,    2, 0x08 /* Private */,
      18,    0,  145,    2, 0x08 /* Private */,
      19,    1,  146,    2, 0x08 /* Private */,
      21,    1,  149,    2, 0x08 /* Private */,
      23,    1,  152,    2, 0x08 /* Private */,
      25,    0,  155,    2, 0x08 /* Private */,
      26,    2,  156,    2, 0x08 /* Private */,
      29,    0,  161,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   27,   28,
    QMetaType::Void,

       0        // eod
};

void controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        controller *_t = static_cast<controller *>(_o);
        switch (_id) {
        case 0: _t->sendDataMain((*reinterpret_cast< QPair<QString,QPair<QString,QVariant> >(*)>(_a[1]))); break;
        case 1: _t->sendDataMov((*reinterpret_cast< QPair<QString,QPair<QString,QVariant> >(*)>(_a[1]))); break;
        case 2: _t->sendDataDat((*reinterpret_cast< QPair<QString,QPair<QString,QVariant> >(*)>(_a[1]))); break;
        case 3: _t->connectTX(); break;
        case 4: _t->DataConnectTX(); break;
        case 5: _t->gotNewConnection((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->MovgotNewconnection((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->DatgotNewconnection((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 8: _t->gotData((*reinterpret_cast< QPair<QString,QPair<QString,QVariant> >(*)>(_a[1]))); break;
        case 9: _t->wrongIP(); break;
        case 10: _t->DataGotData((*reinterpret_cast< QPair<QString,QPair<QString,QVariant> >(*)>(_a[1]))); break;
        case 11: _t->DataWrongIP(); break;
        case 12: _t->currentData((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 13: _t->scanFinished(); break;
        case 14: _t->currentStepperStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->currentScanPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->currentCounterData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->positionChanged(); break;
        case 18: _t->newPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->stepperMoving(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (controller::*_t)(QPair<QString,QPair<QString,QVariant> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::sendDataMain)) {
                *result = 0;
            }
        }
        {
            typedef void (controller::*_t)(QPair<QString,QPair<QString,QVariant> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::sendDataMov)) {
                *result = 1;
            }
        }
        {
            typedef void (controller::*_t)(QPair<QString,QPair<QString,QVariant> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::sendDataDat)) {
                *result = 2;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::connectTX)) {
                *result = 3;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::DataConnectTX)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject controller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller.data,
      qt_meta_data_controller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_controller.stringdata))
        return static_cast<void*>(const_cast< controller*>(this));
    return QObject::qt_metacast(_clname);
}

int controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void controller::sendDataMain(QPair<QString,QPair<QString,QVariant> > _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controller::sendDataMov(QPair<QString,QPair<QString,QVariant> > _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void controller::sendDataDat(QPair<QString,QPair<QString,QVariant> > _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void controller::connectTX()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void controller::DataConnectTX()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
