#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;++i)
#define REP(i,n) FOR(i,0,n)

const int MAX_N = 100;
const int INF = 0x3f3f3f3f;

int main() {
  int n, p[MAX_N + 1], m[MAX_N + 1][MAX_N + 1] = {0}; 

  cin >> n;
  REP(i, n) cin >> p[i] >> p[i + 1];

  REP(i, n) REP(l, n - i) {
    if (i == 0) continue;
    int r = l + i;
    m[l][r] = INF;
    FOR(j, l, r) m[l][r] = min(m[l][r], m[l][j] + m[j + 1][r] + p[l] * p[j + 1] * p[r + 1]);
  }
  cout << m[0][n - 1] << endl;

  return 0;
}