#include "Zombie.hpp"


int main(int argc, char **argv)
{
    std::string zombieName;
    if (1 < argc)
        zombieName = argv[1];
    else
        zombieName = "Foo";
    
    int n;
    if (2 < argc)
        n = std::atoi(argv[2]);
    else
        n = 1;
    if (n < 0)
    {
        std::cout << "n out of range (minimum 0)" << std::endl;
        return EXIT_FAILURE;
    }
    Zombie* horde = zombieHorde(n, zombieName);
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
    return EXIT_SUCCESS;
}