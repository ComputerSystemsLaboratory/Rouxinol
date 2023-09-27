#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int a[x][y], b[y];
  for (int i = 0; i < x; i++) {
    for (int o = 0; o < y; o++) {
      cin >> a[i][o];
    }
  }
  for (int i = 0; i < y; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < x; i++) {
    int p = 0;
    for (int o = 0; o < y; o++) {
      p += a[i][o] * b[o];
    }
    cout << p << endl;
  }
}

