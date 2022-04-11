#include "Zombie.hpp"

Zombie::Zombie(void)
{
    // this->name = NULL;
    return ;
}

Zombie::~Zombie(void)
{
    return ;
}

void Zombie::announce(void)
{
    cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
    return ;
}

Zombie* Zombie::newZombie(string name)
{
    Zombie *zombie = new Zombie;
    zombie->name = name;
    return (zombie);
}

void Zombie::randomChump(string name)
{
    this->name = name;
    announce();
    return ;
}