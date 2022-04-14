#include "HumanB.hpp"


HumanB::HumanB(void)
{
	return ;
}


HumanB::HumanB(string name)
{
	this->name = name;
	return ;
}

void	HumanB::attack(void)
{
	cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
	return ;
}
