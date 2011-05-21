#ifndef HAZZARD_H
#define HAZZARD_H

#include "Sprite.h"


class Hazzard
{
    public:
        Hazzard();
        ~Hazzard();

        virtual void move() = 0;

    private:
        Sprite* hazzardModel_;
        std::string name_;
};

#endif // HAZZARD_H
