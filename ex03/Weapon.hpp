#pragma once

#include <iostream>
#include <string>

class Weapon {
 private:
  std::string type;

 public:
  Weapon(const std::string& type);
  void setType(const std::string& type);
  const std::string& getType() const;
};