#include <complex>
#include <iostream>

using xy_t = std::complex<double>;

// Calculate the signed area of a rectungle
double cross_product(xy_t a, xy_t b);
// is point p inside of abc
bool isInsideTriangle(xy_t a, xy_t b, xy_t c, xy_t p);

int main()
{
  double x[4], y[4]; // 4 points in plane
  while (true)
  {
    for (size_t i {}; i < 4; ++i)
      std::cin >> x[i] >> y[i];
    if (!std::cin)
      break;
    xy_t a {x[0], y[0]}, b {x[1], y[1]}, c {x[2], y[2]}, p {x[3], y[3]};
    std::cout << (isInsideTriangle(a, b, c, p) ? "YES" : "NO") << std::endl;
  }
}

double cross_product(xy_t a, xy_t b)
{
  return (std::conj(a) * b).imag();
}

bool isInsideTriangle(xy_t a, xy_t b, xy_t c, xy_t p)
{
  double area[3];
  area[0] = cross_product(a - p, b - p);
  area[1] = cross_product(b - p, c - p);
  area[2] = cross_product(c - p, a - p);
  if ((area[0] > 0 && area[1] > 0 && area[2] > 0)
      || (area[0] < 0 && area[1] < 0 && area[2] < 0))
    return true;
  else 
    return false;
}
