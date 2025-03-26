/****************************************************************************
** Meta object code from reading C++ file 'FrmAirlineTicketOrderManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../FrmAirlineTicketOrderManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrmAirlineTicketOrderManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS = QtMocHelpers::stringData(
    "FrmAirlineTicketOrderManager",
    "append",
    "",
    "OrderInfo",
    "info",
    "on_listWidget_all_2_itemClicked",
    "QListWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[29];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[5];
    char stringdata5[32];
    char stringdata6[17];
    char stringdata7[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS_t qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "FrmAirlineTicketOrderManager"
        QT_MOC_LITERAL(29, 6),  // "append"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 9),  // "OrderInfo"
        QT_MOC_LITERAL(47, 4),  // "info"
        QT_MOC_LITERAL(52, 31),  // "on_listWidget_all_2_itemClicked"
        QT_MOC_LITERAL(84, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(101, 4)   // "item"
    },
    "FrmAirlineTicketOrderManager",
    "append",
    "",
    "OrderInfo",
    "info",
    "on_listWidget_all_2_itemClicked",
    "QListWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFrmAirlineTicketOrderManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject FrmAirlineTicketOrderManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFrmAirlineTicketOrderManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FrmAirlineTicketOrderManager, std::true_type>,
        // method 'append'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OrderInfo, std::false_type>,
        // method 'on_listWidget_all_2_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void FrmAirlineTicketOrderManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrmAirlineTicketOrderManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->append((*reinterpret_cast< std::add_pointer_t<OrderInfo>>(_a[1]))); break;
        case 1: _t->on_listWidget_all_2_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OrderInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FrmAirlineTicketOrderManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrmAirlineTicketOrderManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFrmAirlineTicketOrderManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrmAirlineTicketOrderManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
