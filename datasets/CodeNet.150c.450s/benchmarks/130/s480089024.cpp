#include <iostream>
using namespace std;

int main() {
  int A[100][100], b[100], c[100];
  int n, m, a_ij, b_i;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a_ij;
      A[i][j] = a_ij;
    }
  }

  for (int i = 0; i < m; i++) {
    cin >> b_i;
    b[i] = b_i;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i] += A[i][j] * b[j];
    }
  }

  for (int i = 0; i < n; i++) {
      cout << c[i] <<endl;
    }

  return 0;
}