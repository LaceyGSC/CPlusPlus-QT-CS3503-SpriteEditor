#include "frame.h"

Frame::Frame(int width, int height): QImage(width, height, QImage::Format_ARGB32){
    //WIDTH = width;
    //HEIGHT = height;
    int opacity = 255;// Set this between 0 and 255
    image->fill(QColor(0,0,0,opacity));



}

/*
void Frame::mousePressEvent(QGraphicsSceneMouseEvent *event){

}

void Frame::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

}

void Frame::mouseMoveEvent(QGraphicsSceneMouseEvent *event){

}

void Frame::keyPressEvent(QKeyEvent *event){

}
*/

