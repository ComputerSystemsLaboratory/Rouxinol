#include <iostream>
#include <string>
using namespace std;

int lcs(string X, string Y) {
  int cs[1001][1001];
  int m = X.size();
  int n = Y.size();
  int answer = 0;
  for (int i = 1; i <= m; i++) cs[i][0] = 0;
  for (int j = 1; j <= n; j++) cs[0][j] = 0;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (X[i - 1] == Y[j - 1]) {
        cs[i][j] = cs[i - 1][j - 1] + 1;
      } else {
        cs[i][j] = max(cs[i - 1][j], cs[i][j - 1]);
      }
      answer = max(answer, cs[i][j]);
    }
  }

  return answer;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string X, Y;

  for (int i = 0; i < n; i++) {
    cin >> X >> Y;
    cout << lcs(X, Y) << endl;
  }

  return 0;
}