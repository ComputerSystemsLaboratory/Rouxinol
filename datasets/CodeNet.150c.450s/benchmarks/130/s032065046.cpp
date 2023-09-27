#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int A[n][m], b[m][1], C[n][1];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> A[i][j];
  for (int i = 0; i < m; i++)
    cin >> b[i][0];
  for (int i = 0; i < n; i++) {
    int tmp = 0;
    for (int j = 0; j < m; j++)
      tmp += A[i][j] * b[j][0];
    C[i][0] = tmp;
  }
  for (int i = 0; i < n; i++)
    cout << C[i][0] << endl;
  return 0;
}