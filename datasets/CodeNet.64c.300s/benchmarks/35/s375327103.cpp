#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)

const int MAX_N = 100;

int main() {
  int n, u, k, v, G[MAX_N][MAX_N] = {0};
  cin >> n;
  REP(i, n) {
    cin >> u >> k;
    REP(j, k) {
      cin >> v;
      G[u - 1][v - 1] = 1;
    }
  }
  REP(i, n) {
    REP(j, n) {
    if(j) cout << ' ';
    cout << G[i][j];
    }
    cout << endl;
  }
  return 0;
}