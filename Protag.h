#ifndef PROTAG_H
#define PROTAG_H

#include "Toon.h"


class Protag : public Toon
{
    public:
        Protag();
        virtual ~Protag();
        virtual void move();

};

#endif // PROTAG_H
