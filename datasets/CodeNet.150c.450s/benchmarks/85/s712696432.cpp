#include <iostream>
#include <limits>
using namespace std;

int solve(int *cr, int n) {
  int m[101][101];
  for (int i = 1; i <= n; i++) m[i][i] = 0;

  for (int length = 2; length <= n; length++) {
    for (int begin = 1; begin <= n - length + 1; begin++) {
      int end = begin + length - 1;
      m[begin][end] = numeric_limits<int>::max();
      for (int k = begin; k <= end - 1; k++) {
        m[begin][end] = min(m[begin][end], m[begin][k] + m[k + 1][end] + cr[begin - 1] * cr[k] * cr[end]);
      }
    }
  }
  return m[1][n];
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int cr[101];

  for (int i = 1; i <= n; i++) {
    cin >> cr[i - 1] >> cr[i];
  }

  cout << solve(cr, n) << endl;

  return 0;
}