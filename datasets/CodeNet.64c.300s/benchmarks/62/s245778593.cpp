#include <iostream>
using namespace std;

const int block = 4;
const int floor = 3;
const int room = 10;

int main() {
  int n, m;
  cin >> n >> m;
  int A[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }
  int b[m];
  for (int k = 0; k < m; k++) {
    cin >> b[k];
  }

  for (int l = 0; l < n; l++) {
    int c = 0;
    for (int o = 0; o < m; o++) {
      c += A[l][o] * b[o];
    }
    cout << c << endl;
  }
  return 0;
}