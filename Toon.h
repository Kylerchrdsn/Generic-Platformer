#ifndef TOON_H
#define TOON_H

#include "Sprite.h"

class Toon
{
    public:
        Toon();
        virtual ~Toon();

    private:
        Sprite* toonModel;
        virtual void move() = 0;
};

#endif // TOON_H
