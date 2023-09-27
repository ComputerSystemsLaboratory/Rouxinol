#include <bits/stdc++.h>
using namespace std;

inline int calc(int p, int x) {
  return p * (100 + x) / 100;
}

int main() {
  for(int x, y, s; cin >> x >> y >> s && (x|y|s);) {
    int res = 0;
    for(int a = 1; a < s; ++a) {
      for(int b = 1; b < s; ++b) {
        if(calc(a, x) + calc(b, x) != s) continue;
        res = max(res, calc(a, y) + calc(b, y));
      }
    }
    cout << res << endl;
  }
  return 0;
}