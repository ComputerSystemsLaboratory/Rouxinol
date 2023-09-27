#include <iostream>
#include <iomanip>
int main()
{
  int a, b, c, d, e, f;
  while (std::cin >> a >> b >> c >> d >> e >> f) {
    double x, y, r;
    r = static_cast<double>(a * e - b * d);
    x = static_cast<double>(c * e - b * f) / r;
    y = static_cast<double>(a * f - c * d) / r;
    if (x * x < 0.0001) x = 0;
    if (y * y < 0.0001) y = 0;
    std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
  }
  return 0;
}