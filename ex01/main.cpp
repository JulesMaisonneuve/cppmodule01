#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = NULL;
    zombie = zombie->zombieHorde(5, "test");
    for (int i = 0; i < 5; i++)
    {
        zombie[i].announce();
    }
    return (0);
}