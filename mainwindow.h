#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <project.h>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QHBoxLayout>
#include <QPushButton>
#include <QPalette>
#include "slideview.h"
#include "gifpopup.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LineButton_clicked();
    void changeFrame();


    // for undo event
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_RotateLeftButton_clicked();
    void on_RotateRightButton_clicked();
    void on_FlipHorzButton_clicked();
    void on_FlipVertButton_clicked();
    void on_CircleButton_clicked();
    void on_SquareButton_clicked();
    void on_checkBox_stateChanged(int arg1);
    void on_checkBox_2_stateChanged(int arg1);
    void on_PenButton_clicked();
    void on_paintWidthSpin_valueChanged(int arg1);
    void on_paintWidthSlide_sliderMoved(int position);
    void on_shapeWidthSpin_valueChanged(int arg1);
    void on_shapeWidthSlide_sliderMoved(int position);
    void on_PaintBrushButton_clicked();
    void on_AddFrameButton_clicked();

    // Receives Signal from UI EyeDropperButton
    void on_EyeDropperButton_clicked();
    void colorPaletteChangedSlot(QColor previewColor);

    void on_EraseButton_clicked();

    void on_actionExport_triggered();

    void on_FillButton_clicked();


signals:
    void undoSignal();
    void redoSignal();
    void rotateLeftSignal();
    void rotateRightSignal();
    void flipHorizontalSignal();
    void flipVerticalSignal();
    void addFrameSignal(SlideView*);
    void paintBucketSignal();

protected:

private:
    Ui::MainWindow *ui;
    int currentIndex = 0;
    Project project;
    SlideView* theView;
    Project* theProject;
    QHBoxLayout* testLayout;
    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;
    gifPopup gifPopupDialog;
    int size;


    void updatePreview();
    void updateSlide(int i);

};

#endif // MAINWINDOW_H
