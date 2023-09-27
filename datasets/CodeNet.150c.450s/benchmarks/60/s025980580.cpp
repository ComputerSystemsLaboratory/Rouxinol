#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var)\
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

constexpr auto no_value = numeric_limits<uint64_t>::max();

int main() {
  int n;
  cin >> n;
  vector<vector<int>> edges(n, vector<int>());
  for (int i = 0; i < n; ++i) {
    int u;
    int k;
    cin >> u >> k;
    edges[u - 1].reserve(k);
    for (int j = 0; j < k; ++j) {
      int v;
      cin >> v;
      edges[u - 1].push_back(v - 1);
    }
  }

  vector<vector<int>> mat(n, vector<int>(n, 0));
  for (int i = 0; i < n; ++i) {
    for (auto&& e : edges[i]) {
      mat[i][e] = 1;
    }
  }

  for (auto it = mat.begin(); it != mat.end(); ++it) {
    bool first = true;
    for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
      if (!first) {
        cout << " ";
      }
      first = false;
      cout << *it2;
    }
    cout << endl;
  }
}