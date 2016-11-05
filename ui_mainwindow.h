/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExport;
    QAction *actionExit;
    QAction *actionPixel_Size;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAdd_Frame;
    QAction *actionDelete_Frame;
    QAction *actionCopy_Fream;
    QWidget *centralWidget;
    QToolBox *ToolPages;
    QWidget *Draw;
    QGridLayout *_2;
    QPushButton *PaintBrushButton;
    QSpinBox *paintWidthSpin;
    QPushButton *FillButton;
    QPushButton *PenButton;
    QPushButton *EraseButton;
    QSlider *paintWidthSlide;
    QLabel *label_2;
    QPushButton *EyeDropperButton;
    QWidget *Shape;
    QPushButton *LineButton;
    QPushButton *CircleButton;
    QPushButton *SquareButton;
    QCheckBox *checkBox_2;
    QSlider *shapeWidthSlide;
    QLabel *label;
    QSpinBox *shapeWidthSpin;
    QWidget *page_3;
    QPushButton *RotateRightButton;
    QPushButton *RotateLeftButton;
    QPushButton *FlipHorzButton;
    QPushButton *FlipVertButton;
    QFrame *frame_2;
    QGridLayout *drawingGridLayout;
    QPushButton *AddFrameButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *colorPaletteWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(583, 615);
        QPalette palette;
        QBrush brush(QColor(170, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPixel_Size = new QAction(MainWindow);
        actionPixel_Size->setObjectName(QStringLiteral("actionPixel_Size"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionAdd_Frame = new QAction(MainWindow);
        actionAdd_Frame->setObjectName(QStringLiteral("actionAdd_Frame"));
        actionDelete_Frame = new QAction(MainWindow);
        actionDelete_Frame->setObjectName(QStringLiteral("actionDelete_Frame"));
        actionCopy_Fream = new QAction(MainWindow);
        actionCopy_Fream->setObjectName(QStringLiteral("actionCopy_Fream"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ToolPages = new QToolBox(centralWidget);
        ToolPages->setObjectName(QStringLiteral("ToolPages"));
        ToolPages->setGeometry(QRect(10, 10, 131, 431));
        ToolPages->setAutoFillBackground(false);
        Draw = new QWidget();
        Draw->setObjectName(QStringLiteral("Draw"));
        Draw->setGeometry(QRect(0, 0, 131, 350));
        _2 = new QGridLayout(Draw);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QStringLiteral("_2"));
        PaintBrushButton = new QPushButton(Draw);
        PaintBrushButton->setObjectName(QStringLiteral("PaintBrushButton"));

        _2->addWidget(PaintBrushButton, 1, 0, 1, 1);

        paintWidthSpin = new QSpinBox(Draw);
        paintWidthSpin->setObjectName(QStringLiteral("paintWidthSpin"));

        _2->addWidget(paintWidthSpin, 4, 0, 1, 1);

        FillButton = new QPushButton(Draw);
        FillButton->setObjectName(QStringLiteral("FillButton"));

        _2->addWidget(FillButton, 8, 0, 1, 1);

        PenButton = new QPushButton(Draw);
        PenButton->setObjectName(QStringLiteral("PenButton"));

        _2->addWidget(PenButton, 0, 0, 1, 1);

        EraseButton = new QPushButton(Draw);
        EraseButton->setObjectName(QStringLiteral("EraseButton"));

        _2->addWidget(EraseButton, 6, 0, 1, 1);

        paintWidthSlide = new QSlider(Draw);
        paintWidthSlide->setObjectName(QStringLiteral("paintWidthSlide"));
        paintWidthSlide->setOrientation(Qt::Horizontal);

        _2->addWidget(paintWidthSlide, 5, 0, 1, 1);

        label_2 = new QLabel(Draw);
        label_2->setObjectName(QStringLiteral("label_2"));

        _2->addWidget(label_2, 3, 0, 1, 1);

        EyeDropperButton = new QPushButton(Draw);
        EyeDropperButton->setObjectName(QStringLiteral("EyeDropperButton"));

        _2->addWidget(EyeDropperButton, 7, 0, 1, 1);

        ToolPages->addItem(Draw, QStringLiteral("Page 1"));
        Shape = new QWidget();
        Shape->setObjectName(QStringLiteral("Shape"));
        Shape->setGeometry(QRect(0, 0, 131, 350));
        LineButton = new QPushButton(Shape);
        LineButton->setObjectName(QStringLiteral("LineButton"));
        LineButton->setGeometry(QRect(10, 10, 81, 32));
        CircleButton = new QPushButton(Shape);
        CircleButton->setObjectName(QStringLiteral("CircleButton"));
        CircleButton->setGeometry(QRect(10, 40, 81, 32));
        SquareButton = new QPushButton(Shape);
        SquareButton->setObjectName(QStringLiteral("SquareButton"));
        SquareButton->setGeometry(QRect(10, 70, 81, 32));
        checkBox_2 = new QCheckBox(Shape);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 110, 89, 20));
        shapeWidthSlide = new QSlider(Shape);
        shapeWidthSlide->setObjectName(QStringLiteral("shapeWidthSlide"));
        shapeWidthSlide->setGeometry(QRect(0, 180, 111, 22));
        shapeWidthSlide->setOrientation(Qt::Horizontal);
        label = new QLabel(Shape);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 140, 71, 16));
        shapeWidthSpin = new QSpinBox(Shape);
        shapeWidthSpin->setObjectName(QStringLiteral("shapeWidthSpin"));
        shapeWidthSpin->setGeometry(QRect(20, 160, 51, 24));
        ToolPages->addItem(Shape, QStringLiteral("Page 2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 131, 350));
        RotateRightButton = new QPushButton(page_3);
        RotateRightButton->setObjectName(QStringLiteral("RotateRightButton"));
        RotateRightButton->setGeometry(QRect(10, 10, 81, 21));
        RotateLeftButton = new QPushButton(page_3);
        RotateLeftButton->setObjectName(QStringLiteral("RotateLeftButton"));
        RotateLeftButton->setGeometry(QRect(0, 30, 101, 32));
        FlipHorzButton = new QPushButton(page_3);
        FlipHorzButton->setObjectName(QStringLiteral("FlipHorzButton"));
        FlipHorzButton->setGeometry(QRect(0, 60, 111, 32));
        FlipVertButton = new QPushButton(page_3);
        FlipVertButton->setObjectName(QStringLiteral("FlipVertButton"));
        FlipVertButton->setGeometry(QRect(0, 90, 101, 32));
        ToolPages->addItem(page_3, QStringLiteral("Page"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(160, 10, 301, 301));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        drawingGridLayout = new QGridLayout(frame_2);
        drawingGridLayout->setSpacing(6);
        drawingGridLayout->setContentsMargins(11, 11, 11, 11);
        drawingGridLayout->setObjectName(QStringLiteral("drawingGridLayout"));
        AddFrameButton = new QPushButton(centralWidget);
        AddFrameButton->setObjectName(QStringLiteral("AddFrameButton"));
        AddFrameButton->setGeometry(QRect(510, 480, 31, 32));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(160, 340, 341, 171));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 152));
        scrollArea->setWidget(scrollAreaWidgetContents);
        colorPaletteWidget = new QWidget(centralWidget);
        colorPaletteWidget->setObjectName(QStringLiteral("colorPaletteWidget"));
        colorPaletteWidget->setGeometry(QRect(10, 460, 120, 80));
        QPalette palette1;
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(186, 193, 201, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush3(QColor(136, 140, 144, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush4(QColor(133, 136, 137, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        colorPaletteWidget->setPalette(palette1);
        QFont font;
        font.setUnderline(false);
        colorPaletteWidget->setFont(font);
        colorPaletteWidget->setMouseTracking(false);
        colorPaletteWidget->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 583, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);

        retranslateUi(MainWindow);

        ToolPages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionPixel_Size->setText(QApplication::translate("MainWindow", "Pixel Size", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        actionAdd_Frame->setText(QApplication::translate("MainWindow", "Add Frame", 0));
        actionDelete_Frame->setText(QApplication::translate("MainWindow", "Delete Frame", 0));
        actionCopy_Fream->setText(QApplication::translate("MainWindow", "Copy Fream", 0));
        PaintBrushButton->setText(QApplication::translate("MainWindow", "Paint Brush", 0));
        FillButton->setText(QApplication::translate("MainWindow", "Paint Bucket", 0));
        PenButton->setText(QApplication::translate("MainWindow", "Pen", 0));
        EraseButton->setText(QApplication::translate("MainWindow", "Erase", 0));
        label_2->setText(QApplication::translate("MainWindow", "Paint Width", 0));
        EyeDropperButton->setText(QApplication::translate("MainWindow", "Eyedropper", 0));
        ToolPages->setItemText(ToolPages->indexOf(Draw), QApplication::translate("MainWindow", "Page 1", 0));
        LineButton->setText(QApplication::translate("MainWindow", "Line", 0));
        CircleButton->setText(QApplication::translate("MainWindow", "Ellipse", 0));
        SquareButton->setText(QApplication::translate("MainWindow", "Rectangle", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Fill", 0));
        label->setText(QApplication::translate("MainWindow", "Pixel Width", 0));
        ToolPages->setItemText(ToolPages->indexOf(Shape), QApplication::translate("MainWindow", "Page 2", 0));
        RotateRightButton->setText(QApplication::translate("MainWindow", "Rotate Right", 0));
        RotateLeftButton->setText(QApplication::translate("MainWindow", "Rotate Left", 0));
        FlipHorzButton->setText(QApplication::translate("MainWindow", "Flip Horizontal", 0));
        FlipVertButton->setText(QApplication::translate("MainWindow", "Flip Vertical", 0));
        ToolPages->setItemText(ToolPages->indexOf(page_3), QApplication::translate("MainWindow", "Page", 0));
        AddFrameButton->setText(QApplication::translate("MainWindow", "+", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
