#include "Harl.hpp"

int main(void) {
  Harl harl;

  // NOTHING
  std::cout << " harl.complain(\"xxxx\")" << std::endl;
  harl.complain("xxxx");
  std::cout << std::endl;

  // DEBUG TEST
  std::cout << " harl.complain(\"DEBUG\")" << std::endl;
  harl.complain("DEBUG");
  std::cout << std::endl;

  // WARNING TEST
  std::cout << " harl.complain(\"WARNING\")" << std::endl;
  harl.complain("WARNING");
  std::cout << std::endl;

  // INFO TEST
  std::cout << " harl.complain(\"INFO\")" << std::endl;
  harl.complain("INFO");
  std::cout << std::endl;

  // ERROR TEST
  std::cout << " harl.complain(\"ERROR\")" << std::endl;
  harl.complain("ERROR");
  std::cout << std::endl;

  return (0);
}