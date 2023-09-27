#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
signed main() { 
  ios::sync_with_stdio(false); cin.tie(0);
  auto solve = [] () {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    vector<long long> base(61);
    for (int i = n - 1; i >= 0; i--) {
      long long cur = a[i];
      for (int j = 0; j < 61; j++) {
        if (cur & (1LL << j)) {
          cur ^= base[j];
        }
      }
      if (s[i] == '0') {
        if (cur != 0) {
          int id = 0;
          while (true) {
            if (cur & (1LL << id)) {
              break;
            }
            id++;
          }
          base[id] = cur;
        }
      } else if (cur != 0) {
        return 1;
      }
    }
    return 0;
  };
  int t;
  cin >> t;
  while (t--) cout << solve() << '\n';
  return 0;
}