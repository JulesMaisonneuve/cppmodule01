#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

using namespace std;

class HumanB
{
	private:
		string name;
		Weapon *weapon;
	public:
		HumanB(void);
		HumanB(string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon);
};


#endif
