#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(3);
  double a, b, c, d, e, f, x, y;
  while (cin >> a >> b >> c >> d >> e >> f) {
    x = (c * e - b * f) / (a * e - d * b);
    y = (a * f - c * d) / (a * e - b * d);
    if (!x) x = 0;
    if (!y) y = 0;
    cout << x << ' ' << y << '\n';
  }
  return 0;
}

