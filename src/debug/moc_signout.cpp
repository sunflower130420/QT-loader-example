/****************************************************************************
** Meta object code from reading C++ file 'signout.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signout.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSSignOutENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSignOutENDCLASS = QtMocHelpers::stringData(
    "SignOut",
    "on_RegisterAcc_Sout_clicked",
    "",
    "on_SignIn_Sout_clicked",
    "minimizeApplicationSO",
    "on_minimize_clicked",
    "on_exit_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSignOutENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSignOutENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSignOutENDCLASS_t qt_meta_stringdata_CLASSSignOutENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "SignOut"
        QT_MOC_LITERAL(8, 27),  // "on_RegisterAcc_Sout_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "on_SignIn_Sout_clicked"
        QT_MOC_LITERAL(60, 21),  // "minimizeApplicationSO"
        QT_MOC_LITERAL(82, 19),  // "on_minimize_clicked"
        QT_MOC_LITERAL(102, 15)   // "on_exit_clicked"
    },
    "SignOut",
    "on_RegisterAcc_Sout_clicked",
    "",
    "on_SignIn_Sout_clicked",
    "minimizeApplicationSO",
    "on_minimize_clicked",
    "on_exit_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSignOutENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SignOut::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSignOutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSignOutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSignOutENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SignOut, std::true_type>,
        // method 'on_RegisterAcc_Sout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SignIn_Sout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimizeApplicationSO'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minimize_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SignOut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignOut *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_RegisterAcc_Sout_clicked(); break;
        case 1: _t->on_SignIn_Sout_clicked(); break;
        case 2: _t->minimizeApplicationSO(); break;
        case 3: _t->on_minimize_clicked(); break;
        case 4: _t->on_exit_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SignOut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignOut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSignOutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SignOut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
