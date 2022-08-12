#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

Weapon::~Weapon() { std::cout << "Destroy Weapon" << std::endl; }

void Weapon::setType(const std::string& type) { this->type = type; }

const std::string& Weapon::getType() const { return this->type; }