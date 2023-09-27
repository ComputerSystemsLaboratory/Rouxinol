#include <iostream>
int main(void)
{
  int i = 0, a;
  while (++i) {
    std::cin >> a;
    if (a == 0)
      break;
    std::cout << "Case " << i << ": " << a << std::endl;
  }
}