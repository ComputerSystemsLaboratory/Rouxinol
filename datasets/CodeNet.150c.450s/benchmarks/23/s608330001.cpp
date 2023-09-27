#include <bits/stdc++.h>
using namespace std;

int dp[50];

int solve(int id){

  if(dp[id] != -1) return dp[id];
  if(id == 1 || id == 0) return dp[id] = 1;
  int ret = 0;

  return dp[id] = solve(id-1) + solve(id-2);

}


int main(){

  memset(dp,-1,sizeof(dp));
  int n; 

  cin >> n;

  cout << solve(n) << endl;

}