#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

const int INF = 1001001001;

int main(){
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> gr(n, vector<pair<int, int>>());
  rep(i, n){
    int a;
    cin >> a;
    int k;
    cin >> k;
    rep(j, k){
      int v, c;
      cin >> v >> c;
      gr.at(i).push_back(make_pair(v, c));
    }
  }
  vector<int> d(n, INF);
  vector<bool> chk(n, false);
  d.at(0) = 0;
  chk.at(0) = true;
  int now = 0;
  rep(i, n-1){
    for(auto p : gr.at(now)){
      if(chk.at(p.first) == true) continue;
      d.at(p.first) = min(d.at(p.first), d.at(now) + p.second);
    }
    int mn = INF, nx = -1;
    rep(j, n){
      if(chk.at(j) == true) continue;
      if(mn > d.at(j)){
        mn = d.at(j);
        nx = j;
      }
    }
    if(nx == -1) break;
    chk.at(nx) = true;
    now = nx;
  }

  rep(i, n){
    cout << i << " " << d.at(i) << endl;
  }
  return 0;
}
