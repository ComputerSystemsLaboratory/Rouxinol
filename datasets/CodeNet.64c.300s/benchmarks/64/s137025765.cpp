#include <iostream>

int main() {
  int x = 0;
  int y = 0;
  
  std::cin >> x >> y;
  
  if (x == y) {
    std::cout << x << std::endl;

    return 0;
  }
  
  if (y > x) {
    int tmp = x;
    x = y;
    y = tmp;
  }

  int m = x % y;

  int d = m;

  while (d > 0) {
    if (((y % d) == 0) && ((m % d) == 0)) {
      break;
    }

    d--;
  }

  std::cout << d << std::endl;
    

  return 0;
}