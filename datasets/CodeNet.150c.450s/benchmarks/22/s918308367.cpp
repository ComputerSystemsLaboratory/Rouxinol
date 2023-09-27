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
template<typename T>
class bellman_ford {
  using edge_t = tuple<T, int, int>;
  const int n, r;
  const vector<edge_t>& edg;
  bool flg;
  vector<long long> dst;
  void cal () {
      dst[r] = 0;
      for (int q = n; q--;) {
        flg = false;
        for (auto const& e : edg) {
          T d; int s, t; tie(d, s, t) = e;
          if (dst[s] == inf) continue;
          if (cmn(dst[t], dst[s] + d)) flg = true;
        }
      }
  }
  public:
    const T inf;
    bellman_ford (
        const int n, const int r,
        const vector<edge_t>& edg,
        const T inf
      ) :
      n(n), r(r), edg(edg), 
      flg(false), dst(n, inf), inf(inf)
      {
        cal();
      }
    bellman_ford (
        const int n, const int r,
        const vector<edge_t>& edg
      ) :
      bellman_ford(n, r, edg, numeric_limits<T>::max())
      {
      }
    bool has_negative_cycle () const {return flg;}
    auto& result () {return dst;}
};
int main() {
  cin.tie(0); cin.sync_with_stdio(false);
  int n, m, r;
  cin >> n >> m >> r;
  vector<tuple<int, int, int>> edg;
  for (int i = 0; i < m; i++) {
    int d;
    int s, t;
    cin >> s >> t >> d;
    edg.emplace_back(d, s, t);
  }
  bellman_ford<int> bf(n, r, edg);
  if (bf.has_negative_cycle()) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    auto dst = bf.result();
    for (auto const& x : dst) {
      cout << (x == bf.inf ? "INF" : to_string(x)) << endl;
    }
  }
  return 0;
}
