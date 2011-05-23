#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "Sprite.h"


class Background
{
    public:
        Background();
        Background(const std::string& fileName);
        ~Background();

        void show(SDL_Surface*);
        void load(const std::string& fileName);

    private:
        Sprite* backgroundImage;
};

#endif // BACKGROUND_H
