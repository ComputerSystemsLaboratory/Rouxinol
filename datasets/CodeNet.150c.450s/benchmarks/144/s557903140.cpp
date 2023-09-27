#include <iostream>
using namespace std;
 
int main() {
  int x, y, z;
  cin >> x >> y >> z;;
  int a[x][y], b[y][z];
  long long c[x][z];
  for (int i = 0; i < x; i++) {
    for (int o = 0; o < y; o++) {
      cin >> a[i][o];
    }
  }
  for (int i = 0; i < y; i++) {
    for (int o = 0; o < z; o++) {
      cin >> b[i][o];
    }
  }
  for (int i = 0; i < x; i++) {
    for (int d = 0; d < z; d++) {
      c[i][d] = 0;
    }
  }
  for (int i = 0; i < x; i++) {
    for (int o = 0; o < y; o++) {
      for (int p = 0; p < z; p++) {
        c[i][p] += a[i][o] * b[o][p];
      }
    }
  }
  for (int i = 0; i < x; i++) {
    for (int d = 0; d < z; d++) {
      cout << c[i][d];
      if (d < z - 1) cout << " ";
    }
    cout << endl;
  }
}
