#include <cstdio>
#include <cmath>
#include <complex>
#include <algorithm>
using namespace std;

typedef complex<double> Point;

Point ps[4];

int main() {
  while (1) {
    for (int i=0; i<4; i++) {
      double x, y;
      if (scanf("%lf%lf", &x, &y) != 2) return 0;
      ps[i] = Point(x, y);
    }

    bool found = false;
    for (int i=0; i<3; i++) {
      Point a0 = ps[(i+1)%3]-ps[i];
      Point b0 = ps[(i+2)%3]-ps[i];
      Point c0 = ps[3]-ps[i];
      if (abs(arg(c0/a0)) > abs(arg(b0/a0))) {
        puts("NO");
        found = true;
        break;
      }
    }

    if (!found) puts("YES");
  }
}