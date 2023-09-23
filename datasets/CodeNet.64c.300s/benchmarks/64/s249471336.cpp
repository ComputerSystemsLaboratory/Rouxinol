#include <iostream>

long gcd(long a, long b)
{
  if (a == 0)
  {
    return b;
  }
  else if (b == 0)
  {
    return a;
  }

  if (a < b)
  {
    std::swap(a, b);
  }

  return gcd(b, a%b);
}

int main()
{
  long a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}