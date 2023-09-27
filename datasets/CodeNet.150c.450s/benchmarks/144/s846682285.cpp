#include <iostream>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  long matA[n][m], matB[m][l];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matA[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> matB[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      long sum = 0;
      for (int k = 0; k < m; k++) {
        sum += matA[i][k] * matB[k][j];
      }
      cout << sum;
      cout << (j == l - 1 ? '\n' : ' ');
    }
  }
  return 0;
}

