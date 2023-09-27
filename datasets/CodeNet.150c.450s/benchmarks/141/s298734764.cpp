#include <iostream>
#include <sstream>
#include <string>

/// check if (x1, y1) <-> (x2, y2) and (x3, y3) <-> (x4, y4) is crossed.
bool is_cross(double x1, double y1, double x2, double y2,
              double x3, double y3, double x4, double y4)
{
  if (((x1 - x2) * (y3 - y1) + (y1 - y2) * (x1 - x3)) *
      ((x1 - x2) * (y4 - y1) + (y1 - y2) * (x1 - x4)) > 0) {
    return false;
  } else {
    return true;
  }
}

int main()
{
  double x1, y1, x2, y2, x3, y3, xp, yp, center_x, center_y;
  while (std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    center_x = (x1 + x2 + x3) / 3.0;
    center_y = (y1 + y2 + y3) / 3.0;
    if (is_cross(x1, y1, x2, y2, xp, yp, center_x, center_y) ||
        is_cross(x1, y1, x3, y3, xp, yp, center_x, center_y) ||
        is_cross(x2, y2, x3, y3, xp, yp, center_x, center_y)) {
      std::cout << "NO" << std::endl;
    } else {
      std::cout << "YES" << std::endl;
    }
  }
  return 0;
}