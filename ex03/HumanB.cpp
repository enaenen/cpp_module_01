#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name) : weapon(NULL), name(name) {}

void HumanB::attack() {
  if (this->weapon)
    std::cout << this->name << " attacks with their " << this->weapon->getType()
              << std::endl;
  else
    std::cout << this->name << " attacks with their "
              << "Fist" << std::endl;
};
void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }