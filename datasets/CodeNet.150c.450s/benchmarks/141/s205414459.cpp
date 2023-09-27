#include <cstdio>

using namespace std;

bool side(double a, double b, double c, double d) {
  return a * d - b * c >= 0;
}

int main() {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) == 8) {
    if (side(x2-x1, y2-y1, x3-x1, y3-y1) == side(x2-x1, y2-y1, xp-x1, yp-y1) &&
        side(x3-x2, y3-y2, x1-x2, y1-y2) == side(x3-x2, y3-y2, xp-x2, yp-y2) &&
        side(x1-x3, y1-y3, x2-x3, y2-y3) == side(x1-x3, y1-y3, xp-x3, yp-y3))
      puts("YES");
    else
      puts("NO");
  }
  return 0;
}