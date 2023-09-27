#include <iostream>

using namespace std;

int ans(string a, string b) {
  int n = a.size();
  int m = b.size();
  int memo[n+1][m+1];
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      memo[i][j] = 0;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int res = max(memo[i-1][j], memo[i][j-1]);
      if (a[i-1] == b[j-1]) {
        res = max(res, memo[i-1][j-1] + 1);
      } else {
        res = max(res, memo[i-1][j-1]);
      }
      memo[i][j] = res;
    }
  }
  
  return memo[n][m];
}

int main() {
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    string a, b;
    cin >> a >> b;
    
    cout << ans(a, b) << endl;
  }

  return 0;
}