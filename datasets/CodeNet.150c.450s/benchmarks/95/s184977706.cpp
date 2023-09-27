#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int n; cin >> n && n;) {
    int l = 0, r = 0, prev = 0, res = 0;
    for(int i = 0; i < n; ++i) {
      string s; cin >> s;
      if(s[0] == 'l') l ^= 1;
      else r ^= 1;
      if(l == r) {
        if(prev != l) ++res;
        prev = l;
      }
    }
    cout << res << endl;
  }
  return 0;
}