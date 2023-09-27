#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  i64 N, A, B, C, X;
  while(cin >> N >> A >> B >> C >> X, N) {
    i64 cnt = 0;
    vector<i64> Y(N);
    rep(q, 0, N) cin >> Y[q];
    rep(q, 0, N) {
      i64 y = Y[q];
      if(q != 0) {
        X = (A * X + B) % C;
        cnt++;
      }
      while(X != y) {
        if(cnt >= 10001) {
          cnt = -1;
          break;
        }
        X = (A * X + B) % C;
        cnt++;
      } 
      if(cnt >= 10001) {
        cnt = -1;
        break;
      }
      if(cnt == -1) {
        break;
      }
    }
    cout << cnt << endl;
  }
}

