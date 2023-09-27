#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int q;
string X, Y;


int main(void) {
  cin >> q;
  for (int i = 0; i < q; i++) {
    int dp[1000][1000];
    cin >> X >> Y;
    memset(dp, 0, sizeof(dp));

    dp[0][0] = X[0] == Y[0];
    for (int j = 1; j < Y.size(); j++) dp[0][j] = dp[0][j-1] || X[0] == Y[j];
    for (int j = 1; j < X.size(); j++) dp[j][0] = dp[j-1][0] || X[j] == Y[0];

    for (int j = 1; j < X.size(); j++) {
      for (int k = 1; k < Y.size(); k++) {
        if (X[j] == Y[k]) {
          dp[j][k] = dp[j-1][k-1] + 1;
        } else {
          dp[j][k] = max(dp[j-1][k], dp[j][k-1]);
        }
      }
    }

    cout << dp[X.size()-1][Y.size()-1] << endl;
  }
  return 0;
}