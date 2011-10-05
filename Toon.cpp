#include "Toon.h"

Toon::Toon() : _toonModel(0)
{}

//*************************************************************************************
Toon::~Toon()
{
    delete _toonModel;
}
