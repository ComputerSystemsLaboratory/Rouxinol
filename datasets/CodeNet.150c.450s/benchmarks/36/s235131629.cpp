#include <iostream>
int main()
{
  int d;
  while (std::cin >> d) {
    int n = 0, s = 0;
    while (n < 600) {
      s += n * n * d;
      n += d;
    }
    std::cout << s << std::endl;
  }
  return 0;
}