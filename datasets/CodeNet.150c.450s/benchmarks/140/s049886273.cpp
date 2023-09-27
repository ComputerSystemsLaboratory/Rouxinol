#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DSU {
  private: vector<int> p, rank;
  public:
    DSU(int n) {
      p = vector<int>(n, -1);
      rank = vector<int>(n, 0);
    }
    int root(int x) {
      if (p[x] == -1) {
        return x;
      }
      return (p[x] = root(p[x]));
    }
    bool sameSet(int x, int y) {
      return root(x) == root(y);
    }
    void connect(int x, int y) {
      x = root(x);
      y = root(y);
      if (x != y) {
        if (rank[x] > rank[y]) {
          p[y] = x;
        } else {
          p[x] = y;
          rank[y] += (rank[x] == rank[y]);
        }
      }
    }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<pair<int, pair<int, int>>> edges;
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    edges.push_back({w, {u, v}});
  }
  sort(edges.begin(), edges.end());
  DSU dsu(n);
  int ans = 0;
  for (auto& edge : edges) {
    int u = edge.second.first;
    int v = edge.second.second;
    int w = edge.first;
    if (!dsu.sameSet(u, v)) {
      dsu.connect(u, v);
      ans += w;
    }
  }
  cout << ans << '\n';
  return 0;
}

