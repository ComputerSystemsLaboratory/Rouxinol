#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;

static const int N = 100;

int main() {
  int n, p[N + 1], m[N + 1][N + 1];
  cin >> n;
  REP1(i, n + 1) {
    cin >> p[i - 1] >> p[i];
  }

  REP1(i, n + 1) m[i][i] = 0;
  FOR(l, 2, n + 1) {
    REP1(i, n - l + 2) {
      int j = i + l - 1;
      m[i][j] = (1 << 21);
      FOR(k, i, j) {
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }

  cout << m[1][n] << endl;

  return 0;
}