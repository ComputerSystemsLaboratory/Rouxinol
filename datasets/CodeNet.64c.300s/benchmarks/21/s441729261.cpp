#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  double a, b, c, d, e, f, x, y, det;
  while(cin >> a >> b >> c >> d >> e >> f) {
    det = 1.0/(a*e - b*d);
    x = (c*e - b*f)*det;
    y = (a*f - c*d)*det;

    if(x == 0) x = 0;
    if(y == 0) y = 0;

    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}