#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 private:
  const std::string name;
  Weapon* weapon;

 public:
  HumanB();
  HumanB(const std::string& name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon& weapon);
};