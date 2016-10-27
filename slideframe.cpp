#include "slideframe.h"
#include <QDebug>

SlideFrame::SlideFrame(QFrame *parent, QImage *image) : QFrame(parent)
{
    theImage = image;
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
