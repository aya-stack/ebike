/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sans_titre20/back/backend.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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
struct qt_meta_stringdata_CLASSbackendENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbackendENDCLASS = QtMocHelpers::stringData(
    "backend",
    "speedValueChanged",
    "",
    "rpmValueChanged",
    "increaseAssistLevel",
    "decreaseAssistLevel",
    "speedValue",
    "rpmValue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbackendENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[11];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbackendENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbackendENDCLASS_t qt_meta_stringdata_CLASSbackendENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "backend"
        QT_MOC_LITERAL(8, 17),  // "speedValueChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 15),  // "rpmValueChanged"
        QT_MOC_LITERAL(43, 19),  // "increaseAssistLevel"
        QT_MOC_LITERAL(63, 19),  // "decreaseAssistLevel"
        QT_MOC_LITERAL(83, 10),  // "speedValue"
        QT_MOC_LITERAL(94, 8)   // "rpmValue"
    },
    "backend",
    "speedValueChanged",
    "",
    "rpmValueChanged",
    "increaseAssistLevel",
    "decreaseAssistLevel",
    "speedValue",
    "rpmValue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbackendENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x02,    5 /* Public */,
       5,    0,   41,    2, 0x02,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00015001, uint(0), 0,
       7, QMetaType::Double, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSbackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbackendENDCLASS_t,
        // property 'speedValue'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'rpmValue'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<backend, std::true_type>,
        // method 'speedValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rpmValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'increaseAssistLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decreaseAssistLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<backend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->speedValueChanged(); break;
        case 1: _t->rpmValueChanged(); break;
        case 2: _t->increaseAssistLevel(); break;
        case 3: _t->decreaseAssistLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (backend::*)();
            if (_t _q_method = &backend::speedValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (backend::*)();
            if (_t _q_method = &backend::rpmValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<backend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->mspeedValue(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->mrpmValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbackendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void backend::speedValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void backend::rpmValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
