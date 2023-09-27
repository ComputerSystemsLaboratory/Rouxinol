#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int w,h;
    cin>>w>>h;
    if(!w&&!h)break;
    int n;
    cin>>n;
    int mp[20][20]={};
    for(int i=0,a,b;i<n;i++)cin>>a>>b,mp[b-1][a-1]=1;
    
    int dp[20][20]={1};
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++){
	if(!mp[i+1][j])dp[i+1][j]+=dp[i][j];
	if(!mp[i][j+1])dp[i][j+1]+=dp[i][j];
      }
    cout <<dp[h-1][w-1]<<endl;
  }
  return 0;
}