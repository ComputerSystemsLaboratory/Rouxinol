#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    cin >> s;
    vector<long long> base;
    for (int i = n - 1; ~i; i--) {
      for (auto u : base) {
        a[i] = min(a[i], a[i] ^ u);
      }
      if (s[i] == '0') {
        base.push_back(a[i]);
      } else if (a[i] > 0) {
        cout << 1 << '\n';
        break;
      }
      if (i == 0) {
        cout << 0 << '\n';
      }
    }
  }
  return 0;
}
