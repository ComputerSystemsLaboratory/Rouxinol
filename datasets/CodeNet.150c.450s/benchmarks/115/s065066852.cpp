#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAX_X = 1000, MAX_Y = 1000;

int main() {
  int n;
  int dp[MAX_X+1][MAX_Y+1];
  string X, Y;
  cin >> n;
  for (int k=0; k<n; k++) {
    cin >> X >> Y;
    for (int i=0; i<=X.length(); i++) {
      for (int j=0; j<=Y.length(); j++) {
        dp[i][j] = 0;
      }
    }

    for (int i=1; i<=X.length(); i++) {
      for (int j=1; j<=Y.length(); j++) {
        if (X[i-1] == Y[j-1]) {
          dp[i][j] = dp[i-1][j-1] + 1;
        } else {
          dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
      }
    }

    cout << dp[X.length()][Y.length()] << endl;
  }
  return 0;
}