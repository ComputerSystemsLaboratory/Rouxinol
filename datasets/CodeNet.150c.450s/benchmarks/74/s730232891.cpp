#include <bits/stdc++.h>
#define M 21
#define N 100010
using namespace std;
int dp[N];

int Min(int &a,int b){return a=min(a,b);}

int main(){
  int n,m;
  cin>>n>>m;

  int coin[M];
  for(int i=0;i<m;i++)cin>>coin[i];

  for(int i=0;i<N;i++) dp[i] = 1e9;
  dp[0] = 0;
  for(int i=0;i<m;i++)
    for(int j=0;j<=n;j++)Min(dp[j+coin[i]],dp[j]+1);

  cout<<dp[n]<<endl;

  return 0;
}