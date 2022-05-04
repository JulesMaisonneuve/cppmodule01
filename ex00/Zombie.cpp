#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << name << " died" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *zombie = new Zombie;
    zombie->name = name;
    return (zombie);
}

void Zombie::randomChump(std::string name)
{
    this->name = name;
    announce();
    return ;
}
