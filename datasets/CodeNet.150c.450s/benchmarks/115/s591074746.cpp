#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

static const int N = 1000;

int lcs(string X, string Y) {
  int c[N + 1][N + 1];
  int m = X.size();
  int n = Y.size();

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (X[i] == Y[j]) {
        if (i == 0 || j == 0) 
          c[i][j] = 1;
        else 
          c[i][j] = c[i - 1][j - 1] + 1;
      }
      else {
        if (i == 0 && j == 0)
          c[i][j] = 0;
        else if (i == 0)
          c[i][j] = c[i][j - 1];
        else if (j == 0)
          c[i][j] = c[i - 1][j];
        else 
          c[i][j] = max(c[i][j - 1], c[i - 1][j]);
      }
    }
  }
  return c[m - 1][n - 1];
}

int main() {
  string s1, s2;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1 >> s2;
    cout << lcs(s1, s2) << endl;
  }
  return 0;
}

