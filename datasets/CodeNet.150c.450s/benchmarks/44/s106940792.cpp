#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 1000000000;
using namespace std;
int main() {
  int a[4], b[4];
  while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    int ansb = 0, ansh = 0;
    rep(i, 4) cin >> b[i];
    rep(i, 4) rep(j, 4) {
      if (a[i] == b[j]) {
        if (i == j)
          ansh++;
        else
          ansb++;
      }
    }
    cout << ansh << ' ' << ansb << endl;
  }
  return 0;
}