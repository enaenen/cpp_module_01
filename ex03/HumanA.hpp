#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanA {
 private:
  const std::string name;
  Weapon& Weapon;

 public:
  HumanA();
  HumanA(const std::string& name, ::Weapon& Weapon);
  ~HumanA();
  void attack();
};