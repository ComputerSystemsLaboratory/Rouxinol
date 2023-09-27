#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){

  int N,W;
  cin >> N >> W;

  vector<int>v(N),w(N);
  for(int i=0;i<N;i++)
    cin >> v[i] >> w[i];

  int dp[W+1];
  fill(dp,dp+W+1,0);

  for(int i=0;i<N;i++){
    for(int j=W;j>=0;j--){
      if(j-w[i]>=0)dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
    }
  }

  int ans=0;
  for(int i=0;i<=W;i++)ans=max(ans,dp[i]);

  cout << ans << endl;
  
  return 0;
}