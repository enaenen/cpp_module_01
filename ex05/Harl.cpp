#include "Harl.hpp"

void Harl::debug(void) { std::cout << DEBUG_MSG << std::endl; }
void Harl::info(void) { std::cout << INFO_MSG << std::endl; }
void Harl::warning(void) { std::cout << WARNING_MSG << std::endl; }
void Harl::error(void) { std::cout << ERROR_MSG << std::endl; }

void Harl::complain(std::string level) {
  std::size_t i;
  std::string tmp[LEVEL_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  static void (Harl::*f[LEVEL_COUNT])(void) = {&Harl::debug, &Harl::info,
                                               &Harl::warning, &Harl::error};

  i = 0;
  while (i < 4) {
    if (level.compare(tmp[i]) == 0) break;
    i++;
  }
  if (i < LEVEL_COUNT) (this->*f[i])();
}