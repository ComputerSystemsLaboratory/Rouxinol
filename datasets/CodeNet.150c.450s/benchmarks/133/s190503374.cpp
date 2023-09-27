#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main() {
  int D;
  cin >> D;
  vector<int> c(26);
  rep(i,26) cin >> c[i];
  vector<vector<int>> s(D,vector<int>(26,0));
  rep(i,D)rep(j,26) cin >> s[i][j];
  vector<int> t(D);
  rep(i,D) cin >> t[i];
  vector<int> v(D,0);
  vector<int> last(26,0);
  
  rep(d,D) {
    int m = 0;
    last[t[d]-1]=d+1;
    rep(j,26) m += c[j]*(d+1-last[j]);
    if(d==0) v[d] = s[d][t[d]-1] - m;
    else v[d] = v[d-1] + s[d][t[d]-1] - m;
  }
  rep(i,D) cout << v[i] << endl;
  
  return 0;
}