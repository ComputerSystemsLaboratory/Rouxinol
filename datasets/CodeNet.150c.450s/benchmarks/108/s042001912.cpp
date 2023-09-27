#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)
#define SET(a,c) memset(a,c,sizeof(a))

const int MAX_N = 100;
const int INF = 0x3F3F3F3F;

int n, d[MAX_N], G[MAX_N][MAX_N] = {0};

void bfs(int s) {
  int u;
  queue<int> q;
  q.push(s);
  SET(d, INF);
  d[s] = 0;
  while (!q.empty()) {
    u = q.front(); q.pop();
    REP(v, n) {
      if (!G[u][v]) continue;
      if (d[v] != INF) continue;
      d[v] = d[u] + 1;
      q.push(v);
    }
  }
  REP(i, n) cout << i + 1 << ' ' << ( (d[i] == INF) ? (-1) : d[i] ) << endl;
}

int main() {
  int u, k, v;
  cin >> n;
  REP(i, n) {
    cin >> u >> k;
    REP(j, k) {
      cin >> v;
      G[u - 1][v - 1] = 1;
    }
  }
  bfs(0);
  return 0;
}