#include <iostream>
int main(void)
{
  while (1) {
    int a, b;
    std::cin >> a >> b;
    if (a == 0 && b == 0)
      break;
    if (a < b) {
      std::cout << a << " " << b << std::endl;
    }
    else {
      std::cout << b << " " << a << std::endl;
    }
  }
}