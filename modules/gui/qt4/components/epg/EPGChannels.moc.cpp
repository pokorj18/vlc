/****************************************************************************
** Meta object code from reading C++ file 'EPGChannels.hpp'
**
** Created: Tue Feb 19 10:26:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGChannels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGChannels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGChannels[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x0a,
      35,   12,   12,   12, 0x0a,
      55,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGChannels[] = {
    "EPGChannels\0\0offset\0setOffset(int)\0"
    "addChannel(QString)\0removeChannel(QString)\0"
};

void EPGChannels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EPGChannels *_t = static_cast<EPGChannels *>(_o);
        switch (_id) {
        case 0: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addChannel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->removeChannel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EPGChannels::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EPGChannels::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGChannels,
      qt_meta_data_EPGChannels, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGChannels::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGChannels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGChannels::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGChannels))
        return static_cast<void*>(const_cast< EPGChannels*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGChannels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
