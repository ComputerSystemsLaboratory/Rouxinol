#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, m ,l;
  int A[100][100], B[100][100];

  cin >> n >> m >> l;
  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> A[i][j];
  for (int i = 0; i < m; i++) for (int j = 0; j < l; j++) cin >> B[i][j];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      long long c_ij = 0;
      for (int k = 0; k < m; k++) {
        c_ij += (A[i][k] * B[k][j]);
      }
      cout << c_ij;
      if (j != l-1) cout << " ";
    }
    cout << endl;
  }

  return 0;
}