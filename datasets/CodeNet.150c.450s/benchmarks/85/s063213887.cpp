#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n;
int r[100], c[100];
int dp[100][100];
const int INF = 1000000000;

int main() {
  cin >> n;
  rep(i, n) {
    cin >> r[i] >> c[i]; 
  }
  rep(i, 100) {
    rep(j, 100) {
      if(i == j) dp[i][j] = 0;
      else dp[i][j] = INF;
    }
  }

  for(int w = 1; w < n; w++) {
    for(int i = 0; i + w < n; i++) {
      int j = i + w;
      for(int k = 0; k < j; k++) {
        int num_prod = r[i] * c[k] * c[j];
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + num_prod);
      }
    }
  }

  cout << dp[0][n-1] << endl;
  return 0;
}
