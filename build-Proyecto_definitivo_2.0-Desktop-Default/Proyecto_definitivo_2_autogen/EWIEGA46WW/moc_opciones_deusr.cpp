/****************************************************************************
** Meta object code from reading C++ file 'opciones_deusr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Proyecto_definitivo_2.0/opciones_deusr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opciones_deusr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_opciones_deusr_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_opciones_deusr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_opciones_deusr_t qt_meta_stringdata_opciones_deusr = {
    {
QT_MOC_LITERAL(0, 0, 14), // "opciones_deusr"
QT_MOC_LITERAL(1, 15, 19), // "on_Edit_usr_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "on_Real_prueba_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_Reg_paciente_clicked"
QT_MOC_LITERAL(5, 83, 16) // "conectar_ventana"

    },
    "opciones_deusr\0on_Edit_usr_clicked\0\0"
    "on_Real_prueba_clicked\0on_Reg_paciente_clicked\0"
    "conectar_ventana"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_opciones_deusr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void opciones_deusr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        opciones_deusr *_t = static_cast<opciones_deusr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Edit_usr_clicked(); break;
        case 1: _t->on_Real_prueba_clicked(); break;
        case 2: _t->on_Reg_paciente_clicked(); break;
        case 3: _t->conectar_ventana(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject opciones_deusr::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_opciones_deusr.data,
      qt_meta_data_opciones_deusr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *opciones_deusr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *opciones_deusr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_opciones_deusr.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int opciones_deusr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
