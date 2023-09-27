#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

static const int N = 100;
static int m[N + 1][N + 1] = {}, p[N + 1] = {};

static inline void matrixChainMultiplication(int n) {
  for (int l = 2; l <= n; l++) {
    for (int i = 1; i <= n - l + 1; i++) {
      int j = i + l - 1;
      m[i][j] = INT_MAX;
      for (int k = i; k <= j - 1; k++) {
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]); 
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> p[i - 1] >> p[i];
  }

  matrixChainMultiplication(n);
  
  cout << m[1][n] << endl;

  return 0;
}

