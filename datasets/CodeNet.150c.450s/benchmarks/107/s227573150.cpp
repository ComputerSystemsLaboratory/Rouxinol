#include<bits/stdc++.h>
using namespace std;

string s,t;
int dp[1001][1001];

int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 cin>>s>>t;
 int n=(int)s.length();
 int m=(int)t.length();
 for(int i=0;i<=n;i++){
  dp[i][0]=i;
 }
 for(int j=0;j<=m;j++){
  dp[0][j]=j;
 }
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   dp[i+1][j+1]=min(dp[i][j]+(s[i]!=t[j]),min(dp[i][j+1]+1,dp[i+1][j]+1));
  }
 }
 cout<<dp[n][m]<<"\n";
 return 0;
}