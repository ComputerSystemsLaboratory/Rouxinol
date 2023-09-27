#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    cin >> s;
    vector<long long> b;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
      long long cur = a[i];
      for (auto& x : b) {
        cur = min(cur, cur ^ x);
      }
      if (cur > 0) {
        if (s[i] == '1') {
          ans = 1;
          break;
        } else {
          b.push_back(cur);
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
