#include <fstream>
#include <iostream>

std::string replace(const std::string &str, const std::string &from,
                    const std::string &to) {
  std::string text = str;
  size_t pos = 0;
  while ((pos = text.find(from, pos)) != std::string::npos) {
    text.erase(pos, from.length());
    text.insert(pos, to);
    pos += to.length();
  }
  return (text);
}

int main(int argc, char **argv) {
  // Program Argument check
  if (argc < 4) {
    std::cout << "./ex04 <filename> <from> <to>" << std::endl;
    return (1);
  }
  std::string fileName(argv[1]);
  std::string fromString(argv[2]);
  std::string toString(argv[3]);
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
  std::ifstream inputFile(fileName.c_str());
  // input file ValidChecking
  if (inputFile.fail() || inputFile.eof() || !inputFile.is_open()) {
    std::cout << "invalid file" << std::endl;
    return (1);
  }

  // output file settings
  std::ofstream outputFile;
  outputFile.open((fileName + ".replace").c_str());

  // replace process
  std::string readString;
  while (getline(inputFile, readString)) {
    outputFile << replace(readString, fromString, toString) << std::endl;
  }
  // stream closes
  inputFile.close();
  outputFile.close();

  return (0);
}