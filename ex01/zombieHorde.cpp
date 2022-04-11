#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, string name)
{
    Zombie *zombie;
    zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie[i].name = name;
    }
    return (zombie);
}