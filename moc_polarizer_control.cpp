/****************************************************************************
** Meta object code from reading C++ file 'polarizer_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "polarizer_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polarizer_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_polarizer_control_worker_t {
    QByteArrayData data[6];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_polarizer_control_worker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_polarizer_control_worker_t qt_meta_stringdata_polarizer_control_worker = {
    {
QT_MOC_LITERAL(0, 0, 24), // "polarizer_control_worker"
QT_MOC_LITERAL(1, 25, 17), // "PolarizerSwitched"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "Polarizer"
QT_MOC_LITERAL(4, 54, 3), // "pol"
QT_MOC_LITERAL(5, 58, 15) // "switchPolarizer"

    },
    "polarizer_control_worker\0PolarizerSwitched\0"
    "\0Polarizer\0pol\0switchPolarizer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_polarizer_control_worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void polarizer_control_worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        polarizer_control_worker *_t = static_cast<polarizer_control_worker *>(_o);
        switch (_id) {
        case 0: _t->PolarizerSwitched((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 1: _t->switchPolarizer((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
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
        case 1:
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
            typedef void (polarizer_control_worker::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&polarizer_control_worker::PolarizerSwitched)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject polarizer_control_worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_polarizer_control_worker.data,
      qt_meta_data_polarizer_control_worker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *polarizer_control_worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *polarizer_control_worker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_polarizer_control_worker.stringdata))
        return static_cast<void*>(const_cast< polarizer_control_worker*>(this));
    return QObject::qt_metacast(_clname);
}

int polarizer_control_worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void polarizer_control_worker::PolarizerSwitched(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_polarizer_control_master_t {
    QByteArrayData data[8];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_polarizer_control_master_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_polarizer_control_master_t qt_meta_stringdata_polarizer_control_master = {
    {
QT_MOC_LITERAL(0, 0, 24), // "polarizer_control_master"
QT_MOC_LITERAL(1, 25, 16), // "switchingSuccess"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "Polarizer"
QT_MOC_LITERAL(4, 53, 15), // "switchPolarizer"
QT_MOC_LITERAL(5, 69, 13), // "setPolarizers"
QT_MOC_LITERAL(6, 83, 3), // "pol"
QT_MOC_LITERAL(7, 87, 22) // "PolarizerSwitchSuccess"

    },
    "polarizer_control_master\0switchingSuccess\0"
    "\0Polarizer\0switchPolarizer\0setPolarizers\0"
    "pol\0PolarizerSwitchSuccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_polarizer_control_master[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    6,

       0        // eod
};

void polarizer_control_master::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        polarizer_control_master *_t = static_cast<polarizer_control_master *>(_o);
        switch (_id) {
        case 0: _t->switchingSuccess((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 1: _t->switchPolarizer((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 2: _t->setPolarizers((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
        case 3: _t->PolarizerSwitchSuccess((*reinterpret_cast< Polarizer(*)>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Polarizer >(); break;
            }
            break;
        case 3:
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
            typedef void (polarizer_control_master::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&polarizer_control_master::switchingSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (polarizer_control_master::*_t)(Polarizer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&polarizer_control_master::switchPolarizer)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject polarizer_control_master::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_polarizer_control_master.data,
      qt_meta_data_polarizer_control_master,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *polarizer_control_master::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *polarizer_control_master::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_polarizer_control_master.stringdata))
        return static_cast<void*>(const_cast< polarizer_control_master*>(this));
    return QObject::qt_metacast(_clname);
}

int polarizer_control_master::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void polarizer_control_master::switchingSuccess(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void polarizer_control_master::switchPolarizer(Polarizer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
