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
template<typename T1, typename T2>
inline bool cmx (T1& a, T2 b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <typename T>
class dijkstra {
  const int n, r;
  const vector<vector<pair<T, int>>>& grh;
  vector<T> dst;
  void cal () {
    priority_queue<
      pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>
      > que;
    que.emplace(0, r);
    while (!que.empty()) {
      T crd; int crr; tie(crd, crr) = que.top(), que.pop();
      if (!cmn(dst[crr], crd)) continue;
      for (auto e : grh[crr]) {
        T w; int nxt; tie(w, nxt) = e;
        T nxd = crd + w;
        if (nxd < dst[nxt]) que.emplace(nxd, nxt);
      }
    }
  }
  public:
    const T inf;
    dijkstra (
        const int r,
        const vector<vector<pair<T, int>>>& grh,
        const T inf = numeric_limits<T>::max()
      ) :
      n(grh.size()), r(r),
      grh(grh), dst(n, inf), inf(inf)
      {
        cal();
      }
    auto result () const {return dst;}
};
int main() {
  cin.tie(0); cin.sync_with_stdio(false);
  int n, m, r;
  cin >> n >> m >> r;
  vector<vector<pair<int, int>>> grh(n);
  for (int i = 0; i < m; i++) {
    int s, t; int d;
    cin >> s >> t >> d;
    grh[s].emplace_back(d, t);
  }
  dijkstra<int> dij(r, grh);
  auto inf = dij.inf;
  for (auto const& x : dij.result()) {
    cout << (x == inf ? "INF" : to_string(x)) << endl;
  }
  return 0;
}
