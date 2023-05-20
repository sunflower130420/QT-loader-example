/****************************************************************************
** Meta object code from reading C++ file 'signin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signin.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSignInENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSignInENDCLASS = QtMocHelpers::stringData(
    "SignIn",
    "on_Sign_in_clicked",
    "",
    "on_SignUp_clicked",
    "on_LGin_clicked",
    "minimizeApplicationSG",
    "on_minimize_clicked",
    "on_exit_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSignInENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[16];
    char stringdata5[22];
    char stringdata6[20];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSignInENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSignInENDCLASS_t qt_meta_stringdata_CLASSSignInENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "SignIn"
        QT_MOC_LITERAL(7, 18),  // "on_Sign_in_clicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 17),  // "on_SignUp_clicked"
        QT_MOC_LITERAL(45, 15),  // "on_LGin_clicked"
        QT_MOC_LITERAL(61, 21),  // "minimizeApplicationSG"
        QT_MOC_LITERAL(83, 19),  // "on_minimize_clicked"
        QT_MOC_LITERAL(103, 15)   // "on_exit_clicked"
    },
    "SignIn",
    "on_Sign_in_clicked",
    "",
    "on_SignUp_clicked",
    "on_LGin_clicked",
    "minimizeApplicationSG",
    "on_minimize_clicked",
    "on_exit_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSignInENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SignIn::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSignInENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSignInENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSignInENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SignIn, std::true_type>,
        // method 'on_Sign_in_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SignUp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LGin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimizeApplicationSG'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_minimize_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SignIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignIn *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Sign_in_clicked(); break;
        case 1: _t->on_SignUp_clicked(); break;
        case 2: _t->on_LGin_clicked(); break;
        case 3: _t->minimizeApplicationSG(); break;
        case 4: _t->on_minimize_clicked(); break;
        case 5: _t->on_exit_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SignIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignIn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSignInENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SignIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
