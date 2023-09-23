#include <iostream>
#include <cstring>
using namespace std;

typedef unsigned long long ll;
ll n,fig[101],dp[101][21];

ll rec(int idx,int sum){
  if(sum < 0 || sum > 20) return 0;
  if(idx == n-1) return sum == fig[idx]? 1 : 0;
  if(dp[idx][sum] != -1) return dp[idx][sum];
  return dp[idx][sum] = (rec(idx+1,sum+fig[idx]) + rec(idx+1,sum-fig[idx]));
}

int main(){
  cin >> n;
  memset(dp,-1,sizeof(dp));
  for(int i=0;i<n;i++) cin >> fig[i];
  cout << rec(1,fig[0]) << endl;
}