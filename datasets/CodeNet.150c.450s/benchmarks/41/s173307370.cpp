#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(int argc, char *argv[]){
  int n, m;
  cin >> n >> m;
  vector<vector<lli> > g(n, vector<lli>(n, 1LL<<40));
  int from, to, cost;
  for (int i = 0; i < n; i++) {
    g[i][i] = 0;
  }
  for (int i = 0; i < m; i++) {
    cin >> from >> to >> cost;
    g[from][to] = cost;
  }
  //???????????§?????????
  //???????????????????????£???????????????
  bool neg_cycle = false;
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(g[i][j] == 1LL<<40 &&
           (g[i][k] == 1LL<<40 || g[k][j] == 1LL<<40))continue;
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if(g[i][i] < 0)neg_cycle = true;
  }
  if(neg_cycle){
    std::cout << "NEGATIVE CYCLE" << std::endl;
    return 0;
   }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if(g[i][j] >= 1LL<<40)std::cout << "INF ";
      else std::cout << g[i][j] << " ";
    }
    if(g[i][n - 1] >= 1LL<<40)std::cout << "INF" << std::endl;
    else std::cout << g[i][n - 1] << std::endl;
  }
  return 0;
}