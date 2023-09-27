#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    string s;
    int ans = 0;
    bool f = true;
    vector<bool> l(2, false);
    for (int i = 0; i < n; i++) {
      cin >> s;
      if (f) {  // 床
        if (s == "lu") {
          l[0] = true;
        }
        if (s == "ru") {
          l[1] = true;
        }
        if (s == "ld") {
          l[0] = false;
        }
        if (s == "rd") {
          l[1] = false;
        }
      } else {  // 階段
        if (s == "ld") {
          l[0] = true;
        }
        if (s == "rd") {
          l[1] = true;
        }
        if (s == "lu") {
          l[0] = false;
        }
        if (s == "ru") {
          l[1] = false;
        }
      }
      if (l[0] && l[1]) {
        f = !f;
        ans++;
        l[0] = l[1] = false;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
