#include <cstdio>
#include <cmath>
#define EPS 1e-6

using namespace std;

double cross(double a, double b, double c, double d)
{
  return a * d - b * c;
}

int main()
{
  double a[3], b[3];
  while (scanf(" %lf %lf %lf %lf %lf %lf ", &a[0],&a[1],&a[2],&b[0],&b[1],&b[2]) == 6) {
    double x = cross(a[2], a[1], b[2], b[1]) / cross(a[0], a[1], b[0], b[1]),
      y = cross(a[0], a[2], b[0], b[2]) / cross(a[0], a[1], b[0], b[1]);
    if (fabs(x) < EPS) {x = fabs(x);}
    if (fabs(y) < EPS) {y = fabs(y);}
    printf("%.3lf %.3lf\n", x, y);
  }
  return 0;
}