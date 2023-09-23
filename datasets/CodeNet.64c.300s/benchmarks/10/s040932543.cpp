#include <iostream>
int main() {
  int x, y;
  do {
    std::cin >> x >> y;
    if (x != 0 || y != 0) {
      if (x < y) {
        std::cout << x << " " << y << std::endl;
      } else {
        std::cout << y << " " << x << std::endl;
      }
    }
  } while (x != 0 || y != 0);
}