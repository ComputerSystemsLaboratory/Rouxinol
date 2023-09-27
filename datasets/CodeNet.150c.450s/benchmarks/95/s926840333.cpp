#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  i64 n;
  while(cin >> n, n) {
    vector<string> f(n);
    rep(i,0,n) cin >> f[i];
    i64 now = 0;
    i64 state = 0;
    i64 ans = 0;
    for(auto& x: f) {
      if(x == "lu") {
        state ^= 1;
      }
      if(x == "ru") {
        state ^= 2;
      }
      if(x == "ld") {
        state ^= 1;
      }
      if(x == "rd") {
        state ^= 2;
      }
      if((now ^ state) == 3) {
        ans++;
        now = state;
      }
    }
    cout << ans << endl;
  }
}

