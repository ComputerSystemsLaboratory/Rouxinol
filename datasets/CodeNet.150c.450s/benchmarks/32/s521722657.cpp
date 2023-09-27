#include <bits/stdc++.h>
using namespace std;
#define REP(i,b,e) for(int i=(b);i<(e);++i)
#define rep(i,e) for(int i=0;i<(e);++i)

int main() {
  int m, n1, n2;
  while(cin >> m >> n1 >> n2){
    if(m==0) return 0;
    vector<int> v(m);
    rep(i, m) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int gap=0, ans;
    REP(i, n1-1, n2){
      int t = v[i]-v[i+1];
      if(gap<=t){
        gap = t;
        ans = i+1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
