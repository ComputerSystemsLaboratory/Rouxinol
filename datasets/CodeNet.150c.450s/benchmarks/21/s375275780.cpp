#include <cmath>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  unsigned int x;

  while (true) {
    std::string param;

    getline(std::cin, param);
    std::istringstream iss(param);
    iss >> x;

    if (x < 1 || x > 100) {
      std::cout << "Error: 1 <= x <= 100" << std::endl;
    } else {
      break;
    }
  }

  std::cout << (unsigned int)pow(x, 3) << std::endl;

  return 0;
}