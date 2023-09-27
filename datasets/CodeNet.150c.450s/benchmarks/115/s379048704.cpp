#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)

const int N = 1000;

int main() {
  int q, lmax;
  int c[N + 1][N + 1] = {0};
  string X, Y;

  cin >> q;
  REP(i, q) {
    cin >> X >> Y;

    X = ' ' + X;
    Y = ' ' + Y;
    lmax = 0;
    REP(i, X.length()) REP(j, Y.length()) {
      if (i == 0 || j == 0) continue;
      if (X[i] == Y[j]) {
        c[i][j] = c[i - 1][j - 1] + 1;
      } else {
        c[i][j] = max(c[i - 1][j], c[i][j - 1]);
      }
      lmax = max(lmax, c[i][j]);
    }

    cout << lmax << endl;
  }

  return 0;
}