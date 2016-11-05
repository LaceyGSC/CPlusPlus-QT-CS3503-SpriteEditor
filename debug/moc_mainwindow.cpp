/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[43];
    char stringdata0[916];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "undoSignal"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "redoSignal"
QT_MOC_LITERAL(4, 34, 16), // "rotateLeftSignal"
QT_MOC_LITERAL(5, 51, 17), // "rotateRightSignal"
QT_MOC_LITERAL(6, 69, 20), // "flipHorizontalSignal"
QT_MOC_LITERAL(7, 90, 18), // "flipVerticalSignal"
QT_MOC_LITERAL(8, 109, 17), // "paintBucketSignal"
QT_MOC_LITERAL(9, 127, 11), // "changeFrame"
QT_MOC_LITERAL(10, 139, 12), // "updateButton"
QT_MOC_LITERAL(11, 152, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(12, 178, 27), // "on_removePushButton_clicked"
QT_MOC_LITERAL(13, 206, 29), // "on_setFramePushButton_clicked"
QT_MOC_LITERAL(14, 236, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(15, 260, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(16, 284, 27), // "on_RotateLeftButton_clicked"
QT_MOC_LITERAL(17, 312, 28), // "on_RotateRightButton_clicked"
QT_MOC_LITERAL(18, 341, 25), // "on_FlipHorzButton_clicked"
QT_MOC_LITERAL(19, 367, 25), // "on_FlipVertButton_clicked"
QT_MOC_LITERAL(20, 393, 21), // "on_LineButton_clicked"
QT_MOC_LITERAL(21, 415, 23), // "on_CircleButton_clicked"
QT_MOC_LITERAL(22, 439, 23), // "on_SquareButton_clicked"
QT_MOC_LITERAL(23, 463, 20), // "on_PenButton_clicked"
QT_MOC_LITERAL(24, 484, 27), // "on_PaintBrushButton_clicked"
QT_MOC_LITERAL(25, 512, 21), // "on_FillButton_clicked"
QT_MOC_LITERAL(26, 534, 22), // "on_EraseButton_clicked"
QT_MOC_LITERAL(27, 557, 27), // "on_EyeDropperButton_clicked"
QT_MOC_LITERAL(28, 585, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(29, 610, 4), // "arg1"
QT_MOC_LITERAL(30, 615, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(31, 642, 30), // "on_paintWidthSpin_valueChanged"
QT_MOC_LITERAL(32, 673, 30), // "on_paintWidthSlide_sliderMoved"
QT_MOC_LITERAL(33, 704, 8), // "position"
QT_MOC_LITERAL(34, 713, 30), // "on_shapeWidthSpin_valueChanged"
QT_MOC_LITERAL(35, 744, 30), // "on_shapeWidthSlide_sliderMoved"
QT_MOC_LITERAL(36, 775, 23), // "colorPaletteChangedSlot"
QT_MOC_LITERAL(37, 799, 12), // "previewColor"
QT_MOC_LITERAL(38, 812, 25), // "on_actionExport_triggered"
QT_MOC_LITERAL(39, 838, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(40, 861, 22), // "createNewSpriteProject"
QT_MOC_LITERAL(41, 884, 7), // "pixSize"
QT_MOC_LITERAL(42, 892, 23) // "on_actionOpen_triggered"

    },
    "MainWindow\0undoSignal\0\0redoSignal\0"
    "rotateLeftSignal\0rotateRightSignal\0"
    "flipHorizontalSignal\0flipVerticalSignal\0"
    "paintBucketSignal\0changeFrame\0"
    "updateButton\0on_AddFrameButton_clicked\0"
    "on_removePushButton_clicked\0"
    "on_setFramePushButton_clicked\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_RotateLeftButton_clicked\0"
    "on_RotateRightButton_clicked\0"
    "on_FlipHorzButton_clicked\0"
    "on_FlipVertButton_clicked\0"
    "on_LineButton_clicked\0on_CircleButton_clicked\0"
    "on_SquareButton_clicked\0on_PenButton_clicked\0"
    "on_PaintBrushButton_clicked\0"
    "on_FillButton_clicked\0on_EraseButton_clicked\0"
    "on_EyeDropperButton_clicked\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_checkBox_2_stateChanged\0"
    "on_paintWidthSpin_valueChanged\0"
    "on_paintWidthSlide_sliderMoved\0position\0"
    "on_shapeWidthSpin_valueChanged\0"
    "on_shapeWidthSlide_sliderMoved\0"
    "colorPaletteChangedSlot\0previewColor\0"
    "on_actionExport_triggered\0"
    "on_actionNew_triggered\0createNewSpriteProject\0"
    "pixSize\0on_actionOpen_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x06 /* Public */,
       3,    0,  200,    2, 0x06 /* Public */,
       4,    0,  201,    2, 0x06 /* Public */,
       5,    0,  202,    2, 0x06 /* Public */,
       6,    0,  203,    2, 0x06 /* Public */,
       7,    0,  204,    2, 0x06 /* Public */,
       8,    0,  205,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  206,    2, 0x08 /* Private */,
      10,    0,  207,    2, 0x08 /* Private */,
      11,    0,  208,    2, 0x08 /* Private */,
      12,    0,  209,    2, 0x08 /* Private */,
      13,    0,  210,    2, 0x08 /* Private */,
      14,    0,  211,    2, 0x08 /* Private */,
      15,    0,  212,    2, 0x08 /* Private */,
      16,    0,  213,    2, 0x08 /* Private */,
      17,    0,  214,    2, 0x08 /* Private */,
      18,    0,  215,    2, 0x08 /* Private */,
      19,    0,  216,    2, 0x08 /* Private */,
      20,    0,  217,    2, 0x08 /* Private */,
      21,    0,  218,    2, 0x08 /* Private */,
      22,    0,  219,    2, 0x08 /* Private */,
      23,    0,  220,    2, 0x08 /* Private */,
      24,    0,  221,    2, 0x08 /* Private */,
      25,    0,  222,    2, 0x08 /* Private */,
      26,    0,  223,    2, 0x08 /* Private */,
      27,    0,  224,    2, 0x08 /* Private */,
      28,    1,  225,    2, 0x08 /* Private */,
      30,    1,  228,    2, 0x08 /* Private */,
      31,    1,  231,    2, 0x08 /* Private */,
      32,    1,  234,    2, 0x08 /* Private */,
      34,    1,  237,    2, 0x08 /* Private */,
      35,    1,  240,    2, 0x08 /* Private */,
      36,    1,  243,    2, 0x08 /* Private */,
      38,    0,  246,    2, 0x08 /* Private */,
      39,    0,  247,    2, 0x08 /* Private */,
      40,    1,  248,    2, 0x08 /* Private */,
      42,    0,  251,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::QColor,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->undoSignal(); break;
        case 1: _t->redoSignal(); break;
        case 2: _t->rotateLeftSignal(); break;
        case 3: _t->rotateRightSignal(); break;
        case 4: _t->flipHorizontalSignal(); break;
        case 5: _t->flipVerticalSignal(); break;
        case 6: _t->paintBucketSignal(); break;
        case 7: _t->changeFrame(); break;
        case 8: _t->updateButton(); break;
        case 9: _t->on_AddFrameButton_clicked(); break;
        case 10: _t->on_removePushButton_clicked(); break;
        case 11: _t->on_setFramePushButton_clicked(); break;
        case 12: _t->on_actionUndo_triggered(); break;
        case 13: _t->on_actionRedo_triggered(); break;
        case 14: _t->on_RotateLeftButton_clicked(); break;
        case 15: _t->on_RotateRightButton_clicked(); break;
        case 16: _t->on_FlipHorzButton_clicked(); break;
        case 17: _t->on_FlipVertButton_clicked(); break;
        case 18: _t->on_LineButton_clicked(); break;
        case 19: _t->on_CircleButton_clicked(); break;
        case 20: _t->on_SquareButton_clicked(); break;
        case 21: _t->on_PenButton_clicked(); break;
        case 22: _t->on_PaintBrushButton_clicked(); break;
        case 23: _t->on_FillButton_clicked(); break;
        case 24: _t->on_EraseButton_clicked(); break;
        case 25: _t->on_EyeDropperButton_clicked(); break;
        case 26: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_paintWidthSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_paintWidthSlide_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_shapeWidthSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_shapeWidthSlide_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->colorPaletteChangedSlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 33: _t->on_actionExport_triggered(); break;
        case 34: _t->on_actionNew_triggered(); break;
        case 35: _t->createNewSpriteProject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_actionOpen_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::undoSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::redoSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rotateLeftSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rotateRightSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::flipHorizontalSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::flipVerticalSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::paintBucketSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::undoSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::redoSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::rotateLeftSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::rotateRightSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MainWindow::flipHorizontalSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void MainWindow::flipVerticalSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MainWindow::paintBucketSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
