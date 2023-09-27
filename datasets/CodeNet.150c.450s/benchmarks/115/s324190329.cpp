#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int cal(string x, string y)
{
  int n1 = x.size(), n2 = y.size();
  vector<vector<int> > dp(n1 + 5, vector<int>(n2 + 5, 0));
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < n2; ++j) {
      if (x[i] == y[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      }
      else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }
  return dp[n1][n2];
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  for (int i = 0; i < n; ++i) {
    string x, y;
    cin >> x >> y;
    int len = cal(x, y);
    fprintf(stdout, "%d\n", len);
  }
  return 0;
}