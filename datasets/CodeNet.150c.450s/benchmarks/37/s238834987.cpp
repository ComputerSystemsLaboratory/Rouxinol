#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c, d, e, f;

  while(cin >> a >> b >> c >> d >> e >> f) {
    double x, y;
    double tmp_b = b, tmp_c = c;
    b *= d;
    c *= d;
    e *= a;
    f *= a;

    b -= e;
    c -= f;
    y = c / b;
    x = (tmp_c - tmp_b * y) / a;

    cout << fixed << setprecision(3) << x << ' '  << y << endl;
  }
  return 0;
}