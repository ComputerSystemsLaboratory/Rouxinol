#include <iostream>
#include <algorithm>
int main()
{
  int n;
  std::cin >> n;
  while (n--) {
    int a[3];
    std::cin >> a[0] >> a[1] >> a[2];
    std::sort(a, a + 3);
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
  return 0;
}