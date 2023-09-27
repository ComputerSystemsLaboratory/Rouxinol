#include <bits/stdc++.h>
using namespace std;

int main() {
  constexpr int d = 60;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, ans = 0;
    cin >> n;
    vector<uint64_t> a(n), w(d);
    for (int j = 0; j < n; j++) {
      cin >> a.at(j);
    }
    string s;
    cin >> s;
    for (int j = n - 1; j >= 0; j--) {
      if (s.at(j) == '1') {
        uint64_t m = a.at(j);
        for (int k = 0; k < d; k++) {
          if ((m >> k) & 1ul) m ^= w.at(k);
        }
        if (m) {
          ans = 1;
        }
      } else {
        uint64_t m = a.at(j);
        for (int k = 0; k < d; k++) {
          if ((m >> k) & 1ul) {
            if (w.at(k) == 0) {
              w.at(k) = m;
            }
            m ^= w.at(k);
          }
        }
      }
    }
    cout << ans << "\n";
  }
}
