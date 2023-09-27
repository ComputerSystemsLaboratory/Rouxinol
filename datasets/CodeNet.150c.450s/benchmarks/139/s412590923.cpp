#include <bits/stdc++.h>
using namespace std;
#define rep(i, ss, ee) for (int i = ss; i < (ee); ++i)

const int INF = 1e9;
vector<vector<int>> to(100001);

void solve() {
  int N;
  int M;
  cin >> N >> M;

  rep(i, 0, M) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    to[u].push_back(v);
    to[v].push_back(u);
  }

  queue<int> q;
  vector<int> d(N, INF);
  vector<int> p(N, -1);
  d[0] = 0;
  q.push(0);

  while (!q.empty()) {
    int v = q.front();
    q.pop();

    for (auto u : to[v]) {
      if (d[u] != INF) continue;
      d[u] = d[v] + 1;
      p[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i, 1, N) { cout << (p[i] + 1) << endl; }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
}