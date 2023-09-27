#include <stdio.h>

#define EPSILON 1.0e-6

int main(int argc, char** argv)
{
  double x1, y1, x2, y2, x3, y3, xp, yp;

  while (fscanf(stdin,
		"%lf %lf %lf %lf %lf %lf %lf %lf",
		&x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) == 8) {

    double s = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    double u = ((xp - x1) * (y3 - yp) - (yp - y1) * (x3 - xp)) / s;
    double v = ((x2 - x1) * (yp - y2) - (y2 - y1) * (xp - x2)) / s;

    if (u > -EPSILON && v > -EPSILON && u + v < 1.0 + EPSILON) {
      fputs("YES\n", stdout);
    }
    else {
      fputs("NO\n", stdout);
    }
  }
}