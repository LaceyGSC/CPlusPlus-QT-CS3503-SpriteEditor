#include "project.h"

Project::Project()
{

}

Project::Project(std::string name, SlideView* frame, QObject *parent) : QObject(parent)
{
    framesList.push_back(frame);
}

SlideView* Project::getSlide(int index)
{
    unsigned n = index;
    std::list<SlideView*>::iterator it;

    if(framesList.size() > n)
    {
        it = framesList.begin();
        std::advance(it, n);
    }

    return *it;
}

void Project::addSlideAt(int index, SlideView* frame)
{
    unsigned n = index;
    std::list<SlideView*>::iterator it;
    if(framesList.size() > n)
    {
        it = framesList.begin();
        std::advance(it, n);
    }

    framesList.insert(it, frame);

}

void Project::addSlide(SlideView* frame)
{
    framesList.push_back(frame);

    qDebug()<< framesList.size();
}

void Project::addFrameSlot(SlideView* frame)
{
    Project::addSlide(frame);
}

size_t Project::getSizeList()
{
    return framesList.size();
}
