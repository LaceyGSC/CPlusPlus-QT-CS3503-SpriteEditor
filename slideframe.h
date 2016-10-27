#ifndef SLIDEFRAME_H
#define SLIDEFRAME_H

#include <QFrame>
#include <QMouseEvent>

class SlideFrame : public QFrame
{
    Q_OBJECT
public:
    SlideFrame(QFrame *parent = 0, QImage* image = new QImage());
    QImage *getImage();

private:
    QImage *theImage;

protected:
    void mouseMoveEvent( QMouseEvent* event);

signals:

public slots:
};

#endif // SLIDEFRAME_H
