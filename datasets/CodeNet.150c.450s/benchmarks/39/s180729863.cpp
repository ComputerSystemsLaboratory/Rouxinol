#include <iostream>

int main() {
  int width=0,height=0,area,length;
  std::cin >> width >> height;
  area = width*height;
  length = width*2 + height*2;
  std::cout << area << " " << length << std::endl;
  return 0;
}