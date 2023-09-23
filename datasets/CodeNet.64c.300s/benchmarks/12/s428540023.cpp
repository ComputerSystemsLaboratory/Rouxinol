#include <iostream>
#include <cmath>

int main(void) {
  int x = 0;
  std::cin >> x;
  if (x <= 100 && x>= 1){
    std::cout << x*x*x << "\n";
  }
  return 0;
}