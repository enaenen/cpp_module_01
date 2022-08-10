#pragma once

#include <iostream>

#define ZOMBIE_MESSAGE "BraiiiiiiinnnzzzZ..."

class Zombie {
private:
  std::string name;

public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
  void setName(std::string name);
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int n, std::string name);