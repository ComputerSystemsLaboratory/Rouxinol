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

uint64_t solve(const vector<pair<int, int>>& mat) {
  if (mat.size() < 2) {
    return 0ULL;
  }
  auto n = mat.size();
  vector<vector<uint64_t>> cache(n - 1, vector<uint64_t>(n, no_value));
  for (size_t range = 2; range <= n; ++range) {
    for (size_t first = 0; ; ++first) {
      auto last = first + range - 1;
      if (last == n) {
        break;
      }
      for (size_t mid = first; mid != last; ++mid) {
        auto lhs = first == mid ? 0 : cache[first][mid];
        auto rhs = (mid + 1) == last ? 0 : cache[mid + 1][last];
        auto mul = mat[first].first * mat[last].second * mat[mid].second;
        cache[first][last] = min(cache[first][last], lhs + rhs + mul);
      }
    }
  }
  return cache[0][n - 1];
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> mat;
  for (int i = 0; i < n; ++i) {
    int row, col;
    cin >> row >> col;
    mat.push_back(make_pair(row, col));
  }
  uint64_t result = solve(mat);
  cout << result << endl;
}