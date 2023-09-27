#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(string, string);
int main(){
  int q; cin >> q;

  for(int i=0; i<q; i++){
    string s, t;  cin >> s >> t;
    solve(s, t);
  }

  return 0;
}

void solve(string s, string t){
  int m=s.length(), n=t.length();
  s = " " + s; t = " " + t;

  int dp[m+1][n+1];
  for(int i=0; i<=m; i++) dp[i][0]=0;
  for(int i=0; i<=n; i++) dp[0][i]=0;

  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      if(s[i]==t[j]){
        dp[i][j] = dp[i-1][j-1]+1;
      }
      else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }

  cout << dp[m][n] << endl;
}

