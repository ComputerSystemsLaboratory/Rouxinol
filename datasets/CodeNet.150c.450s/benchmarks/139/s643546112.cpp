#include <algorithm>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <functional>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

void Main();

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  cout << fixed << setprecision(10);
#ifdef LOCAL
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif
  Main();
#ifdef LOCAL
  cout << "\nTime: " << (int)ceil((double)1000 * clock() / CLOCKS_PER_SEC) << " ms";
#endif
}

int n, m;
vector<vector<int>> G;
vector<int> dist;

void Main() {
  cin >> n >> m;
  G.resize(n);
  for (int i = 0; i < m; i++) {
    int v, u;
    cin >> v >> u;
    v--, u--;
    G[v].push_back(u);
    G[u].push_back(v);
  }
  dist.resize(n, n);
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (auto u : G[v]) {
      if (dist[u] > dist[v] + 1) {
        dist[u] = dist[v] + 1;
        q.push(u);
      }
    }
  }
  vector<int> ans(n);
  bool ok = true;
  for (int i = 1; i < n; i++) {
    if (dist[i] == n) {
      ok = false;
      break;
    }
    ans[i] = -1;
    for (auto j : G[i]) {
      if (dist[i] == dist[j] + 1 && (ans[i] == -1 || ans[i] > j)) {
        ans[i] = j;
      }
    }
  }
  if (ok) {
    cout << "Yes\n";
    for (int i = 1; i < n; i++) {
      cout << ans[i] + 1 << '\n';
    }
  } else {
    cout << "No\n";
  }
}