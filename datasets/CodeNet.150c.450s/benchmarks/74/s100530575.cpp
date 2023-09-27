#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  vector<int> v(m);
  REP(i,m)cin>>v[i];
  vector<vector<int>> dp(m+1,vector<int>(n+10001,100000000));
  dp[0][0] = 0;
  REP(i,m){
    REP(j,n+1){
      dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
      dp[i][j+v[i]] = min(dp[i][j+v[i]], dp[i][j]+1);
    }
  }
  cout << dp[m][n] << endl;
  return 0;
}