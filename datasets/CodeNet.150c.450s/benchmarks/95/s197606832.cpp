//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  string input;

  while (cin >> n, n) {
    int prev_h = 0;
    int curr_l = 0, curr_r = 0;
    int ans = 0;

    rep (i, n) {
      cin >> input;

      // cout << input << endl;

      if (input == "lu") curr_l++;
      if (input == "ld") curr_l--;
      if (input == "ru") curr_r++;
      if (input == "rd") curr_r--;

      // cout << curr_l << "-" << curr_r << endl;

      if (curr_l == curr_r && curr_l != prev_h) {
        // cout << "count" << endl;
        ans++;
        prev_h = curr_l;
      }
    }

    cout << ans << endl;
  }
  return 0;
}