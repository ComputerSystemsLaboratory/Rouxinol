#include <iostream>
using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;

  int A[100][100] = {};
  int B[100] = {};

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  for(int i = 0; i < m; i++) {
    cin >> B[i];
  }

  int sum;
  for(int i = 0; i < n; i++) {
    sum = 0;
    for(int j = 0; j < m; j++) {
      sum += A[i][j] * B [j];
    }
    cout << sum << endl;
  }
}