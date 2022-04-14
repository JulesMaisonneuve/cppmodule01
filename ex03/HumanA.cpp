#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : name(name),weapon(weapon)
{
	return ;
}

void	HumanA::attack(void)
{
	cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}

HumanA::~HumanA(void)
{
	return ;
}
