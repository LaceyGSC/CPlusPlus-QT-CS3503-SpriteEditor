#ifndef FRAME_H
#define FRAME_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsLineItem>
#include <QAction>
#include <QGraphicsView>
#include <QKeyEvent>
#include <QImage>



class Frame : public QImage
{
    //const int WIDTH;
    //const int HEIGHT;
public:
    Frame(int width = 64, int height = 64);

protected:
    /*
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);*/
};

#endif // FRAME_H
