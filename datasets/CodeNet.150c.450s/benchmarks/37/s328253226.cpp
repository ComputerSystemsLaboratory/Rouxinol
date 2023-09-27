#include <iostream>
#include <iomanip>


int main () {
  int a, b, c, d, e, f;
  float x, y, temp;
  std::cout << (std::fixed) << std::setprecision(3);
  while (std::cin >> a >> b >> c >> d >> e >>f) {
    y = (c * d - f * a) / (float)(b * d - e * a);
    x = (c - b * y) / (float)a;
    std::cout << x << " " << y << std::endl;
  }
  return 0;
}