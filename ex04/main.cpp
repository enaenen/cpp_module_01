#include <iostream>

int main(int argc, char **argv) {
  if (argc < 4) {
    std::cout << "./ex04 <filename> <from> <to>" << std::endl;
    return (1);
  }
  std::string fromString(argv[2]);
  if (fromString.empty()) {
    std::cout << "<from> is empty" << std::endl;
    return (1);
  }
}