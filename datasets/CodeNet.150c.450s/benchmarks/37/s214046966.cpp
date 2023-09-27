#include<iostream>
#include<cstdio>

using namespace std;

int main() {
  double a, b, c, d, e, f;

  while((scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f)) != -1) {
    double x, y;
    double denom = a * e - b *d;
    double nomer_x = c*e - b*f;
    double nomer_y = -c*d + a*f;
    x = nomer_x / denom;
    y = nomer_y / denom;

    if(x == 0) { x = 0;  }
    if(y == 0) { y = 0;  }

    printf("%.3lf %.3lf\n", x, y);
  }

  return 0;
}