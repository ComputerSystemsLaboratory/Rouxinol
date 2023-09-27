#include <iostream>
#include <vector>

using namespace std;

const long long INF = 1e18;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<long long>> g(n, vector<long long>(n, INF));
  for (int i = 0; i < n; i++) {
    g[i][i] = 0ll;
  }
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u][v] = (long long) w;
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
      } 
    }
  }
  for (int i = 0; i < n; i++) {
    if (g[i][i] < 0) {
      return cout << "NEGATIVE CYCLE" << '\n', 0;
    }
  }
  for (auto& v : g) {
    for (int i = 0; i < (int) v.size(); i++) {
      if (i > 0) {
        cout << ' ';
      }
      if (v[i] > 1e10) {
        cout << "INF";
      } else {
        cout << v[i];
      }
    }
    cout << '\n';
  }
  return 0;
}

