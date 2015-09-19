/****************************************************************************
** Meta object code from reading C++ file 'speedcommunications.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GroundControlStation/speedcommunications.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speedcommunications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpeedCommunications_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SpeedCommunications_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SpeedCommunications_t qt_meta_stringdata_SpeedCommunications = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 6),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 11),
QT_MOC_LITERAL(4, 40, 11),
QT_MOC_LITERAL(5, 52, 10),
QT_MOC_LITERAL(6, 63, 7),
QT_MOC_LITERAL(7, 71, 6),
QT_MOC_LITERAL(8, 78, 11),
QT_MOC_LITERAL(9, 90, 3),
QT_MOC_LITERAL(10, 94, 11),
QT_MOC_LITERAL(11, 106, 12)
    },
    "SpeedCommunications\0usoUDP\0\0usoSerialRX\0"
    "usoSerialTX\0serialLost\0timeout\0udpctr\0"
    "rxserialctr\0ctr\0txserialctr\0fallopaquete\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedCommunications[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x05,
       3,    1,   62,    2, 0x05,
       4,    1,   65,    2, 0x05,
       5,    1,   68,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    0,   71,    2, 0x0a,
       7,    1,   72,    2, 0x0a,
       8,    1,   75,    2, 0x0a,
      10,    1,   78,    2, 0x0a,
      11,    1,   81,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void SpeedCommunications::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedCommunications *_t = static_cast<SpeedCommunications *>(_o);
        switch (_id) {
        case 0: _t->usoUDP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->usoSerialRX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->usoSerialTX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->serialLost((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->timeout(); break;
        case 5: _t->udpctr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->rxserialctr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->txserialctr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->fallopaquete((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpeedCommunications::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedCommunications::usoUDP)) {
                *result = 0;
            }
        }
        {
            typedef void (SpeedCommunications::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedCommunications::usoSerialRX)) {
                *result = 1;
            }
        }
        {
            typedef void (SpeedCommunications::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedCommunications::usoSerialTX)) {
                *result = 2;
            }
        }
        {
            typedef void (SpeedCommunications::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedCommunications::serialLost)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject SpeedCommunications::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpeedCommunications.data,
      qt_meta_data_SpeedCommunications,  qt_static_metacall, 0, 0}
};


const QMetaObject *SpeedCommunications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedCommunications::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedCommunications.stringdata))
        return static_cast<void*>(const_cast< SpeedCommunications*>(this));
    return QObject::qt_metacast(_clname);
}

int SpeedCommunications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SpeedCommunications::usoUDP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpeedCommunications::usoSerialRX(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpeedCommunications::usoSerialTX(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SpeedCommunications::serialLost(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
