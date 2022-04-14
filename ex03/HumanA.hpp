#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

using namespace std;

class HumanA
{
	private:
		string name;
		Weapon &weapon;
	public:
		HumanA(string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};


#endif
