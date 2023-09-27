#include <iostream>
#include <cmath>
int main() {
  int a, b;
  while (std::cin >> a >> b) {
    std::cout << (int)log10(a+b)+1 << std::endl;
  }
}