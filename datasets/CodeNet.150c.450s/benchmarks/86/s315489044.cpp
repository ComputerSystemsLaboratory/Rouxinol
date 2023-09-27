#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  i64 N, M, P;
  while(cin >> N >> M >> P, N || M || M) {
    i64 sum = 0;
    i64 m = 0;
    rep(i,1,N + 1) {
      i64 a;
      cin >> a;
      sum += a;
      if(i == M) m = a;
    }
    if(m == 0) cout << 0 << endl;
    else cout << sum * 100 * (100 - P) / (m * 100) << endl;
  }
}

