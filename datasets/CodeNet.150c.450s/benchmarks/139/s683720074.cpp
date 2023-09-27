#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> p;
typedef long long ll;
const int inf = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> dist(n, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int nv : g[v]) {
      if (dist[nv] != -1) continue;
      dist[nv] = v;
      que.push(nv);
    }
  }
  // for (int i = 1; i < n; i++) {
  //   if (dist[i] == -1) {
  //     cout << "No" << endl;
  //      return 0;
  //   }
  // }
  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) {
    cout << dist[i] + 1 << endl;
  }

  // rep(i, n) {
  //   rep(j, g[i].size()) cout << g[i][j] << ", ";
  //   cout << endl;
  // }
  return 0;
}