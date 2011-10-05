#ifndef TOON_H
#define TOON_H

#include "Sprite.h"

class Toon
{
    public:
        Toon();
        virtual ~Toon();

		void setXPos(int x);
		void setYPos(int y);

    private:
        Sprite* _toonModel;
        virtual void move() = 0;
};

#endif // TOON_H
