#include <bits/stdc++.h>
using namespace std;

int Max(int &a,int b){return a=max(a,b);}

int LCS(string &a,string &b){
  int n = a.size();
  int m = b.size();
  vector <vector<int> > dp(n+1,vector<int>(m+1));

  for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++){
      if(i<n && j<m && a[i] == b[j]) Max(dp[i+1][j+1],dp[i][j]+1);
      if(i<n)Max(dp[i+1][j],dp[i][j]);
      if(j<m)Max(dp[i][j+1],dp[i][j]);

    }
  return dp[n][m];
}

int main(){
  int q;
  cin>>q;
  while(q--){
    string a,b;
    cin>>a>>b;
    cout<<LCS(a,b)<<endl;
  }
  return 0;
}