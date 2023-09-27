#include <iostream>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
int x[10];
int dp[11][11][11];

string solve(){
  fill_n((int*)dp, 11 * 11 * 11, 0);
  dp[0][0][0] = 1;
  for(int i = 1; i <= 10; ++i){
    int v = x[i - 1];
    rep(j, 11){
      rep(k, v){
        dp[i][j][v] += dp[i - 1][j][k];
      }
    }
    rep(k, 11){
      rep(j, v){
        dp[i][v][k] += dp[i - 1][j][k];
      }
    }
  }
  rep(j, 11){
    rep(k, 11){
      if(dp[10][j][k]){
        return "YES";
      }
    }
  }
  return "NO";
}

int main(){
  cin >> n;
  rep(i, n){
    rep(j, 10){
      cin >> x[j];
    }
    cout << solve() << endl;
  }
  return 0;
}