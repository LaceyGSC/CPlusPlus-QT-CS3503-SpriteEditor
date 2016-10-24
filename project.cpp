#include "project.h"

Project::Project(std::string name, int width, int height) :
    WIDTH(width), HEIGHT(height), fileName(name)
{
    Frame firstFrame(width, height);
    framesList.push_back(firstFrame);
}

Frame Project::getFrame(int index)
{
    unsigned n = index;
    std::list<Frame>::iterator it;

    if(framesList.size() > n)
    {
        it = framesList.begin();
        std::advance(it, n);
    }

    return *it;
}
