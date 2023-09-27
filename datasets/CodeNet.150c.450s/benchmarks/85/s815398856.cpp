#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> p(n+1);
  rep(i, n){
    int a, b;
    cin >> a >> b;
    if(i != 0) p.at(i+1) = b;
    else{
      p.at(0) = a;
      p.at(1) = b;
    }
  }
  vector<vector<ll>> dp(n, vector<ll>(n, 0));
  rep2(l, 1, n){
    rep(i, n - l){
      int j = i + l;
      dp.at(i).at(j) = LLONG_MAX;
      rep2(k, i, j){
        ll add = dp.at(i).at(k) + dp.at(k+1).at(j) + p.at(i) * p.at(k+1) * p.at(j+1);
        dp.at(i).at(j) = min(dp.at(i).at(j), add);
      }
    }
  }
  // rep(i, n){
  //   rep(j, n){
  //     printf("%9d ", (int)dp.at(i).at(j));
  //   }
  //   cout << endl;
  // }
  cout << dp.at(0).at(n-1) << endl;
  return 0;
}
