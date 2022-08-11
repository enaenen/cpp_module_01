#pragma once

#include <iostream>

#define ZOMBIE_MESSAGE "BraiiiiiiinnnzzzZ..."

class Zombie {
 private:
  std::string name;

 public:
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);