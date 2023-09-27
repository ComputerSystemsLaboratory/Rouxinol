#include <iostream>
#define INF 100001

using namespace std;

int main(){
  int n;
  cin >> n;
  int dp[n+1][n+1],p[n+1];
  cin >> p[0] >> p[1];
  for(int i=2;i<=n;i++){
    int t; cin >> t;
    cin >> p[i];
  }
  for(int i=1;i<=n;i++) dp[i][i]=0;
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      dp[i][j]=INF;
      for(int k=i;k<=j-1;k++)
        dp[i][j]=min(dp[i][j], dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
    }
  }
  cout << dp[1][n] << endl;
}