#include <bits/stdc++.h>
using namespace std;
const int infty = 1e9;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, r;
  cin >> n >> m >> r;
  vector<pair<int, pair<int, int> > > grh(m);
  for (int i = 0; i < m; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    grh.push_back({d, {s, t}});
  }
  vector<int> dst(n);
  for (int i = 0; i < n; i++) {
    if (i == r) {
      dst[i] = 0;
    } else {
      dst[i] = infty;
    }
  }
  for (int i = 0; i < n; i++) {
    for (auto e : grh) {
      int d = e.first;
      int s = e.second.first;
      int t = e.second.second;
      if (dst[s] != infty) {
        dst[t] = min(dst[t], dst[s] + d);
      }
    }
  }
  for (auto e: grh) {
    int d = e.first;
    int s = e.second.first;
    int t = e.second.second;
    if (dst[s] != infty && dst[t] > dst[s] + d) {
      cout << "NEGATIVE CYCLE" << '\n';
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    if (dst[i] == infty) {
      cout << "INF" << '\n';
    } else {
      cout << dst[i] << '\n';
    }
  }
  return 0;
}
