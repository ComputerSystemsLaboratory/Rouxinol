#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> to[n];
  vector<int> dist(n, INF);
  vector<int> pre(n, -1);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  auto bfs = [&](int u, int v) {
    dist[u] = dist[v]+1;
    pre[u] = v;
    q.push(u);
  };
  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      bfs(u,v);
    }
  }
  cout << "Yes" << endl;
  for(int i=1; i<n; ++i) {
    int ans = pre[i];
    ++ans;
    cout << ans << endl;
  }
  return 0;
}