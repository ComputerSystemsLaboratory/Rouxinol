#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) \
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

struct Solver {
  explicit Solver(int n) {
    parent_index_.reserve(n);
    for (int i = 0; i < n; ++i) {
      parent_index_.push_back(i);
    }
  }
  void register_friend(int s, int t) {
    auto r1 = get_root(s);
    auto r2 = get_root(t);
    if (r1 != r2) {
      parent_index_[r2] = r1;
    }
  }
  bool can_reach(int s, int t) { return get_root(s) == get_root(t); }

 private:
  int get_root(int i) {
    for (auto cur = i;;) {
      auto next = parent_index_[cur];
      if (next == cur) {
        return cur;
      }
      parent_index_[cur] = parent_index_[next];
      cur = next;
    }
  }

  vector<int> parent_index_;
};

int main() {
  int n, m;
  cin >> n >> m;
  Solver sol(n);
  for (int i = 0; i < m; ++i) {
    int s, t;
    cin >> s >> t;
    sol.register_friend(s, t);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int s, t;
    cin >> s >> t;
    auto ok = sol.can_reach(s, t);
    cout << (ok ? "yes" : "no") << endl;
  }
}