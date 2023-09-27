#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
constexpr double eps = 1e-8;

int main() {
  double a, b, c, d, e, f, x, y;
  while (cin >> a >> b >> c >> d >> e >> f) {
    x = (c * e - b * f) / (a * e - b * d);
    y = (c - a * x) / b;
    if (fabs(x) < eps) x = 0;
    if (fabs(y) < eps) y = 0;
    cout << fixed << setprecision(3) << x << " " << y << endl;
  }
}