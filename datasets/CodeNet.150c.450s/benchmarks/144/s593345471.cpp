#include <iostream>
using namespace std;

int main () {
  int n,m,l,matrix_A[100][100]={ 0 },matrix_B[100][100]={ 0 };
  long matrix_C[101][101]={ 0 };
  cin >> n >> m >> l;

  for (int i=0;i<n;++i) {
    for (int j=0;j<m;++j) {
    cin >> matrix_A[i][j];
	}
  }

  for (int i=0;i<m;++i) {
    for (int j=0;j<l;++j) {
	  cin >> matrix_B[i][j];
	}
  }
  for (int i=0;i<n;++i) {
    for (int j=0;j<l;++j) {
      for (int k=0;k<m;++k) {
        matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
      }
	  ( j != l - 1) ? cout << matrix_C[i][j] << " " : cout << matrix_C[i][j] << endl;
	}
  }
  return 0;
}