/****************************************************************************
** Meta object code from reading C++ file 'Juego.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Punto_3/Juego.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Juego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Juego_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Juego_t qt_meta_stringdata_Juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Juego"
QT_MOC_LITERAL(1, 6, 14), // "on_UNO_clicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 24), // "on_Juego_iconSizeChanged"
QT_MOC_LITERAL(4, 47, 8), // "iconSize"
QT_MOC_LITERAL(5, 56, 14), // "on_DOS_clicked"
QT_MOC_LITERAL(6, 71, 15), // "on_TRES_clicked"
QT_MOC_LITERAL(7, 87, 17), // "on_CUATRO_clicked"
QT_MOC_LITERAL(8, 105, 16), // "on_CINCO_clicked"
QT_MOC_LITERAL(9, 122, 15), // "on_SEIS_clicked"
QT_MOC_LITERAL(10, 138, 16), // "on_SIETE_clicked"
QT_MOC_LITERAL(11, 155, 15), // "on_OCHO_clicked"
QT_MOC_LITERAL(12, 171, 16) // "on_NUEVE_clicked"

    },
    "Juego\0on_UNO_clicked\0\0on_Juego_iconSizeChanged\0"
    "iconSize\0on_DOS_clicked\0on_TRES_clicked\0"
    "on_CUATRO_clicked\0on_CINCO_clicked\0"
    "on_SEIS_clicked\0on_SIETE_clicked\0"
    "on_OCHO_clicked\0on_NUEVE_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Juego[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Juego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Juego *_t = static_cast<Juego *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_UNO_clicked(); break;
        case 1: _t->on_DOS_clicked(); break;
        case 2: _t->on_TRES_clicked(); break;
        case 3: _t->on_CUATRO_clicked(); break;
        case 4: _t->on_CINCO_clicked(); break;
        case 5: _t->on_SEIS_clicked(); break;
        case 6: _t->on_SIETE_clicked(); break;
        case 7: _t->on_OCHO_clicked(); break;
        case 8: _t->on_NUEVE_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Juego::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Juego.data,
      qt_meta_data_Juego,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Juego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Juego::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Juego.stringdata0))
        return static_cast<void*>(const_cast< Juego*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Juego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
