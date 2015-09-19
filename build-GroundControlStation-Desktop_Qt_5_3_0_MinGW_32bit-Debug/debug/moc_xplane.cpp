/****************************************************************************
** Meta object code from reading C++ file 'xplane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GroundControlStation/xplane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xplane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XPlane_t {
    QByteArrayData data[11];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XPlane_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XPlane_t qt_meta_stringdata_XPlane = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 18),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 8),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 21),
QT_MOC_LITERAL(6, 71, 17),
QT_MOC_LITERAL(7, 89, 8),
QT_MOC_LITERAL(8, 98, 8),
QT_MOC_LITERAL(9, 107, 6),
QT_MOC_LITERAL(10, 114, 8)
    },
    "XPlane\0processTheDatagram\0\0datagram\0"
    "on_readyRead\0on_processTheDatagram\0"
    "on_Control_XPlane\0alerones\0elevator\0"
    "rudder\0throttle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XPlane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    4,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,    8,    9,   10,

       0        // eod
};

void XPlane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XPlane *_t = static_cast<XPlane *>(_o);
        switch (_id) {
        case 0: _t->processTheDatagram((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->on_readyRead(); break;
        case 2: _t->on_processTheDatagram((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->on_Control_XPlane((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XPlane::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XPlane::processTheDatagram)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject XPlane::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XPlane.data,
      qt_meta_data_XPlane,  qt_static_metacall, 0, 0}
};


const QMetaObject *XPlane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XPlane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XPlane.stringdata))
        return static_cast<void*>(const_cast< XPlane*>(this));
    return QObject::qt_metacast(_clname);
}

int XPlane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void XPlane::processTheDatagram(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
