#include <iostream>

#include "Zombie.hpp"

int main(int argc, char** argv) {
  std::string zombieName;

  if (argc > 1)
    zombieName = argv[1];
  else
    zombieName = "Default";
  std::cout << "================ newZombie ================" << std::endl;
  Zombie* zombie = newZombie(zombieName);
  zombie->announce();
  delete zombie;
  std::cout << "===========================================" << std::endl;
  std::cout << std::endl << std::endl;
  std::cout << "================ randomChump ================" << std::endl;
  randomChump(zombieName);
  std::cout << "================================================" << std::endl;

  return (0);
}