#include "HumanA.hpp"
HumanA::HumanA(const std::string& name, ::Weapon& weapon)
    : name(name), weapon(weapon) {}

HumanA::~HumanA() { std::cout << "Human Detroy" << std::endl; }
void HumanA::attack() {
  std::cout << this->name << " Attacks with " << this->weapon.getType()
            << std::endl;
}