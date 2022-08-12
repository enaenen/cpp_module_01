#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 private:
  Weapon* weapon;
  const std::string name;

 public:
  HumanB(const std::string& name);
  void attack();
  void setWeapon(::Weapon& weapon);
};