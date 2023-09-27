#include <iostream>
#include <algorithm>

constexpr long MAX = 20000000000;

int main()
{
  int n;
  std::cin >> n;
  long maxv = -MAX;
  long minv = MAX;

  for (int i = 0; i < n; ++i)
  {
    long v;
    std::cin >> v;
    maxv = std::max(maxv, v - minv);
    minv = std::min(minv, v);
  }

  std::cout << maxv << std::endl;

  return 0;

}