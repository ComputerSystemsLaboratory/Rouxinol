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

int solve(const string& str1, const string& str2) {
  int max_ = 0;
  vector<vector<int>> buf(str1.size(), vector<int>(str2.size(), 0));
  for (size_t j = 0; j < str2.size(); ++j) {
    for (size_t i = 0; i < str1.size(); ++i) {
      auto prev1 = j == 0 ? 0 : buf[i][j - 1];
      auto prev2 = i == 0 ? 0 : buf[i - 1][j];
      buf[i][j] = max(prev1, prev2);
      if (str1[i] == str2[j]) {
        auto p = i == 0 || j == 0 ? 0 : buf[i - 1][j - 1];
        buf[i][j] = max(buf[i][j], p + 1);
        max_ = max(max_, buf[i][j]);
      }
    }
  }
  return max_;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string str1;
    string str2;
    cin >> str1 >> str2;
    auto res = solve(str1, str2);
    cout << res << endl;
  }
}