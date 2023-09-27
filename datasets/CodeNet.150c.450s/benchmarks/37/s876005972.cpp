#include <cstdio>

int main() {
  double a, b, c, d, e, f;

  while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
    int div = a;
    a /= div, b /= div, c /= div;

    int time = -d;
    d += a * time, e += b * time, f += c * time;

    double y = f / e;
    double x = c - b * y;

    printf("%.3f %.3f\n", x, y);
  }
  
  return 0;
}
