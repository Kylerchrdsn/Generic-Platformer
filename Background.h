#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "Sprite.h"


class Background
{
    public:
        Background();
        ~Background();

        void show(SDL_Surface*);

    private:
        Sprite* backgroundImage;
};

#endif // BACKGROUND_H
