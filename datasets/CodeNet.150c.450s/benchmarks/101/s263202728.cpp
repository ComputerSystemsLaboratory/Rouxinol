#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;++i)
using namespace std;
const int MAX = 1e5;

int n, color[MAX];
vector<int> G[MAX];

void dfs(int r, int c) {
  color[r] = c;
  REP(i, G[r].size()) {
    int v = G[r][i];
    if (color[v] == -1) {
      color[v] = r;
      dfs(v, c);
    }
  }
}

int main() {
  int s, t, m, q, id = 0;
  cin >> n >> m;
  REP(i, m) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  REP(i, n) color[i] = -1;
  REP(i, n) { if (color[i] == -1) dfs(i, id++); }
  cin >> q;
  REP(i, q) {
    cin >> s >> t;
    if (color[s] == color[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}