#include<bits/stdc++.h>
using namespace std;

int editDistance(string a,string b){
  int n=a.size();
  int m=b.size();
  vector< vector< int > > dp;
  dp.resize(n+1);

  for(int i=n;i>=0;i--){
    dp[i].resize(m+1);
    
    for(int j=m;j>=0;j--){
      if(i==n){
        dp[i][j]=m-j;
      }else if(j==m){
        dp[i][j]=n-i;
      }else{
        dp[i][j]=1e9;
        if(a[i]==b[j])dp[i][j]=dp[i+1][j+1];
        else dp[i][j]=min(dp[i+1][j+1],min(dp[i][j+1],dp[i+1][j]))+1;
      }
    }
  }
  return dp[0][0];
}


int main(){
  string a,b;
  cin>>a>>b;
  cout<<editDistance(a,b)<<endl;
  return 0;
}