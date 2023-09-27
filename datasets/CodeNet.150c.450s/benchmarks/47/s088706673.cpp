#include <iostream>

int main()
{
  int width, height, x, y, radius;
  std::cin >> width >> height >> x >> y >> radius;

  const bool in_range = 
    (x >= radius) && (x <= (width - radius)) &&
    (y >= radius) && (y <= (height - radius));

  std::cout << (in_range ? "Yes" : "No") << std::endl;

  return 0;
}