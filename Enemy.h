#ifndef ENEMY_H
#define ENEMY_H

#include "Toon.h"


class Enemy : public Toon
{
    public:
        Enemy();
        virtual ~Enemy();
        virtual void move();
};

#endif // ENEMY_H
