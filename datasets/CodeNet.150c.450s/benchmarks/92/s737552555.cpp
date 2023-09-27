#include <iostream>
int main()
{
  int a, b;
  while (std::cin >> a >> b) {
    int c = a + b, r = 1;
    while (c >= 10) {
      c /= 10;
      r += 1;
    }
    std::cout << r << std::endl;
  }
  return 0;
}