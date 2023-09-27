#include <bits/stdc++.h>
using namespace std;
#define REP(i,b,e) for(int i=(b);i<(e);++i)
#define rep(i,e) for(int i=0;i<(e);++i)

int main() {
  int n;
  while(cin >> n){
    if(n==0) return 0;
    int ans = 1e9;
    vector<int> v(n);
    rep(i, n){
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    REP(i, 1, n){
      ans = min(ans, abs(v[i-1]-v[i]));
    }
    cout << ans << endl;
  }
  return 0;
}
