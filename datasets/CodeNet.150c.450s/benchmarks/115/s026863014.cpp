#include <bits/stdc++.h>
using namespace std;

int dp[2000][2000];

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n; cin >> n;
  while(n--){
    string sa, sb; cin >> sa >> sb;
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= sa.size(); i++){
      for(int j = 1; j <= sb.size(); j++){
        if(sa[i-1] == sb[j-1]){
          dp[i][j] = dp[i-1][j-1] + 1;
        }else{
          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
      }
    }
    cout << dp[sa.size()][sb.size()] << endl;
  }
  return 0;
}