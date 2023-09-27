#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector< vector<int> > mat(n, vector<int>(n, (1 << 21)));
  vector<int> r(n), c(n);
  
  for (int i = 0; i < n; i++) {
    mat[i][i] = 0;
    cin >> r[i] >> c[i];
  }
  
  for (int l = 1; l < n; l++) {
    for (int i = 0; i < n - l; i++) {
      int j = i + l;
      for (int k = i; k < j; k++) {
        mat[i][j] = min(mat[i][j], mat[i][k] + mat[k+1][j] + r[i] * c[k] * c[j]);
      }
    }
  }

  cout << mat[0][n-1] << eol;
  return 0;
}