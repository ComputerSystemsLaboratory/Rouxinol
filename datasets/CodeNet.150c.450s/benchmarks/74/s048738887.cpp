#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,m,c[20],dp[50001],l,k,p=0;
  cin >>n>>m;
  for(int i=0;i<m;i++)
    cin >> c[i];

  for(int i=0;i<=n;i++){
    dp[i]=i;
    for(int j=0;j<m;j++){
      if(i-c[j]>=0){
	dp[i]=min(dp[i],dp[i-c[j]]+1); 
      }
    }
  }

  cout << dp[n]<<endl;
  return 0;
}