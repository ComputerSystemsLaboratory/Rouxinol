#include <cstdio>
#include <cmath>
#include <complex>
using namespace std;

#define EPS 10e-8
#define PI 3.1415926535

typedef complex<double> Point;

int n;
Point ps[4];

int main() {
  scanf("%d", &n);
  while (n--) {
    for (int i=0; i<4; i++) {
      double x, y;
      scanf("%lf%lf", &x, &y);
      ps[i] = Point(x, y);
    }

    double t = abs(arg((ps[3]-ps[2])/(ps[1]-ps[0])));
    if ((-EPS < t && t < EPS) || (PI-EPS < t && t  < PI+EPS)) {
      puts("YES");
    } else {
      puts("NO");
    }
  }
}