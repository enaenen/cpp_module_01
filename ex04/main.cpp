#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  // Program Argument check
  if (argc < 4) {
    std::cout << "./ex04 <filename> <from> <to>" << std::endl;
    return (1);
  }
  std::string fileName(argv[1]);
  std::string fromString(argv[2]);
  // Argument valid check
  if (fileName.empty()) {
    std::cout << "./ex04 <filename> <from> <to>" << std::endl;
    return (1);
  }

  if (fromString.empty()) {
    std::cout << "<from> is empty" << std::endl;
    return (1);
  }

  // input file open
  std::ifstream inputFile(fileName);
  // input file ValidChecking
  if (inputFile.fail() || inputFile.eof() || !inputFile.is_open()) {
    std::cout << "invalid file" << std::endl;
    return (1);
  }

  // output file settings
  std::ofstream outputFile("copyof_" + fileName, std::ios_base::out);
  outputFile << "xxxx" << std::endl;
  std::string readString;
  while (getline(inputFile, readString)) {
    outputFile << readString << std::endl;
  }
  // stream closes
  inputFile.close();
  outputFile.close();

  return (0);
}