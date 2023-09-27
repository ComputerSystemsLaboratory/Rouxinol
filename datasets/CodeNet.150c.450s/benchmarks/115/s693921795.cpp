#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>

using namespace std;

typedef long long ll;

int get_LCS(string x, string y){
  int nx = x.size(), ny = y.size();
  int dp[nx+1][ny+1];
  for(int i=0;i<=ny;i++) dp[0][i] = 0;
  for(int i=0;i<=nx;i++) dp[i][0] = 0;
  for(int i=1;i<=nx;i++){
    for(int j=1;j<=ny;j++){
      if(x[i-1] == y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
      else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
    }
  }
  /*for(int i=1;i<=nx;i++){
    for(int j=1;j<=ny;j++){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }*/
  return dp[nx][ny];
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int q; cin >> q;
  for(int i=0;i<q;i++){
    string x, y; cin >> x >> y;
    cout << get_LCS(x, y) << endl;
  }
}
