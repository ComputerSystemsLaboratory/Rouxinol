#include <iostream>
#include <algorithm>
int main()
{
  int n[5] = {};
  std::cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
  std::sort(std::begin(n), std::end(n), [](int a, int b){return a > b;}) ;
  std::cout << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << " " << n[4] << std::endl;
  return 0;
}