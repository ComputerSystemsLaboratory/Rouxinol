#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lcs(string s, string t);
int main(){
  int n; cin >> n;
  string s, t;
  int ans[n];
  for(int i=0; i<n; i++){
    cin >> s >> t;
    ans[i]=lcs(s,t);
  }

  for(int i=0; i<n; i++) cout << ans[i] << endl;

  return 0;
}

int lcs(string s, string t){
  int ans=0;
  int sl=s.length(), tl=t.length();
  int dp[sl+1][tl+1];

  for(int i=0; i<=sl; i++) dp[i][0]=0;
  for(int j=0; j<=tl; j++) dp[0][j]=0;

  s=" "+s;
  t=" "+t;
  for(int i=1; i<=sl; i++){
    for(int j=1; j<=tl; j++){
      if(i==0 || j==0) dp[i][j]=0;
      else if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+1;
      else dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
    }

  }

  return dp[sl][tl];
}

