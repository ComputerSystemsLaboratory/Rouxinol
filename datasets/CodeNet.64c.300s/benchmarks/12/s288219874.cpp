#include <iostream>

int triple(int n) {
  return n * n * n;
}


int main() {
  int input;
  std::cin >>input;
  std::cout << triple(input) << std::endl;
  return 0;
}