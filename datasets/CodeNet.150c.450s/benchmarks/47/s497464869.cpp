#include <iostream>
int main(void)
{
  int w, h, x, y, r;
  std::cin >> w >> h >> x >> y >> r;
  if (x - r < 0 || x + r > w || y - r < 0 || y + r > h) {
    std::cout << "No" << std::endl;
  }
  else {
    std::cout << "Yes" << std::endl;
  }
}