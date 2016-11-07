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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QFrame *frame_2;
    QGridLayout *drawingGridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *colorPaletteWidget;
    QSlider *frameSlider;
    QFrame *toolFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *PenButton;
    QPushButton *PaintBrushButton;
    QPushButton *EraseButton;
    QPushButton *EyeDropperButton;
    QPushButton *FillButton;
    QPushButton *LineButton;
    QPushButton *CircleButton;
    QPushButton *SquareButton;
    QCheckBox *checkBox_2;
    QPushButton *RotateRightButton;
    QPushButton *RotateLeftButton;
    QPushButton *FlipHorzButton;
    QPushButton *FlipVertButton;
    QSpinBox *paintWidthSpin;
    QSlider *paintWidthSlide;
    QLabel *label;
    QFrame *frameCM;
    QHBoxLayout *horizontalLayout;
    QPushButton *MergeFrameButton;
    QPushButton *CopyFrameButton;
    QLabel *label_3;
    QSpinBox *fpsBox;
    QPushButton *pushButton;
    QFrame *frameMove;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddFrameButton;
    QPushButton *RemoveFrameButton;
    QPushButton *IncreaseIndexButton;
    QPushButton *DecreaseIndexButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(688, 621);
        QPalette palette;
        QBrush brush(QColor(170, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("MainWindow\n"
"{\n"
"\n"
"background-color: #222930;\n"
"\n"
"}\n"
"\n"
"#toolFrame\n"
"{\n"
"background-color: #384A5C;\n"
"border-width: 1px;\n"
"border-color: #384A5C;\n"
"border-style: solid;\n"
"\n"
"\n"
"}\n"
"\n"
"#frameCM\n"
"{\n"
"border-color: #222930;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"}\n"
"\n"
"#framePre\n"
"{\n"
"border-color: #222930;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"}\n"
"\n"
"\n"
"\n"
"#frameMove\n"
"{\n"
"border-color: #222930;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"}\n"
"\n"
"#scrollArea\n"
"{\n"
"background-color: #384A5C;\n"
"border-width: 1px;\n"
"border-color: #384A5C;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"}\n"
"\n"
"#scrollAreaWidgetContents\n"
"{\n"
"background-color: #384A5C;\n"
"border-width: 1px;\n"
"border-color: #384A5C;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"}\n"
"\n"
"\n"
"#label\n"
"{\n"
" color: white;\n"
"}\n"
"\n"
"#pushButton\n"
"{\n"
"color: white;\n"
"/*background"
                        "-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);*/\n"
"background-color: #4EB1BA;\n"
"border-width: 1px;\n"
"border-color: #4EB1BA;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width: 70px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
""));
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
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(160, 10, 301, 301));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        drawingGridLayout = new QGridLayout(frame_2);
        drawingGridLayout->setSpacing(6);
        drawingGridLayout->setContentsMargins(11, 11, 11, 11);
        drawingGridLayout->setObjectName(QStringLiteral("drawingGridLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(160, 340, 341, 171));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 333, 147));
        scrollArea->setWidget(scrollAreaWidgetContents);
        colorPaletteWidget = new QWidget(centralWidget);
        colorPaletteWidget->setObjectName(QStringLiteral("colorPaletteWidget"));
        colorPaletteWidget->setGeometry(QRect(490, 30, 120, 80));
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
        frameSlider = new QSlider(centralWidget);
        frameSlider->setObjectName(QStringLiteral("frameSlider"));
        frameSlider->setGeometry(QRect(160, 320, 341, 16));
        frameSlider->setOrientation(Qt::Horizontal);
        toolFrame = new QFrame(centralWidget);
        toolFrame->setObjectName(QStringLiteral("toolFrame"));
        toolFrame->setGeometry(QRect(20, 10, 111, 447));
        toolFrame->setStyleSheet(QLatin1String("QPushButton {\n"
"color: white;\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);*/\n"
"background-color: #4EB1BA;\n"
"border-width: 1px;\n"
"border-color: #4EB1BA;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width: 70px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}\n"
"\n"
"#checkBox_2\n"
"{\n"
"color: white;\n"
"}"));
        toolFrame->setFrameShape(QFrame::StyledPanel);
        toolFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(toolFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PenButton = new QPushButton(toolFrame);
        PenButton->setObjectName(QStringLiteral("PenButton"));

        verticalLayout->addWidget(PenButton);

        PaintBrushButton = new QPushButton(toolFrame);
        PaintBrushButton->setObjectName(QStringLiteral("PaintBrushButton"));

        verticalLayout->addWidget(PaintBrushButton);

        EraseButton = new QPushButton(toolFrame);
        EraseButton->setObjectName(QStringLiteral("EraseButton"));

        verticalLayout->addWidget(EraseButton);

        EyeDropperButton = new QPushButton(toolFrame);
        EyeDropperButton->setObjectName(QStringLiteral("EyeDropperButton"));

        verticalLayout->addWidget(EyeDropperButton);

        FillButton = new QPushButton(toolFrame);
        FillButton->setObjectName(QStringLiteral("FillButton"));

        verticalLayout->addWidget(FillButton);

        LineButton = new QPushButton(toolFrame);
        LineButton->setObjectName(QStringLiteral("LineButton"));

        verticalLayout->addWidget(LineButton);

        CircleButton = new QPushButton(toolFrame);
        CircleButton->setObjectName(QStringLiteral("CircleButton"));

        verticalLayout->addWidget(CircleButton);

        SquareButton = new QPushButton(toolFrame);
        SquareButton->setObjectName(QStringLiteral("SquareButton"));

        verticalLayout->addWidget(SquareButton);

        checkBox_2 = new QCheckBox(toolFrame);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        RotateRightButton = new QPushButton(toolFrame);
        RotateRightButton->setObjectName(QStringLiteral("RotateRightButton"));

        verticalLayout->addWidget(RotateRightButton);

        RotateLeftButton = new QPushButton(toolFrame);
        RotateLeftButton->setObjectName(QStringLiteral("RotateLeftButton"));

        verticalLayout->addWidget(RotateLeftButton);

        FlipHorzButton = new QPushButton(toolFrame);
        FlipHorzButton->setObjectName(QStringLiteral("FlipHorzButton"));

        verticalLayout->addWidget(FlipHorzButton);

        FlipVertButton = new QPushButton(toolFrame);
        FlipVertButton->setObjectName(QStringLiteral("FlipVertButton"));

        verticalLayout->addWidget(FlipVertButton);

        paintWidthSpin = new QSpinBox(centralWidget);
        paintWidthSpin->setObjectName(QStringLiteral("paintWidthSpin"));
        paintWidthSpin->setGeometry(QRect(20, 490, 107, 24));
        paintWidthSlide = new QSlider(centralWidget);
        paintWidthSlide->setObjectName(QStringLiteral("paintWidthSlide"));
        paintWidthSlide->setGeometry(QRect(20, 520, 114, 22));
        paintWidthSlide->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 470, 71, 16));
        frameCM = new QFrame(centralWidget);
        frameCM->setObjectName(QStringLiteral("frameCM"));
        frameCM->setGeometry(QRect(160, 520, 414, 54));
        frameCM->setStyleSheet(QLatin1String("QPushButton {\n"
"color: white;\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);*/\n"
"background-color: #4EB1BA;\n"
"border-width: 1px;\n"
"border-color: #4EB1BA;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width: 70px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}"));
        frameCM->setFrameShape(QFrame::StyledPanel);
        frameCM->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameCM);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MergeFrameButton = new QPushButton(frameCM);
        MergeFrameButton->setObjectName(QStringLiteral("MergeFrameButton"));

        horizontalLayout->addWidget(MergeFrameButton);

        CopyFrameButton = new QPushButton(frameCM);
        CopyFrameButton->setObjectName(QStringLiteral("CopyFrameButton"));

        horizontalLayout->addWidget(CopyFrameButton);

        label_3 = new QLabel(frameCM);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        fpsBox = new QSpinBox(frameCM);
        fpsBox->setObjectName(QStringLiteral("fpsBox"));
        fpsBox->setMinimum(10);
        fpsBox->setMaximum(1000);

        horizontalLayout->addWidget(fpsBox);

        pushButton = new QPushButton(frameCM);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        frameMove = new QFrame(centralWidget);
        frameMove->setObjectName(QStringLiteral("frameMove"));
        frameMove->setGeometry(QRect(510, 350, 111, 148));
        frameMove->setStyleSheet(QLatin1String("QPushButton {\n"
"color: white;\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);*/\n"
"background-color: #4EB1BA;\n"
"border-width: 1px;\n"
"border-color: #4EB1BA;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width: 70px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}"));
        frameMove->setFrameShape(QFrame::StyledPanel);
        frameMove->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameMove);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AddFrameButton = new QPushButton(frameMove);
        AddFrameButton->setObjectName(QStringLiteral("AddFrameButton"));

        verticalLayout_2->addWidget(AddFrameButton);

        RemoveFrameButton = new QPushButton(frameMove);
        RemoveFrameButton->setObjectName(QStringLiteral("RemoveFrameButton"));

        verticalLayout_2->addWidget(RemoveFrameButton);

        IncreaseIndexButton = new QPushButton(frameMove);
        IncreaseIndexButton->setObjectName(QStringLiteral("IncreaseIndexButton"));

        verticalLayout_2->addWidget(IncreaseIndexButton);

        DecreaseIndexButton = new QPushButton(frameMove);
        DecreaseIndexButton->setObjectName(QStringLiteral("DecreaseIndexButton"));

        verticalLayout_2->addWidget(DecreaseIndexButton);

        MainWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        scrollArea->raise();
        colorPaletteWidget->raise();
        frameSlider->raise();
        toolFrame->raise();
        paintWidthSpin->raise();
        paintWidthSlide->raise();
        label->raise();
        frameCM->raise();
        frameMove->raise();
        AddFrameButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 22));
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
        PenButton->setText(QApplication::translate("MainWindow", "Pen", 0));
        PaintBrushButton->setText(QApplication::translate("MainWindow", "Paint Brush", 0));
        EraseButton->setText(QApplication::translate("MainWindow", "Erase", 0));
        EyeDropperButton->setText(QApplication::translate("MainWindow", "Eyedropper", 0));
        FillButton->setText(QApplication::translate("MainWindow", "Paint Bucket", 0));
        LineButton->setText(QApplication::translate("MainWindow", "Line", 0));
        CircleButton->setText(QApplication::translate("MainWindow", "Ellipse", 0));
        SquareButton->setText(QApplication::translate("MainWindow", "Rectangle", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Fill Shape", 0));
        RotateRightButton->setText(QApplication::translate("MainWindow", "Rotate Right", 0));
        RotateLeftButton->setText(QApplication::translate("MainWindow", "Rotate Left", 0));
        FlipHorzButton->setText(QApplication::translate("MainWindow", "Flip Horizontal", 0));
        FlipVertButton->setText(QApplication::translate("MainWindow", "Flip Vertical", 0));
        label->setText(QApplication::translate("MainWindow", "Pixel Width", 0));
        MergeFrameButton->setText(QApplication::translate("MainWindow", "Merge Frame", 0));
        CopyFrameButton->setText(QApplication::translate("MainWindow", "Copy Frame", 0));
        label_3->setText(QApplication::translate("MainWindow", "FPS:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Preview", 0));
        AddFrameButton->setText(QApplication::translate("MainWindow", "+", 0));
        RemoveFrameButton->setText(QApplication::translate("MainWindow", "-", 0));
        IncreaseIndexButton->setText(QApplication::translate("MainWindow", "Up", 0));
        DecreaseIndexButton->setText(QApplication::translate("MainWindow", "Down", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
