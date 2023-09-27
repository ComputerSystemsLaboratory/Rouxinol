#include <iostream>
#include <vector>

bool is_prime(unsigned long v)
{
  if (v == 2) {
    return true;
  }
  if (v <= 1 || v % 2 == 0)
  {
    return false;
  }

  unsigned long divisor = 3;
  while (divisor * divisor <= v)
  {
    if (v % divisor == 0)
    {
      return false;
    }
    divisor += 2;
  }
  return true;
}

int main()
{
  int n {};
  int count {0};
  std::cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int number {};
    std::cin >> number;
    if (is_prime(number))
    {
      ++count;
    }
  }
  std::cout << count << std::endl;
  return 0;
}