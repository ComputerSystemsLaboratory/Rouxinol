#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)

const int MAX_N = 100;
int n, t = 0, flag[MAX_N] = {0}, d[MAX_N], f[MAX_N], G[MAX_N][MAX_N] = {0};

void dfs(int u) {
  int v;
  flag[u] = 1;
  d[u] = ++t;
  REP(v, n) {
    if (!G[u][v]) continue;
    if (!flag[v]) dfs(v);
  }
  flag[u] = 2;
  f[u] = ++t;
}

int main() {
  int u, v, k;
  cin >> n;
  REP(i, n) {
    cin >> u >> k;
    REP(j, k) {
      cin >> v;
      G[u - 1][v - 1] = 1;
    }
  }
  REP(i, n) if (!flag[i]) dfs(i);
  REP(i, n) cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
  return 0;
}