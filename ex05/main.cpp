#include "Harl.hpp"

int main(void) {
  Harl harl;

  // NOTHING
  harl.complain("xxxx");

  // DEBUG TEST
  harl.complain("DEBUG");

  // WARNING TEST
  harl.complain("WARNING");

  // INFO TEST
  harl.complain("INFO");

  // ERROR TEST
  harl.complain("ERROR");

  return (0);
}