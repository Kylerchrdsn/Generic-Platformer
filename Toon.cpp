#include "Toon.h"

Toon::Toon() : toonModel(0)
{
}

//*****************************************
Toon::~Toon()
{
    delete toonModel;
}
