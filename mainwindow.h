#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <project.h>
#include <QGraphicsPixmapItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QImage getImage();
    QPoint getStartPos();
    void setStartPos(QPoint);

private slots:
    void on_LineButton_clicked();


protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *canvas;
    Project project;
    Frame firstFrame;
    QGraphicsView* view;
    QGraphicsPixmapItem *pixMap;
    QPoint startPos;
    QImage mainImage;

};

#endif // MAINWINDOW_H
