#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  i64 m, nm, nM;
  while(cin >> m >> nm >> nM, m) {
    vector<i64> P(m);
    rep(i,0,m) cin >> P[i];
    sort(all(P));
    reverse(all(P));
    i64 ans = -1e18;
    i64 res = 0;
    rep(i,nm,nM + 1) {
      i64 tmp = ans;
      ans = max(ans, P[i - 1] - P[i]);
      if(tmp <= P[i - 1] - P[i]) {
        res = i;
      }
    }
    cout << res << endl;
  }
}

