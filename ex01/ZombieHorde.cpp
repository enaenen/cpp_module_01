#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* zombies = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        std::stringstream ss;
        ss << i << " " << name;
        zombies[i].setName(ss.str());
    }
    return zombies;
}