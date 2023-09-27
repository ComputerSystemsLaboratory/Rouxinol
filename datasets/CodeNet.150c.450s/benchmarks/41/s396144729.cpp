#include <bits/stdc++.h>
using namespace std;
template<typename T1, typename T2>
inline bool cmn (T1& a, T2 b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<typename T>
struct floyd_warshall {
  const int n;
  const T inf;
  vector<vector<T>> dst;
  void cal () {
    for (int k = 0; k < n; k++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (dst[i][k] != inf && dst[k][j] != inf) {
            cmn(dst[i][j], dst[i][k] + dst[k][j]);
          }
        }
      }
    }
  }
  floyd_warshall (
      vector<vector<T>> adj,
      const T inf
    ) :
    n(adj.size()), inf(inf), dst(adj)
    {
      cal();
    }
  auto& result () {return dst;}
  const bool has_negative_cycle () {
    for (int i = 0; i < n; i++) if (dst[i][i] < 0) return true;
    return false;
  }
};
int main() {
  cin.tie(0); cin.sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  constexpr int inf = numeric_limits<int>::max();
  vector<vector<int>> adj(n, vector<int>(n, inf));
  for (int i = 0; i < n; i++) adj[i][i] = 0;
  for (int i = 0; i < m; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    cmn(adj[s][t], d);
  }
  floyd_warshall<int> fw(adj, inf);
  if (fw.has_negative_cycle()) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    auto dst = fw.result();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j) cout << " ";
        cout << (dst[i][j] == inf ? "INF" : to_string(dst[i][j]));
      }
      cout << endl;
    }
  }
  return 0;
}
