#include <cstdlib>

#include "Zombie.hpp"

int main(int argc, char** argv) {
  std::string zombieName;
  if (1 < argc)
    zombieName = argv[1];
  else
    zombieName = "Default";
  int n;
  if (2 < argc)
    n = atoi(argv[2]);
  else
    n = 1;
  if (n < 0) {
    std::cout << "N out of range (minimum 0)" << std::endl;
    return (1);
  }
  Zombie* horde = zombieHorde(n, zombieName);
  for (int i = 0; i < n; i++) horde[i].announce();
  delete[] horde;
  return (0);
}