#include "Harl.hpp"

void Harl::debug(void) { std::cout << DEBUG_MSG << std::endl << std::endl; }
void Harl::info(void) { std::cout << INFO_MSG << std::endl << std::endl; }
void Harl::warning(void) { std::cout << WARNING_MSG << std::endl << std::endl; }
void Harl::error(void) { std::cout << ERROR_MSG << std::endl << std::endl; }

void Harl::complain(std::string level) {
  std::size_t i(0);
  std::string tmp[LEVEL_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  while (i < 4) {
    if (level.compare(tmp[i]) == 0) break;
    i++;
  }

  switch (i) {
    case DEBUG:
      std::cout << "[DEBUG] " << std::endl;
      debug();
    case INFO:
      std::cout << "[INFO] " << std::endl;
      info();
    case WARN:
      std::cout << "[WARNING] " << std::endl;
      warning();
    case ERROR:
      std::cout << "[ERROR] " << std::endl;
      error();
      break;
    default:
      std::cout << NOTHING << std::endl;
  }
}