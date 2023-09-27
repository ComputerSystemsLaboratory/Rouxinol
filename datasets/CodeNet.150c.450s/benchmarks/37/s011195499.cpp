#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  double m[2][3], x[2];
  double a, b, c, d, e, f;
  int p, q;
  bool zf;
  while (cin>>m[0][0]>>m[0][1]>>m[0][2]>>m[1][0]>>m[1][1]>>m[1][2]) {
    zf = false;
    for (int i=0;i<2;i++) {
      for (int j=0;j<2;j++) {
        if (m[i][j] == 0) {
          p = i; q = j;
          zf = true;
        }
      }
    }
    if (zf) {
      x[1-q] = m[p][2] / m[p][1-q];
      x[q] = (m[1-p][2] - m[1-p][1-q] * x[1-q]) / m[1-p][q];
    } else {
      a = m[0][0]; b = m[0][1]; c = m[0][2];
      d = m[1][0]; e = m[1][1]; f = m[1][2];
      x[1] = (f - d*c/a) / (e - d*b/a);
      x[0] = (c - b*x[1]) / a;
    }

    printf("%.3f %.3f\n", x[0], x[1]);
  }
  return 0;
}