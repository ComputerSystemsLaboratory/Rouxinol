#include <iostream>

using namespace std;

int lcs(string X, string Y) {
  int memo[1010][1010];
  int m = X.size();
  int n = Y.size();
  X = ' ' + X;
  Y = ' ' + Y;
  for (int i = 0; i < m; i++) {
    memo[i][0] = 0;
  }
  for (int j = 0; j < m; j++) {
    memo[0][j] = 0;
  }
  int max_lcs = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (X[i] == Y[j]) {
        memo[i][j] = memo[i-1][j-1] + 1;
      } else {
        memo[i][j] = max(memo[i][j-1], memo[i-1][j]);
      }
      max_lcs = max(max_lcs, memo[i][j]);
    }
  }
  return max_lcs;
}

int main() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string X, Y;
    cin >> X >> Y;
    cout << lcs(X, Y) << endl;
  }
}

