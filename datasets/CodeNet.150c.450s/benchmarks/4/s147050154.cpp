#include <iostream>

int main() {
  int m, f, r;
  std::cin >> m >> f >> r;
  while (!(m == -1 && f == -1 && r == -1)) {
    if (m == -1 || f == -1 || m + f < 30) std::cout << "F\n";
    else if (m + f < 50 && r < 50) std::cout << "D\n";
    else if (m + f < 65) std::cout << "C\n";
    else if (m + f < 80) std::cout << "B\n";
    else std::cout << "A\n";
    std::cin >> m >> f >> r;
  }
  return 0;
}

