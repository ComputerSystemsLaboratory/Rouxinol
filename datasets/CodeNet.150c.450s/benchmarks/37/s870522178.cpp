#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  double x, y;
  double a, b, c, d, e, f;
  while (!(cin >> a >> b >> c >> d >> e >> f).eof()) {
    x = (e * c - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    if (x == 0) {
      x = 0;
    }
    if (y == 0) {
      y = 0;
    }
    std::cout << fixed << setprecision(3) << x << " " << y << '\n';
  }
  return 0;
}

