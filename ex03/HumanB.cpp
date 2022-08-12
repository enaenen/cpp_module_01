#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name) : weapon(NULL), name(name) {}
HumanB::~HumanB() { std::cout << "Human Detroy" << std::endl; }

void HumanB::attack() {
  if (this->weapon)
    std::cout << this->name << " Attacks with " << this->weapon->getType()
              << std::endl;
};
void HumanB::setWeapon(::Weapon& weapon) { this->weapon = &weapon; }