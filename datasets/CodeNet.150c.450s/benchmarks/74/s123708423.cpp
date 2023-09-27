#include<bits/stdc++.h>
using namespace std;
int n,m;
int coin[20] = { 0 };
int memo[21][50001];

int solve(int par, int remain);
//par:?????????????????¢,remain:???????????????

int main(){
  cin >> n >> m;
  for(int i = 0;i < m;i++){
    cin >> coin[i];
  }
  memset(memo,-1,sizeof(memo));
  //sort(coin,coin + 20,greater<int>());
  cout << solve( 0, n) << endl;
}

int solve(int par, int remain){
  if(par == m)return 1 << 24;
  if(remain == 0)return 0;
  if(memo[par][remain] != -1)return memo[par][remain];
  int rec = 1 << 24;
  rec = min(rec,solve(par + 1,remain));
  if(remain >= coin[par]){
    rec = min(rec,solve(par + 1,remain - coin[par]) + 1);
    rec = min(rec,solve(par,remain - coin[par]) + 1);
  }
  return memo[par][remain] = rec;
}