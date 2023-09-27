#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define range(i, a, b) for(int i = (a); i <= (int)(b); i++)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

int n;
int m[110][110];
int p[110];

int matrixChainMultiplication() {
  rep1(i, n) m[i][i] = 0;

  range(l, 2, n) {
    rep1(i, n - l + 1) {
      int j = i + l - 1;
      m[i][j] = INT_MAX;
      range(k, i, j - 1) {
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }
  return m[1][n];
}

int main() {
  cin >> n;
  rep1(i, n) {
    cin >> p[i - 1] >> p[i];
  }
  cout << matrixChainMultiplication() << endl;
  return 0;
}

