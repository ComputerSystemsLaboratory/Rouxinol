#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define INF 999999999

int main() {
  int n; cin >> n;
  int p[n + 1], m[n][n];
  REP(i, n) {
    cin >> p[i] >> p[i + 1];
  }

  REP(i, n) m[i][i] = 0;
  FOR(l, 2, n + 1) {
    REP(i, n - l + 1) {
      int j = i + l - 1;
      m[i][j] = INF;
      FOR(k, i, j) {
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1]);
      }
    }
  }
  cout << m[0][n - 1] << endl;;
  return 0;
}