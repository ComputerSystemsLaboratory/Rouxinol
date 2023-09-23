#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int c, r;
  cin >> c >> r;

  int a[101][101] = {0};

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      // cout << a[i][r] << endl;
      a[i][r] += a[i][j];
      a[c][j] += a[i][j];
    }
    a[c][r] += a[i][r];
  }

  for (int i = 0; i <= c; i++) {
    cout << a[i][0];
    for (int j = 1; j <= r; j++) {
      cout << ' ' << a[i][j];
    }
    cout << endl;
  }

  return 0;
}