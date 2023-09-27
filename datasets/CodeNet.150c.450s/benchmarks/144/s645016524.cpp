#include <iostream>
using namespace std;

int main() {
  int A[100][100], B[100][100], n, m, l, i, j, k;
  long c;

  cin >> n >> m >> l;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < l; j++) {
      cin >> B[i][j];
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      c = 0;

      for (k = 0; k < m; k++) {
        c += A[i][k] * B[k][j];
      }

      cout << c;

      if (j != l - 1) {
        cout << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}