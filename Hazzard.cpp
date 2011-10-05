#include "Hazzard.h"

Hazzard::Hazzard() : hazzardModel_(0)
{}

Hazzard::~Hazzard()
{
    delete hazzardModel_;
}
