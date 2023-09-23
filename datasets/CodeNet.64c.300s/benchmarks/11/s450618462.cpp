#include <iostream>
int main() {
  int raw, sec, min, hour;
  std::cin >> raw;
  sec = raw % 60;
  hour = raw / 3600;
  raw -= hour * 3600;
  min = raw / 60;
  std::cout << hour << ":" << min << ":" << sec << std::endl;
}