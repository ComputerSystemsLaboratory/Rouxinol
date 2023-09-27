#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double EPS = 1e-10;

signed main() {
  int n;

  cin >> n;
  while (n--) {
    double x[4], y[4];
    for (int i = 0; i < 4; cin >> x[i] >> y[i], i++);
    double vx1 = x[1] - x[0], vy1 = y[1] - y[0],
           vx2 = x[3] - x[2], vy2 = y[3] - y[2];
    if (fabs(vx1 * vy2 - vy1 * vx2) < EPS) {
      puts("YES");
    } else {
      puts("NO");
    }
  }

  return 0;
}