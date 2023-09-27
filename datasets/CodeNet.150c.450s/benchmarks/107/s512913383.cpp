#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

void solve(string, string);
int main(){
  string s, t;
  cin >> s >> t;

  solve(s, t);

  return 0;
}

void solve(string s, string t){
  int m=s.length(), n=t.length();
  s = " "+s; t = " "+t;

  int dp[m+1][n+1];
  for(int i=0; i<=m; i++) dp[i][0] = i;
  for(int i=0; i<=n; i++) dp[0][i] = i;

  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      int ins=dp[i-1][j]+1;
      int del=dp[i][j-1]+1;
      int rep;
      if(s[i]==t[j]){
        rep = dp[i-1][j-1];
        dp[i][j] = min(ins, min(del, rep));
      }
      else{
        rep = dp[i-1][j-1]+1;
        dp[i][j] = min(ins, min(del, rep));
      }
    }
  }

  cout << dp[m][n] << endl;
}

