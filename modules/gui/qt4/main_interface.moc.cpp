/****************************************************************************
** Meta object code from reading C++ file 'main_interface.hpp'
**
** Created: Tue Feb 19 10:26:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_interface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   15,   14,   14, 0x05,
      89,   14,   14,   14, 0x05,
     109,  107,   14,   14, 0x05,
     137,   14,   14,   14, 0x05,
     165,   14,   14,   14, 0x05,
     185,   14,   14,   14, 0x05,
     210,   14,   14,   14, 0x05,
     243,   14,   14,   14, 0x05,
     255,   14,   14,   14, 0x05,
     265,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     285,  276,   14,   14, 0x0a,
     304,   14,   14,   14, 0x2a,
     319,   14,   14,   14, 0x0a,
     343,   14,   14,   14, 0x0a,
     360,   14,   14,   14, 0x0a,
     386,   14,   14,   14, 0x0a,
     410,   14,   14,   14, 0x0a,
     434,   14,   14,   14, 0x0a,
     458,   14,   14,   14, 0x0a,
     486,   14,   14,   14, 0x0a,
     508,  498,   14,   14, 0x0a,
     537,   14,   14,   14, 0x0a,
     555,   15,   14,   14, 0x0a,
     596,   14,   14,   14, 0x0a,
     615,   14,   14,   14, 0x0a,
     626,   14,   14,   14, 0x0a,
     638,   14,   14,   14, 0x0a,
     652,   14,   14,   14, 0x08,
     660,   14,   14,   14, 0x08,
     679,   14,   14,   14, 0x08,
     698,   14,   14,   14, 0x08,
     721,  715,   14,   14, 0x08,
     749,   14,   14,   14, 0x28,
     770,   14,   14,   14, 0x08,
     824,   14,   14,   14, 0x08,
     858,   14,   14,   14, 0x08,
     890,   14,   14,   14, 0x08,
     913,   14,   14,   14, 0x08,
     940,   14,   14,   14, 0x08,
     965,  961,   14,   14, 0x08,
     986,  107,   14,   14, 0x08,
    1010,  107,   14,   14, 0x08,
    1036,   14,   14,   14, 0x08,
    1061,   14,   14,   14, 0x08,
    1081,   14,   14,   14, 0x08,
    1091,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainInterface[] = {
    "MainInterface\0\0p_id,pi_x,pi_y,pi_width,pi_height\0"
    "askGetVideo(WId*,int*,int*,uint*,uint*)\0"
    "askReleaseVideo()\0,\0askVideoToResize(uint,uint)\0"
    "askVideoSetFullScreen(bool)\0"
    "askVideoOnTop(bool)\0minimalViewToggled(bool)\0"
    "fullscreenInterfaceToggled(bool)\0"
    "askToQuit()\0askBoss()\0askRaise()\0"
    "b_docked\0dockPlaylist(bool)\0dockPlaylist()\0"
    "toggleMinimalView(bool)\0togglePlaylist()\0"
    "toggleUpdateSystrayMenu()\0"
    "showUpdateSystrayMenu()\0hideUpdateSystrayMenu()\0"
    "toggleAdvancedButtons()\0"
    "toggleInterfaceFullScreen()\0toggleFSC()\0"
    "b_visible\0setStatusBarVisibility(bool)\0"
    "popupMenu(QPoint)\0"
    "getVideoSlot(WId*,int*,int*,uint*,uint*)\0"
    "releaseVideoSlot()\0emitBoss()\0emitRaise()\0"
    "reloadPrefs()\0debug()\0destroyPopupMenu()\0"
    "recreateToolbars()\0setName(QString)\0"
    "title\0setVLCWindowsTitle(QString)\0"
    "setVLCWindowsTitle()\0"
    "handleSystrayClick(QSystemTrayIcon::ActivationReason)\0"
    "updateSystrayTooltipName(QString)\0"
    "updateSystrayTooltipStatus(int)\0"
    "showCryptedLabel(bool)\0"
    "handleKeyPress(QKeyEvent*)\0"
    "showBuffering(float)\0w,h\0resizeStack(int,int)\0"
    "setVideoSize(uint,uint)\0"
    "videoSizeChanged(int,int)\0"
    "setVideoFullScreen(bool)\0setVideoOnTop(bool)\0"
    "setBoss()\0setRaise()\0"
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainInterface *_t = static_cast<MainInterface *>(_o);
        switch (_id) {
        case 0: _t->askGetVideo((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 1: _t->askReleaseVideo(); break;
        case 2: _t->askVideoToResize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->askVideoSetFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->askVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->minimalViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fullscreenInterfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->askToQuit(); break;
        case 8: _t->askBoss(); break;
        case 9: _t->askRaise(); break;
        case 10: _t->dockPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->dockPlaylist(); break;
        case 12: _t->toggleMinimalView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->togglePlaylist(); break;
        case 14: _t->toggleUpdateSystrayMenu(); break;
        case 15: _t->showUpdateSystrayMenu(); break;
        case 16: _t->hideUpdateSystrayMenu(); break;
        case 17: _t->toggleAdvancedButtons(); break;
        case 18: _t->toggleInterfaceFullScreen(); break;
        case 19: _t->toggleFSC(); break;
        case 20: _t->setStatusBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 22: _t->getVideoSlot((*reinterpret_cast< WId*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< uint*(*)>(_a[4])),(*reinterpret_cast< uint*(*)>(_a[5]))); break;
        case 23: _t->releaseVideoSlot(); break;
        case 24: _t->emitBoss(); break;
        case 25: _t->emitRaise(); break;
        case 26: _t->reloadPrefs(); break;
        case 27: _t->debug(); break;
        case 28: _t->destroyPopupMenu(); break;
        case 29: _t->recreateToolbars(); break;
        case 30: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->setVLCWindowsTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->setVLCWindowsTitle(); break;
        case 33: _t->handleSystrayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 34: _t->updateSystrayTooltipName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->updateSystrayTooltipStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->showCryptedLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->handleKeyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 38: _t->showBuffering((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->resizeStack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->setVideoSize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 41: _t->videoSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setVideoFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setVideoOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setBoss(); break;
        case 45: _t->setRaise(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainInterface::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_MainInterface,
      qt_meta_data_MainInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::askGetVideo(WId * _t1, int * _t2, int * _t3, unsigned  * _t4, unsigned  * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInterface::askReleaseVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainInterface::askVideoToResize(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainInterface::askVideoSetFullScreen(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainInterface::askVideoOnTop(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainInterface::minimalViewToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainInterface::fullscreenInterfaceToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainInterface::askToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MainInterface::askBoss()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MainInterface::askRaise()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE