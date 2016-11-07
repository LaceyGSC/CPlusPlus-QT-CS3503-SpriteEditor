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
    QByteArrayData data[55];
    char stringdata0[1148];
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
QT_MOC_LITERAL(9, 127, 17), // "colorPickerSignal"
QT_MOC_LITERAL(10, 145, 5), // "color"
QT_MOC_LITERAL(11, 151, 15), // "fpsPickerSignal"
QT_MOC_LITERAL(12, 167, 5), // "value"
QT_MOC_LITERAL(13, 173, 17), // "showPreviewSignal"
QT_MOC_LITERAL(14, 191, 19), // "std::vector<QImage>"
QT_MOC_LITERAL(15, 211, 9), // "imageList"
QT_MOC_LITERAL(16, 221, 11), // "changeFrame"
QT_MOC_LITERAL(17, 233, 12), // "updateButton"
QT_MOC_LITERAL(18, 246, 25), // "on_AddFrameButton_clicked"
QT_MOC_LITERAL(19, 272, 29), // "on_setFramePushButton_clicked"
QT_MOC_LITERAL(20, 302, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(21, 326, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(22, 350, 27), // "on_RotateLeftButton_clicked"
QT_MOC_LITERAL(23, 378, 28), // "on_RotateRightButton_clicked"
QT_MOC_LITERAL(24, 407, 25), // "on_FlipHorzButton_clicked"
QT_MOC_LITERAL(25, 433, 25), // "on_FlipVertButton_clicked"
QT_MOC_LITERAL(26, 459, 21), // "on_LineButton_clicked"
QT_MOC_LITERAL(27, 481, 23), // "on_CircleButton_clicked"
QT_MOC_LITERAL(28, 505, 23), // "on_SquareButton_clicked"
QT_MOC_LITERAL(29, 529, 20), // "on_PenButton_clicked"
QT_MOC_LITERAL(30, 550, 27), // "on_PaintBrushButton_clicked"
QT_MOC_LITERAL(31, 578, 21), // "on_FillButton_clicked"
QT_MOC_LITERAL(32, 600, 22), // "on_EraseButton_clicked"
QT_MOC_LITERAL(33, 623, 27), // "on_EyeDropperButton_clicked"
QT_MOC_LITERAL(34, 651, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(35, 678, 4), // "arg1"
QT_MOC_LITERAL(36, 683, 30), // "on_paintWidthSpin_valueChanged"
QT_MOC_LITERAL(37, 714, 30), // "on_paintWidthSlide_sliderMoved"
QT_MOC_LITERAL(38, 745, 8), // "position"
QT_MOC_LITERAL(39, 754, 23), // "colorPaletteChangedSlot"
QT_MOC_LITERAL(40, 778, 12), // "previewColor"
QT_MOC_LITERAL(41, 791, 25), // "on_actionExport_triggered"
QT_MOC_LITERAL(42, 817, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(43, 840, 22), // "createNewSpriteProject"
QT_MOC_LITERAL(44, 863, 7), // "pixSize"
QT_MOC_LITERAL(45, 871, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(46, 895, 26), // "on_CopyFrameButton_clicked"
QT_MOC_LITERAL(47, 922, 27), // "on_MergeFrameButton_clicked"
QT_MOC_LITERAL(48, 950, 28), // "on_RemoveFrameButton_clicked"
QT_MOC_LITERAL(49, 979, 30), // "on_IncreaseIndexButton_clicked"
QT_MOC_LITERAL(50, 1010, 30), // "on_DecreaseIndexButton_clicked"
QT_MOC_LITERAL(51, 1041, 27), // "on_frameSlider_valueChanged"
QT_MOC_LITERAL(52, 1069, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(53, 1102, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(54, 1126, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0undoSignal\0\0redoSignal\0"
    "rotateLeftSignal\0rotateRightSignal\0"
    "flipHorizontalSignal\0flipVerticalSignal\0"
    "paintBucketSignal\0colorPickerSignal\0"
    "color\0fpsPickerSignal\0value\0"
    "showPreviewSignal\0std::vector<QImage>\0"
    "imageList\0changeFrame\0updateButton\0"
    "on_AddFrameButton_clicked\0"
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
    "on_checkBox_2_stateChanged\0arg1\0"
    "on_paintWidthSpin_valueChanged\0"
    "on_paintWidthSlide_sliderMoved\0position\0"
    "colorPaletteChangedSlot\0previewColor\0"
    "on_actionExport_triggered\0"
    "on_actionNew_triggered\0createNewSpriteProject\0"
    "pixSize\0on_actionOpen_triggered\0"
    "on_CopyFrameButton_clicked\0"
    "on_MergeFrameButton_clicked\0"
    "on_RemoveFrameButton_clicked\0"
    "on_IncreaseIndexButton_clicked\0"
    "on_DecreaseIndexButton_clicked\0"
    "on_frameSlider_valueChanged\0"
    "on_horizontalSlider_valueChanged\0"
    "on_spinBox_valueChanged\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  239,    2, 0x06 /* Public */,
       3,    0,  240,    2, 0x06 /* Public */,
       4,    0,  241,    2, 0x06 /* Public */,
       5,    0,  242,    2, 0x06 /* Public */,
       6,    0,  243,    2, 0x06 /* Public */,
       7,    0,  244,    2, 0x06 /* Public */,
       8,    0,  245,    2, 0x06 /* Public */,
       9,    1,  246,    2, 0x06 /* Public */,
      11,    1,  249,    2, 0x06 /* Public */,
      13,    2,  252,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  257,    2, 0x08 /* Private */,
      17,    0,  258,    2, 0x08 /* Private */,
      18,    0,  259,    2, 0x08 /* Private */,
      19,    0,  260,    2, 0x08 /* Private */,
      20,    0,  261,    2, 0x08 /* Private */,
      21,    0,  262,    2, 0x08 /* Private */,
      22,    0,  263,    2, 0x08 /* Private */,
      23,    0,  264,    2, 0x08 /* Private */,
      24,    0,  265,    2, 0x08 /* Private */,
      25,    0,  266,    2, 0x08 /* Private */,
      26,    0,  267,    2, 0x08 /* Private */,
      27,    0,  268,    2, 0x08 /* Private */,
      28,    0,  269,    2, 0x08 /* Private */,
      29,    0,  270,    2, 0x08 /* Private */,
      30,    0,  271,    2, 0x08 /* Private */,
      31,    0,  272,    2, 0x08 /* Private */,
      32,    0,  273,    2, 0x08 /* Private */,
      33,    0,  274,    2, 0x08 /* Private */,
      34,    1,  275,    2, 0x08 /* Private */,
      36,    1,  278,    2, 0x08 /* Private */,
      37,    1,  281,    2, 0x08 /* Private */,
      39,    1,  284,    2, 0x08 /* Private */,
      41,    0,  287,    2, 0x08 /* Private */,
      42,    0,  288,    2, 0x08 /* Private */,
      43,    1,  289,    2, 0x08 /* Private */,
      45,    0,  292,    2, 0x08 /* Private */,
      46,    0,  293,    2, 0x08 /* Private */,
      47,    0,  294,    2, 0x08 /* Private */,
      48,    0,  295,    2, 0x08 /* Private */,
      49,    0,  296,    2, 0x08 /* Private */,
      50,    0,  297,    2, 0x08 /* Private */,
      51,    1,  298,    2, 0x08 /* Private */,
      52,    1,  301,    2, 0x08 /* Private */,
      53,    1,  304,    2, 0x08 /* Private */,
      54,    0,  307,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   12,   15,

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
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QColor,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   35,
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
        case 7: _t->colorPickerSignal((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->fpsPickerSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showPreviewSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const std::vector<QImage>(*)>(_a[2]))); break;
        case 10: _t->changeFrame(); break;
        case 11: _t->updateButton(); break;
        case 12: _t->on_AddFrameButton_clicked(); break;
        case 13: _t->on_setFramePushButton_clicked(); break;
        case 14: _t->on_actionUndo_triggered(); break;
        case 15: _t->on_actionRedo_triggered(); break;
        case 16: _t->on_RotateLeftButton_clicked(); break;
        case 17: _t->on_RotateRightButton_clicked(); break;
        case 18: _t->on_FlipHorzButton_clicked(); break;
        case 19: _t->on_FlipVertButton_clicked(); break;
        case 20: _t->on_LineButton_clicked(); break;
        case 21: _t->on_CircleButton_clicked(); break;
        case 22: _t->on_SquareButton_clicked(); break;
        case 23: _t->on_PenButton_clicked(); break;
        case 24: _t->on_PaintBrushButton_clicked(); break;
        case 25: _t->on_FillButton_clicked(); break;
        case 26: _t->on_EraseButton_clicked(); break;
        case 27: _t->on_EyeDropperButton_clicked(); break;
        case 28: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_paintWidthSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_paintWidthSlide_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->colorPaletteChangedSlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 32: _t->on_actionExport_triggered(); break;
        case 33: _t->on_actionNew_triggered(); break;
        case 34: _t->createNewSpriteProject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_actionOpen_triggered(); break;
        case 36: _t->on_CopyFrameButton_clicked(); break;
        case 37: _t->on_MergeFrameButton_clicked(); break;
        case 38: _t->on_RemoveFrameButton_clicked(); break;
        case 39: _t->on_IncreaseIndexButton_clicked(); break;
        case 40: _t->on_DecreaseIndexButton_clicked(); break;
        case 41: _t->on_frameSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_pushButton_clicked(); break;
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
        {
            typedef void (MainWindow::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::colorPickerSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::fpsPickerSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , const std::vector<QImage> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::showPreviewSignal)) {
                *result = 9;
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
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 45;
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

// SIGNAL 7
void MainWindow::colorPickerSignal(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::fpsPickerSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::showPreviewSignal(int _t1, const std::vector<QImage> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
