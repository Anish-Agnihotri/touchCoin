/****************************************************************************
** Meta object code from reading C++ file 'AddressBookFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/AddressBookFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__AddressBookFrame_t {
    QByteArrayData data[7];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletGui__AddressBookFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookFrame_t qt_meta_stringdata_WalletGui__AddressBookFrame = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 10),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 11),
QT_MOC_LITERAL(4, 52, 13),
QT_MOC_LITERAL(5, 66, 21),
QT_MOC_LITERAL(6, 88, 6)
    },
    "WalletGui::AddressBookFrame\0addClicked\0"
    "\0copyClicked\0deleteClicked\0"
    "currentAddressChanged\0_index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookFrame[] = {

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
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    1,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void WalletGui::AddressBookFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookFrame *_t = static_cast<AddressBookFrame *>(_o);
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->copyClicked(); break;
        case 2: _t->deleteClicked(); break;
        case 3: _t->currentAddressChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::AddressBookFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookFrame.data,
      qt_meta_data_WalletGui__AddressBookFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletGui::AddressBookFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookFrame.stringdata))
        return static_cast<void*>(const_cast< AddressBookFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::AddressBookFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
