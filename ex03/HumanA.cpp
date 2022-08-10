#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, ::Weapon& Weapon)
    : name(name), Weapon(Weapon)
{ }

void HumanA::attack()
{
    std::cout << this->name << "attacks with " << this->Weapon.getType() << std::endl;
}