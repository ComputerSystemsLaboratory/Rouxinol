#include <iostream>

using namespace std;

int lcs(string X, string Y) {
  X = ' ' + X;
  Y = ' ' + Y;
  int memo[1010][1010];
  int maxl = 0;

  // 初期化
  for (int i = 0; i < X.size(); i++) memo[i][0] = 0;
  for (int j = 0; j < Y.size(); j++) memo[0][j] = 0;

  for (int i = 1; i < X.size(); i++) {
    for (int j = 1; j < Y.size(); j++) {
      if (X[i] == Y[j]) {
        //cout << "count up!" << endl;
        memo[i][j] = memo[i-1][j-1] + 1;
      } else {
        memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
      }
      maxl = max(maxl, memo[i][j]);
    }
  }
  return maxl;
}

int main() {
  int q; cin >> q;
  for (int i = 0; i < q; i++) {
    string X, Y; cin >> X >> Y;
    cout << lcs(X, Y) << endl;
  }
}

