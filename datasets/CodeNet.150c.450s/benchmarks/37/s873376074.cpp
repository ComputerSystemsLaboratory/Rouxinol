#include <cstdio>
using namespace std;

int a, b, c, d, e, f;

int main() {
  while (1) {
    if (scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != 6) break;

    double x = double(c*e-b*f)/(a*e-b*d);
    double y = double(c*d-a*f)/(b*d-a*e);

    x = int(x*1000)/1000.0;
    y = int(y*1000)/1000.0;

    printf("%.3f %.3f\n", x, y);
  }
}