#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a;i<=b;++i)
#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
struct TRAVEL{
  int to;
  int cost;
};
int main(){
  int n;  cin >> n;
  vector<TRAVEL> g[n];
  int d[n];
  bool flag=true;
  rep(i, n){
    int u, k; cin >> u >> k;
    d[i] = 1000000000;
    rep(j, k){
      int v, c; cin >> v >> c;
      g[i].push_back({v, c});
    }
  }
  d[0] = 0;
  while(flag){
    flag = false;
    rep(i, n){
      rep(j, g[i].size()){
        int check = d[g[i][j].to];
        d[g[i][j].to] = min(d[i]+g[i][j].cost, d[g[i][j].to]);
        if(check != d[g[i][j].to])  flag = true;       }
    }
  }
  rep(i, n) cout << i << " "<< d[i] << endl;
  return 0;
}

