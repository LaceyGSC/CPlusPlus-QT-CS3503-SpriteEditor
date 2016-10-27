#include "slideframe.h"
#include <QDebug>

SlideFrame::SlideFrame(QFrame *parent, QImage *image) : QFrame(parent)
{
    theImage = new QImage(10,10,QImage::Format_ARGB32);
    this->setMouseTracking(true);
}

void SlideFrame::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}

QImage* SlideFrame::getImage()
{
    return theImage;
}
