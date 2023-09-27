#include <iostream>

int main()
{
  int height = 0, width = 0;
  std::cin >> height >> width;

  std::cout << (height * width) << " " << ((height + width) << 1) << std::endl;

  return 0;
}