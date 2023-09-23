#include <iostream>

inline void swap(int &x, int &y)
{
  x ^= y;
  y ^= x;
  x ^= y;
}

int main()
{
  int a = 0, b = 0, c = 0;
  std::cin >> a >> b >> c;

  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);

  std::cout << a << " " << b << " " << c << std::endl;

  return 0;
}