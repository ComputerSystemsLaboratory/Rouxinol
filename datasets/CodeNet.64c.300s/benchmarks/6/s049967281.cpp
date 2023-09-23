#include <iostream>
using namespace std;
int main () {
  int A[4][3][10];
  int n;
  int b, f, r, v;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
	A[i][j][k] = 0;
      }
    }
  }

  cin >> n;
  for (int i = 0; i<n; i++) {
    cin >> b >> f >> r >> v;
    if ((b > 0) && (b < 5) && (f > 0) && (f < 4) && (r > 0) && (r < 11)) {
      A[b-1][f-1][r-1] += v;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
	cout << " " << A[i][j][k];
      }
      cout << endl;
    }
    if (i != 3) {
      cout << "####################" << endl;
    }
  }

  return 0;
}