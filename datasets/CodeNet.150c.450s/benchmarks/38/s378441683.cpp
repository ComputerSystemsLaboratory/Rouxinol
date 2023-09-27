#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool isRightTriangleCore(int a, int b, int c)
{
  return a * a + b * b == c * c;
}

bool isRightTriangle(int a, int b, int c)
{
  int ret = false;

  ret |= isRightTriangleCore(a, b, c);
  ret |= isRightTriangleCore(c, a, b);
  ret |= isRightTriangleCore(b, c, a);

  return ret;
}

int main(void)
{
  int n;

  std::cin >> n;

  while (n--) {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (isRightTriangle(a, b, c)) {
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}