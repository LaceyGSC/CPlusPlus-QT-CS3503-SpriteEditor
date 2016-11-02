#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <project.h>
#include <QGraphicsPixmapItem>
#include <QImage>
#include "slideview.h"

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

signals:
    void undoSignal();
    void redoSignal();
    void rotateLeftSignal();
    void rotateRightSignal();
    void flipHorizontalSignal();
    void flipVerticalSignal();

protected:

private:
    Ui::MainWindow *ui;
    Project project;
    Frame firstFrame;
    SlideView* theView;

    //QImage firstFrame(10, 10, QImage::Format_ARGB32);

    //QImage firstFrame(10,10, QImage::Format_ARGB32);
    //QImage f(10, 10, QImage::Format_ARGB32);


    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;

};

#endif // MAINWINDOW_H
