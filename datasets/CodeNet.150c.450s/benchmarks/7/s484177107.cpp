#include <iostream>
#include <algorithm>
int main()
{
  int w[10];
  for (int i = 0;i < 10; i++) {
    std::cin >> w[i];
  }
  std::sort(w, w + 10);
  std::cout << w[9] << std::endl << w[8] << std::endl << w[7] << std::endl;
  return 0;
}