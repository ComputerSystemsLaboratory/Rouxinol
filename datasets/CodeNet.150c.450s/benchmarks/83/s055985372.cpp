//Knapsack Problem
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, W;
  cin>>N>>W;
  int v[1000], w[1000];
  for(int i=0; i<N; i++)cin>>v[i]>>w[i];
  int dp[10001];
  memset(dp, 0, sizeof(dp));
  for(int i=0; i<N; i++)
    for(int j=W; w[i]<=j; j--){
      dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
    }
  cout<<dp[W]<<endl;
  return 0;
}