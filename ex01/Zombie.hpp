#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using namespace std;

class Zombie
{
    private:
        string name;
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        Zombie* newZombie(string name);
        void randomChump(string name);
        Zombie* zombieHorde(int N, string name);
};

#endif 