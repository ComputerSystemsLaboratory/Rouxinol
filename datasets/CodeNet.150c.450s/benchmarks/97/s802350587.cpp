#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define ENDL endl
using namespace std;
int main() {
  int i, N, n, d;
  while (cin >> N, N) {
    int x[200], y[200];
    x[0] = 0;
    y[0] = 0;
    int maxX = -10000, maxY = -10000, minX = 10000, minY = 10000;
    for (i = 1; i < N; i++) {
      cin >> n >> d;
      x[i] = x[n];
      y[i] = y[n];
      if (d == 0)
        x[i]--;
      if (d == 1)
        y[i]--;
      if (d == 2)
        x[i]++;
      if (d == 3)
        y[i]++;
    }
    for (i = 0; i < N; i++) {
      maxX = max(maxX, x[i]);
      minX = min(minX, x[i]);
      maxY = max(maxY, y[i]);
      minY = min(minY, y[i]);
    }
    cout << maxX - minX + 1 << ' ' << maxY - minY + 1 << endl;
  }
  return 0;
}