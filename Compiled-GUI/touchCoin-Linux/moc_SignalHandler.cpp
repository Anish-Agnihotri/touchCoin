/****************************************************************************
** Meta object code from reading C++ file 'SignalHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/SignalHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SignalHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__SignalHandler_t {
    QByteArrayData data[3];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletGui__SignalHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletGui__SignalHandler_t qt_meta_stringdata_WalletGui__SignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 10),
QT_MOC_LITERAL(2, 36, 0)
    },
    "WalletGui::SignalHandler\0quitSignal\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__SignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGui::SignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalHandler *_t = static_cast<SignalHandler *>(_o);
        switch (_id) {
        case 0: _t->quitSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalHandler::quitSignal)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WalletGui::SignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__SignalHandler.data,
      qt_meta_data_WalletGui__SignalHandler,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletGui::SignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::SignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__SignalHandler.stringdata))
        return static_cast<void*>(const_cast< SignalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGui::SignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::SignalHandler::quitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
