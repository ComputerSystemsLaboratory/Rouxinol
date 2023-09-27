#include <bits/stdc++.h>
#define INF 1e9
using namespace std;


int main(){
  int n;
  cin>>n;
  int a[105];
  for(int i=1;i<=n;i++)cin>>a[i-1]>>a[i];

  int dp[105][105]={};
  for(int i=0;i<105;i++)
    for(int j=0;j<105;j++)dp[i][j]=INF*(i!=j);

  for(int l=0;l<n;l++){
    for(int i=0;i<n-l;i++){
      int j=i+l;
      for(int k=i;k<j;k++){
	dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i]*a[k+1]*a[j+1]);
      }
    }
  }

  cout << dp[0][n-1]<<endl;
  return 0;
}