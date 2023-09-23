#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

int ans[51];

int main() {
  rep(a,10) rep(b,10) rep(c,10) rep(d,10) ++ans[a+b+c+d];
  int n;
  while( cin >> n ) cout << ans[n] << endl;
  return 0;
}