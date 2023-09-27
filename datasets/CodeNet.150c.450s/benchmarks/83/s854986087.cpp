#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, W;
vector<int> v, w;
int memo[110][10010];

int rec(int i, int c) {
  if (memo[i][c] > 0) {
    return memo[i][c];
  }
  int ret;
  if (i == n) {
    ret = 0;
  } else if (c < w[i]) {
    ret = rec(i + 1, c);
  } else {
    ret = max(rec(i + 1, c), rec(i + 1, c - w[i]) + v[i]);
  }
  memo[i][c] = ret;
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> W;
  v = vector<int>(n);
  w = vector<int>(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> w[i];
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      memo[i][j] = 0;
    }
  }
  cout << rec(0, W) << endl;
  return 0;
}
