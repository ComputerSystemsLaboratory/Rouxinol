#include <iostream>
using namespace std;

const int MAX = 105;

int main() {
  int n;
  int p[MAX];
  int m[MAX][MAX];
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> p[i-1] >> p[i];
  }

  for (int i = 0; i <= n; i++) {
    m[i][i] = 0;
  }

  for (int i = 2; i <=n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      int k = j + i - 1;
      m[j][k] = (1 << 21);
      for (int l = j; l < k; l++) {
        long long tmp = m[j][l] + m[l+1][k] + p[j-1] * p[l] * p[k];
        m[j][k] = m[j][k] > tmp ? tmp : m[j][k];
      }
    }
  }
  cout << m[1][n] << endl;
  return 0;
}

