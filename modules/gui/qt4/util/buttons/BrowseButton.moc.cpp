/****************************************************************************
** Meta object code from reading C++ file 'BrowseButton.hpp'
**
** Created: Tue Feb 19 10:26:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BrowseButton.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrowseButton.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrowseButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BrowseButton[] = {
    "BrowseButton\0\0type\0setType(BrowseButton::Type)\0"
};

void BrowseButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BrowseButton *_t = static_cast<BrowseButton *>(_o);
        switch (_id) {
        case 0: _t->setType((*reinterpret_cast< BrowseButton::Type(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BrowseButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BrowseButton::staticMetaObject = {
    { &RoundButton::staticMetaObject, qt_meta_stringdata_BrowseButton,
      qt_meta_data_BrowseButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrowseButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrowseButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrowseButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrowseButton))
        return static_cast<void*>(const_cast< BrowseButton*>(this));
    return RoundButton::qt_metacast(_clname);
}

int BrowseButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RoundButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
