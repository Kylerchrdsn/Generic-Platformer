#ifndef PLATFORM_H
#define PLATFORM_H

#include "Sprite.h"


class Platform
{
    public:
        Platform();
        Platform(const std::string& filename);
        ~Platform();

        inline int getXPos();
        inline int getYPos();

        void setXPos(const int x);
        void setYPos(const int y);
        void show(SDL_Surface* screen);

    private:
        Sprite* image_;
};

//**********************************************
int Platform::getXPos()
{
    return image_->getXPos();
}

//**********************************************
int Platform::getYPos()
{
    return image_->getYPos();
}

#endif // PLATFORM_H
