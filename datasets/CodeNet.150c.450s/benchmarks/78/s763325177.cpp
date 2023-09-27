#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;
const int INF = 1e9;

int dp[2][MAX];

void solve(){
  vector<int> tetra;
  int v = 1, cnt = 2;
  while(v < MAX){
    tetra.push_back(v);
    v = cnt * (cnt+1) * (cnt+2) / 6;
    cnt++;
  }
  for(int i = 0 ; i < MAX ; i++) dp[0][i] = dp[1][i] = INF;
  
  dp[0][0] = dp[1][0] = 0;
  for(int v = 0 ; v <= MAX ; v++){  
    for(int i = 0 ; i < (int)tetra.size() ; i++){
      if(v + tetra[i] > MAX) continue;
      dp[0][v + tetra[i]] = min(dp[0][v+tetra[i]], dp[0][v] + 1);
      if(tetra[i] % 2) dp[1][v + tetra[i]] = min(dp[1][v+tetra[i]], dp[1][v] + 1);
    }
  }
}

int main(){
  solve();
  int N;
  while(cin >> N, N) cout << dp[0][N] << ' ' << dp[1][N] << endl;

  return 0;
}