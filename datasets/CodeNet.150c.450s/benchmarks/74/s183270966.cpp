#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
int dp[50050];
int main(){
  int n,m;
  int c[20];
  cin>>n>>m;
  REP(i,n)cin>>c[i];
  for(int i=0;i<=n;i++)dp[i]=1e9;
  dp[0]=0;
  for(int i=0;i<m;i++){
    for(int j=c[i];j<=n;j++){
      dp[j]=min(dp[j],dp[j-c[i]]+1);
    }
  }
  cout<<dp[n]<<endl;
}