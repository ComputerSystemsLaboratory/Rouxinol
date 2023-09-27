#include<iostream>
#include<vector>

#define INF (1<<29)

using namespace std;

int main(void){
  int n,m;
  cin >> n >> m;
  vector<int>d(m),dp(n+1,INF);
  for(int i=0;i<m;i++)cin >> d[i];
  
  dp[0]=0;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      if(j+d[i]<=n)dp[j+d[i]]=min(dp[j+d[i]],dp[j]+1);

  cout << dp[n] << endl;
  
  return 0;
}