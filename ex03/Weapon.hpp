#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstring>
# include <string>

using namespace std;

class Weapon
{
	private:
		string type;
	public:
		Weapon(void);
		Weapon(string type);
		~Weapon(void);
		const string &getType(void);
		void setType(string type);

};

#endif
