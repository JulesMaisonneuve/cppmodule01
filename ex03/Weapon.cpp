#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return ;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
    return ;
}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}
