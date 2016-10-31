#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <project.h>
#include <QGraphicsPixmapItem>
#include <QImage>

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

    //QImage firstFrame(10, 10, QImage::Format_ARGB32);

    //QImage firstFrame(10,10, QImage::Format_ARGB32);
    //QImage f(10, 10, QImage::Format_ARGB32);


    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;

};

#endif // MAINWINDOW_H
