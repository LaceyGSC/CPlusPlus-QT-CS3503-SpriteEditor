#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <stack>
#include <list>
#include "frame.h"
#include "slideview.h"


class Project : public QObject
{
    std::string fileName;
    std::list<SlideView*> framesList;
    int width;
    int height;

public:
    Project();
    Project(std::string name, SlideView* frame, QObject *parent);
    SlideView* getSlide(int index);
    void addSlideAt(int index, SlideView* frame);
    void addSlide(SlideView* frame);
    size_t getSizeList();

public slots:
    void addFrameSlot(SlideView* frame);
};

#endif // PROJECT_H
