//Swapping Two Numbers
#include <iostream>

int main()
{
  while (1) {
    int x = 0, y = 0;
    std::cin >> x >> y;

    if (!x && !y) break;

    if (x > y) {
      x ^= y;
      y ^= x;
      x ^= y;
    }

    std::cout << x << " " << y << std::endl;
  }

  return 0;
}