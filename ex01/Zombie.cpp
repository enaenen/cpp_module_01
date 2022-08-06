#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie()
{
    std::cout << this->name << " : " << "has been destroyed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << ": " << ZOMBIE_MESSAGE << std::endl;
}