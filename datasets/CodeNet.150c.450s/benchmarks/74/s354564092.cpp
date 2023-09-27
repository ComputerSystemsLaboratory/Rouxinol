#include<iostream>
using namespace std;
#define P 10007
int main(){
  int w,n;
  cin>>w>>n;

  int a[n];
  int dp[w+1];
  dp[0]=0;
  for(int i=1;i<=w;i++)dp[i]=P;
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++){
    for(int j=0;j+a[i]<=w;j++){
      dp[j+a[i]]=min(dp[j]+1,dp[j+a[i]]);
    }
  }
  cout<<dp[w]<<endl;
}