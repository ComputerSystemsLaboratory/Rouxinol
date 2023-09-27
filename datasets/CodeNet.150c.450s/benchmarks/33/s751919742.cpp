#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
//#define int long long
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x, y, s, a, b, ans;

  while(cin >> x >> y >> s, x | y | s) {
      ans = 0;
      for (int i = 1; i <= s; ++i) {
          for (int j = 1; j <= i; ++j) {
            a = i * (100.0 + x) / 100.0;
            b = j * (100.0 + x) / 100.0;
              if (a + b == s) {
                a = i * (100.0 + y) / 100.0;
                b = j * (100.0 + y) / 100.0;
                ans = max(ans, a+b);
              }
          }
      }
      cout << ans << endl;
  }
  return 0;
}