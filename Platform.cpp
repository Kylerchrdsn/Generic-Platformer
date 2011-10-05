#include "Platform.h"

Platform::Platform() : image_(0)
{}

//******************************************
Platform::Platform(const std::string& filename) : image_(0)
{
    image_ = new Sprite(0, 0, filename);
}

//******************************************
Platform::~Platform()
{
    delete image_;
}

//******************************************
void Platform::setXPos(const int x)
{
    image_->setXPos(x);
}

//******************************************
void Platform::setYPos(const int y)
{
    image_->setYPos(y);
}

//******************************************
void Platform::show(SDL_Surface* screen)
{
    image_->show(screen);
}
