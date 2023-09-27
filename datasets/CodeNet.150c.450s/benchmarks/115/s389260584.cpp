#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

int q;
int dp[1010][1010];

int lcs(string& X, string& Y) {
  int m = X.size(), n = Y.size();
  X = ' ' + X, Y = ' ' + Y;
  int result = 0;
  rep1(i, m) dp[i][0] = 0;
  rep1(j, n) dp[0][j] = 0;
  rep1(i, m) rep1(j, n) {
    if (X[i] == Y[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
    else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
    result = max(result, dp[i][j]);
  }
  return result;
}

int main() {
  cin >> q;
  rep(i, q) {
    string X, Y;
    cin >> X;
    cin >> Y;
    cout << lcs(X, Y) << endl;
  }
  return 0;
}

