#include <iostream>

int main() {
  
  int S;
  std::cin >> S;

  int h = S / 3600;
  S = S - h * 3600;
  int m = S / 60;
  S = S - m * 60;

  std::cout << h << ":" << m << ":" << S << std::endl;
}