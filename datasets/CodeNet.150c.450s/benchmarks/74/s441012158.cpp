#include<iostream>
#include<vector>
#include<algorithm>

#define INF (1<<29)

using namespace std;

int main(void){
  int n,m,d[21];
  
  cin >> n >> m;
  for(int i=0;i<m;i++)cin >> d[i];
  int dp[50001];
  fill(dp,dp+50001,INF);
  dp[0]=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j+d[i]<=n)dp[j+d[i]]=min(dp[j+d[i]],dp[j]+1);
    }
  }
  cout << dp[n] << endl;

  return 0;
}