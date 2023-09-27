#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
typedef pair<int, int> pii;//cost, vertex
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
  priority_queue<pii, vector<pii>, greater<pii> > que;
  que.push(mp(0, r));
  //???????????§?????????
  //??????????????????????????????
  while(!que.empty()){
    int v = que.top().second;
    int c = que.top().first;
    que.pop();
    for (int i = 0; i < g[v].size(); i++) {
      edge e = g[v][i];
      if(dp[e.to] > c + e.cost){
        dp[e.to] = c + e.cost;
        que.push(mp(dp[e.to], e.to));
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if(dp[i] == 1e9)std::cout << "INF" << std::endl;
    else std::cout << dp[i] << std::endl;
  }

  return 0;
}