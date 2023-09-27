#include<iostream>
#include<algorithm>
using namespace std;

int nlist[110];
int dp[110][110];

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>nlist[i]>>nlist[i+1];
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      dp[j][j+i]=1<<30;
      for(int k=0;k<i;k++){
	dp[j][j+i]=min(dp[j][j+i],dp[j][j+k]+dp[j+k+1][j+i]+nlist[j]*nlist[j+k+1]*nlist[j+i+1]);
      }
    }
  }
  cout<<dp[0][n-1]<<endl;
  return 0;
}