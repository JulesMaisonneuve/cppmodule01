#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = NULL;
    zombie = zombie->newZombie("kek");
    zombie->announce();
    delete zombie;
    return (0);
}