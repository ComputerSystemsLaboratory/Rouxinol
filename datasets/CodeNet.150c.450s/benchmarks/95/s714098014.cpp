#include <bits/stdc++.h>
#include <string>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    int key = 0, ke2 = 0, ans = 0;
    string s;
    rep(i, n) {
      cin >> s;
      if (s == "lu" || s == "ru") {
        key += 1;
      } else if (s == "ld" || s == "rd") {
        key -= 1;
      }
      if (key == 2 && ke2 == 0) {
        ans += 1;
        ke2 = 1;
      } else if (key == 0 && ke2 == 1) {
        ans += 1;
        ke2 = 0;
      }
    }
    cout << ans << endl;
  }
  return 0;
}