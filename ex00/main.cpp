#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1 = NULL;
    Zombie *zombie2 = NULL;
    zombie1 = zombie1->newZombie("Sugon");
    zombie2 = zombie2->newZombie("Deez");
    zombie1->announce();
    zombie2->announce();
    delete zombie1;
    delete zombie2;
    return (0);
}
