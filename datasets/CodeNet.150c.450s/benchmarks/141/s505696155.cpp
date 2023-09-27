#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;

const double eps = 1e-11;
double cross_product(complex<double> a, complex<double> b) {
  return (conj(a) * b).imag();
}

int main() {
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    complex<double> a = {x1, y1}, b = {x2, y2}, c = {x3, y3}, p = {xp, yp};
    double t1 = cross_product(b - a, p - a);
    double t2 = cross_product(c - b, p - b);
    double t3 = cross_product(a - c, p - c);
    bool sign = (t1 > 0);
    if (sign == (t2 > 0) && sign == (t3 > 0) && t1 && t2 && t3) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  }
}

