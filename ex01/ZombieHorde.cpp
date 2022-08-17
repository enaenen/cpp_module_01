#include <sstream>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* zombies = new Zombie[N];
  std::stringstream ss;

  for (int i = 0; i < N; i++) {
    ss << i << " " << name;
    zombies[i].setName(ss.str());
    ss.str(std::string());
  }
  return zombies;
}