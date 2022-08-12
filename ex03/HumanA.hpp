#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanA {
 private:
  const std::string name;
  Weapon& weapon;

 public:
  HumanA(const std::string& name, ::Weapon& weapon);
  void attack();
};