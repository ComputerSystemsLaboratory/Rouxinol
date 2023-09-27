#include <complex>
#include <iostream>
using namespace std;
typedef complex<double> P;

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

int main() {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    P a(x1, y1), b(x2, y2), c(x3, y3), p(xp, yp);
    double d1 = cross(b - a, p - a);
    double d2 = cross(c - b, p - b);
    double d3 = cross(a - c, p - c);
    if (((d1 < 0) && (d2 < 0) && (d3 < 0)) || ((d1 > 0) && (d2 > 0) && (d3 > 0))) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
