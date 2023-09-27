#include <cstdlib>
#include <iostream>
#include <string>

int toInt(char c) { return std::atoi(&c); }

int main() {
  std::string numStr;
  while (std::cin >> numStr) {
    if (numStr == "0") return 0;
    int sum = 0;
    for (char c : numStr) {
      sum += toInt(c);
    }
    std::cout << sum << std::endl;
  }
}

