#include<bits/stdc++.h>
#define INF (1e9)
#define N 105
using namespace std;
int n,r[N],c[N],dp[N][N];

void matrixChainOrder(){
  for(int l=2;l<=n;l++){
    for(int i=0;i<=n-l;i++){
      int j=i+l-1;
      dp[i][j]=INF;
      for(int k=i;k<j;k++)
	dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+r[i]*c[k]*c[j]);
    }
  }
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>r[i]>>c[i];
  matrixChainOrder();
  cout<<dp[0][n-1]<<endl;
  return 0;
}