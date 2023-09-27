#include <iostream>
#include <algorithm>
int main()
{
  const int BASE = 100000;
  int n, debt = BASE;
  std::cin >> n;
  while (n--) {
    debt = (debt * 1.05 + 999) / 1000;
    debt *= 1000;
  }
  std::cout << debt << std::endl;
  return 0;
}