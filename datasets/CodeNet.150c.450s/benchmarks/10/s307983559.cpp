#include <iostream>
using namespace std;

int main() {
  int n, b, f, r, v;
  int a[4][3][10];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        a[i][j][k] = 0;
      }
    }
  }
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    a[b - 1][f - 1][r - 1] += v;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << " " << a[i][j][k];
      }
      cout << '\n';
    }
    if (i < 3) {
      cout << "####################\n";
    }
  }
  cout << flush;
}