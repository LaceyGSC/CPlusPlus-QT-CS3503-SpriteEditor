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

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_LineButton_clicked();
    //void actionGroupClicked(QAction*);


private:
    Ui::MainWindow *ui;
    QGraphicsScene *canvas;
    Project project;

    QImage firstFrame(10, 10, QImage::Format_ARGB32);

    //QImage firstFrame(10,10, QImage::Format_ARGB32);
    QImage f(10, 10, QImage::Format_ARGB32);

    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;

    QPoint start;
    QPoint end;

    bool itemToDraw;

    enum tools {noMode, pen, paint, erase, lineShape, circleShape, squareShape};

};

#endif // MAINWINDOW_H
