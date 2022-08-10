#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie()
{
    std::cout << this->name << " : " << "has been destroyed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << ": " << ZOMBIE_MESSAGE << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}