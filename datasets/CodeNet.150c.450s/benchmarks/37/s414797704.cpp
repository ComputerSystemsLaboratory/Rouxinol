#include <stdio.h>

int main(void) {
  double a, b, c, d, e, f;
  while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF) {
    double ee = e / b, dd = d / a;
    double ax = a * ee, cx = c * ee;
    printf("%.3f ", (cx - f) / (ax - d) == -0 ? 0 : (cx - f) / (ax - d));
    b *= dd, c *= dd;
    printf("%.3f\n", (c - f) / (b - e) == -0 ? 0 : (c - f) / (b - e));
  }
  return 0;
}
