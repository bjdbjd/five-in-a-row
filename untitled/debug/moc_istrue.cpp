/****************************************************************************
** Meta object code from reading C++ file 'istrue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../istrue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'istrue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_istrue_t {
    QByteArrayData data[10];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_istrue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_istrue_t qt_meta_stringdata_istrue = {
    {
QT_MOC_LITERAL(0, 0, 6), // "istrue"
QT_MOC_LITERAL(1, 7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 54, 22), // "on_pushButton2_clicked"
QT_MOC_LITERAL(5, 77, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(6, 110, 5), // "value"
QT_MOC_LITERAL(7, 116, 18), // "on_paihang_clicked"
QT_MOC_LITERAL(8, 135, 14), // "on_set_clicked"
QT_MOC_LITERAL(9, 150, 14) // "on_Set_clicked"

    },
    "istrue\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton2_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_paihang_clicked\0on_set_clicked\0"
    "on_Set_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_istrue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void istrue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        istrue *_t = static_cast<istrue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton2_clicked(); break;
        case 3: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_paihang_clicked(); break;
        case 6: _t->on_Set_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject istrue::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_istrue.data,
    qt_meta_data_istrue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *istrue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *istrue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_istrue.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int istrue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
