#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1e+8
#define MX_N 100
#define MX_W 10000

int vi[MX_N+1];
int wi[MX_N+1];
int dp[MX_N+1][MX_W+1];

int main() {
  int n, w;
  while(cin >> n >> w, n) {
    for (int i = 0; i < n; i++) {
      cin >> vi[i] >> wi[i];
    }
    for(int i = 0; i <= w; i++) dp[n][i] = 0;

    for(int i = n-1; i >= 0; i--) {
      for(int j = 0; j <= w; j++) {
        if (wi[i] > j) {
          dp[i][j] = dp[i+1][j];
        } else {
          dp[i][j] = max(dp[i+1][j], vi[i] + dp[i+1][j - wi[i]]);
        }
      }
    }
    cout << dp[0][w] << endl;
    n = 0;
  }
}