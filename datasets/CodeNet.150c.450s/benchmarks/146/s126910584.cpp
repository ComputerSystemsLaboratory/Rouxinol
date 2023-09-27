#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-10
typedef complex<double> P;

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

int main() {
  int n;
  double x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    P a(x1, y1), b(x2, y2), c(x3, y3), d(x4, y4);
    if (fabs(cross(b - a, d - c)) < EPS) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

