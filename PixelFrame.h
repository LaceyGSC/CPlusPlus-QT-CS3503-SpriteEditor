#ifndef PIXELFRAME_H
#define PIXELFRAME_H

#include<QPixmap>
//#include<QPixMapMouseEvent>
#include "frame.h"


class PixelFrame : public QPixmap
{
public:
    PixelFrame(Frame *f);

protected:
    void mousePressEvent();

private:
        Frame *frame;
};

#endif // PIXELFRAME_H
