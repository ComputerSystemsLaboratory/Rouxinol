#include<bits/stdc++.h>
using namespace std;

struct edge{
  int to, cost;
};

int main(int argc, char *argv[]){
  int n, m, r;
  cin >> n >> m >> r;
  vector<vector<edge> > g(n);
  int from;
  for (int i = 0; i < m; i++) {
    edge e;
    cin >> from >> e.to >> e.cost;
    g[from].push_back(e);
  }
  int dp[n];
  for (int i = 0; i < n; i++) {
    dp[i] = 1e9;
  }
  dp[r] = 0;
  //???????????§?????????
  //????????????????????????????????????
  bool update = true;
  int cnt = 0;
  while(update){
    if(cnt > n)break;
    cnt++;
    update = false;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < g[i].size(); j++) {
        edge e = g[i][j];
        if(dp[e.to] > dp[i] + e.cost && dp[i] != 1e9){
          dp[e.to] = dp[i] + e.cost;
          update = true;
        }
      }
    }
  }
  if(cnt > n){
    std::cout << "NEGATIVE CYCLE" << std::endl;
  }else{
    for (int i = 0; i < n; i++) {
      if(dp[i] == 1e9)std::cout << "INF" << std::endl;
      else std::cout << dp[i] << std::endl;
    }
  }
  return 0;
}