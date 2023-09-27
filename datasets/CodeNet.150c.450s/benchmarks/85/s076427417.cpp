#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int p[101];
const int INF=100000000;
long long dp[101][101];

void f(){
  for(int i=1;i<=n;i++)dp[i][i]=0;
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      dp[i][j]=INF;
      for(int k=i;k<=j-1;k++)dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
    }
  }
}
int main(){
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)scanf("%d %d",&p[i-1],&p[i]);
  f();
  printf("%d\n",dp[1][n]);
  return 0;
}