#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
	return ;
}
