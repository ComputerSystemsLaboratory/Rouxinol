#include<bits/stdc++.h>
#define N 1005
using namespace std;
int n,dp[N][N],xlen,ylen;
string x,y;

int main(){
  cin>>n;
  while(n--){
    cin>>x>>y;
    xlen=x.size();
    ylen=y.size();
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=xlen;i++){
      for(int j=1;j<=ylen;j++){
	if(x[i-1]==y[j-1])dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
	dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
      }
    }
    cout<<dp[xlen][ylen]<<endl;
  }
  return 0;
}