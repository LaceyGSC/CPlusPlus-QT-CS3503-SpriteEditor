/****************************************************************************
** Meta object code from reading C++ file 'slideview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../slideview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slideview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SlideView_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlideView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlideView_t qt_meta_stringdata_SlideView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SlideView"
QT_MOC_LITERAL(1, 10, 13), // "updatePreview"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 26), // "updatePalettePreviewSignal"
QT_MOC_LITERAL(4, 52, 12), // "previewColor"
QT_MOC_LITERAL(5, 65, 8), // "undoSlot"
QT_MOC_LITERAL(6, 74, 8), // "redoSlot"
QT_MOC_LITERAL(7, 83, 14), // "rotateLeftSlot"
QT_MOC_LITERAL(8, 98, 15), // "rotateRightSlot"
QT_MOC_LITERAL(9, 114, 18), // "flipHorizontalSlot"
QT_MOC_LITERAL(10, 133, 16), // "flipVerticalSlot"
QT_MOC_LITERAL(11, 150, 15), // "paintBucketSlot"
QT_MOC_LITERAL(12, 166, 15), // "colorPickerSlot"
QT_MOC_LITERAL(13, 182, 6) // "_color"

    },
    "SlideView\0updatePreview\0\0"
    "updatePalettePreviewSignal\0previewColor\0"
    "undoSlot\0redoSlot\0rotateLeftSlot\0"
    "rotateRightSlot\0flipHorizontalSlot\0"
    "flipVerticalSlot\0paintBucketSlot\0"
    "colorPickerSlot\0_color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlideView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   13,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       1,

       0        // eod
};

void SlideView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlideView *_t = static_cast<SlideView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePreview(); break;
        case 1: _t->updatePalettePreviewSignal((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->undoSlot(); break;
        case 3: _t->redoSlot(); break;
        case 4: _t->rotateLeftSlot(); break;
        case 5: _t->rotateRightSlot(); break;
        case 6: _t->flipHorizontalSlot(); break;
        case 7: _t->flipVerticalSlot(); break;
        case 8: _t->paintBucketSlot(); break;
        case 9: _t->colorPickerSlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SlideView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlideView::updatePreview)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SlideView::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlideView::updatePalettePreviewSignal)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SlideView *_t = static_cast<SlideView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->previewColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SlideView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_SlideView.data,
      qt_meta_data_SlideView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SlideView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlideView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SlideView.stringdata0))
        return static_cast<void*>(const_cast< SlideView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int SlideView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SlideView::updatePreview()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SlideView::updatePalettePreviewSignal(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
