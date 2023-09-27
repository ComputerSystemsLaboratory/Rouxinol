#include <cstdio>

using namespace std;

int main() {
  int a, b, c, d, e, f;
  while (scanf("%d %d %d %d %d %d",
    &a, &b, &c, &d, &e, &f) == 6) {
    double t = a*e-d*b;
    double x = (c*e-b*f)/t;
    double y = (a*f-c*d)/t;
    if (x == 0) x = 0;
    if (y == 0) y = 0;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}