#include<bits/stdc++.h>
#define N 17
using namespace std;
int a,b,n,x,y,dp[N][N];

int main(){
  while(1){
    cin>>a>>b;
    if(!a&&!b)break;
    memset(dp,0,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>x>>y,dp[x-1][y-1]=-1;
    dp[0][0]=1;
    for(int i=0;i<a;i++)
      for(int j=0;j<b;j++){
	if(dp[i][j]<0)continue;
	if(dp[i+1][j]>=0)dp[i+1][j]+=dp[i][j];
	if(dp[i][j+1]>=0)dp[i][j+1]+=dp[i][j];
      }
    cout<<dp[a][b-1]<<endl;
  }
  return 0;
}