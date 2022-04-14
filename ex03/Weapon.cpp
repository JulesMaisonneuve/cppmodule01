#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return ;
}

Weapon::Weapon(string type)
{
    this->type = type;
    return ;
}

const string &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(string type)
{
    this->type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}
