/****************************************************************************
** Meta object code from reading C++ file 'TransactionsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/TransactionsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__TransactionsModel_t {
    QByteArrayData data[25];
    char stringdata[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletGui__TransactionsModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletGui__TransactionsModel_t qt_meta_stringdata_WalletGui__TransactionsModel = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 7),
QT_MOC_LITERAL(2, 37, 12),
QT_MOC_LITERAL(3, 50, 11),
QT_MOC_LITERAL(4, 62, 13),
QT_MOC_LITERAL(5, 76, 14),
QT_MOC_LITERAL(6, 91, 17),
QT_MOC_LITERAL(7, 109, 11),
QT_MOC_LITERAL(8, 121, 10),
QT_MOC_LITERAL(9, 132, 13),
QT_MOC_LITERAL(10, 146, 11),
QT_MOC_LITERAL(11, 158, 5),
QT_MOC_LITERAL(12, 164, 9),
QT_MOC_LITERAL(13, 174, 9),
QT_MOC_LITERAL(14, 184, 9),
QT_MOC_LITERAL(15, 194, 12),
QT_MOC_LITERAL(16, 207, 11),
QT_MOC_LITERAL(17, 219, 15),
QT_MOC_LITERAL(18, 235, 9),
QT_MOC_LITERAL(19, 245, 19),
QT_MOC_LITERAL(20, 265, 11),
QT_MOC_LITERAL(21, 277, 8),
QT_MOC_LITERAL(22, 286, 28),
QT_MOC_LITERAL(23, 315, 11),
QT_MOC_LITERAL(24, 327, 8)
    },
    "WalletGui::TransactionsModel\0Columns\0"
    "COLUMN_STATE\0COLUMN_DATE\0COLUMN_AMOUNT\0"
    "COLUMN_ADDRESS\0COLUMN_PAYMENT_ID\0"
    "COLUMN_HASH\0COLUMN_FEE\0COLUMN_HEIGHT\0"
    "COLUMN_TYPE\0Roles\0ROLE_DATE\0ROLE_TYPE\0"
    "ROLE_HASH\0ROLE_ADDRESS\0ROLE_AMOUNT\0"
    "ROLE_PAYMENT_ID\0ROLE_ICON\0ROLE_TRANSACTION_ID\0"
    "ROLE_HEIGHT\0ROLE_FEE\0ROLE_NUMBER_OF_CONFIRMATIONS\0"
    "ROLE_COLUMN\0ROLE_ROW\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransactionsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    9,   22,
      11, 0x0,   13,   40,

 // enum data: key, value
       2, uint(WalletGui::TransactionsModel::COLUMN_STATE),
       3, uint(WalletGui::TransactionsModel::COLUMN_DATE),
       4, uint(WalletGui::TransactionsModel::COLUMN_AMOUNT),
       5, uint(WalletGui::TransactionsModel::COLUMN_ADDRESS),
       6, uint(WalletGui::TransactionsModel::COLUMN_PAYMENT_ID),
       7, uint(WalletGui::TransactionsModel::COLUMN_HASH),
       8, uint(WalletGui::TransactionsModel::COLUMN_FEE),
       9, uint(WalletGui::TransactionsModel::COLUMN_HEIGHT),
      10, uint(WalletGui::TransactionsModel::COLUMN_TYPE),
      12, uint(WalletGui::TransactionsModel::ROLE_DATE),
      13, uint(WalletGui::TransactionsModel::ROLE_TYPE),
      14, uint(WalletGui::TransactionsModel::ROLE_HASH),
      15, uint(WalletGui::TransactionsModel::ROLE_ADDRESS),
      16, uint(WalletGui::TransactionsModel::ROLE_AMOUNT),
      17, uint(WalletGui::TransactionsModel::ROLE_PAYMENT_ID),
      18, uint(WalletGui::TransactionsModel::ROLE_ICON),
      19, uint(WalletGui::TransactionsModel::ROLE_TRANSACTION_ID),
      20, uint(WalletGui::TransactionsModel::ROLE_HEIGHT),
      21, uint(WalletGui::TransactionsModel::ROLE_FEE),
      22, uint(WalletGui::TransactionsModel::ROLE_NUMBER_OF_CONFIRMATIONS),
      23, uint(WalletGui::TransactionsModel::ROLE_COLUMN),
      24, uint(WalletGui::TransactionsModel::ROLE_ROW),

       0        // eod
};

void WalletGui::TransactionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WalletGui::TransactionsModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionsModel.data,
      qt_meta_data_WalletGui__TransactionsModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletGui::TransactionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionsModel.stringdata))
        return static_cast<void*>(const_cast< TransactionsModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::TransactionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
