#include "Enemy.h"

Enemy::Enemy() : enemyModel_(0)
{
    //ctor
}

//************************************************
Enemy::~Enemy()
{
    delete enemyModel_;
}

//************************************************
void Enemy::move()
{

}
