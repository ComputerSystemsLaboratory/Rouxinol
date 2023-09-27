#include <iostream>

int main() {
  int m;
  int f;
  int r;

  int sum;
  while(std::cin >> m >> f >> r) {
    if(m == -1 && f == -1 && r == -1) break;
    if(m == -1 || f == -1) {
      std::cout << "F" << std::endl;
      continue;
    }
    sum = m + f;
    if(sum >= 80) {
      std::cout << "A" << std::endl;
    }
    else if(65 <= sum && sum < 80) {
      std::cout << "B" << std::endl;
    }
    else if(50 <= sum && sum < 65) {
      std::cout << "C" << std::endl;
    }
    else if(30 <= sum && sum < 50) {
      if(r >= 50) {
        std::cout << "C" << std::endl;
      }
      else {
        std::cout << "D" << std::endl;
      }
    }
    else if(sum < 30) {
      std::cout << "F" << std::endl;
    }
  }

  return 0;
}