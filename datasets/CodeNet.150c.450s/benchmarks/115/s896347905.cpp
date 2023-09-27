#include <iostream>
#include <string>

using namespace std;

#define max(a, b) a > b ? a : b;

int main() {
  int q;
  int i, j, k;
  string x, y;
  cin >> q;
  for (i = 0; i < q; i++) {
    int maxVal = 0;
    cin >> x;
    cin >> y;
    int lenx = x.size();
    int leny = y.size();
    x = ' ' + x;
    y = ' ' + y;
    int c[lenx + 1][leny + 1];
    for (j = 0; j <= lenx; ++j) {
      c[j][0] = 0;
    }
    for (j = 0; j <= leny; ++j) {
      c[0][j] = 0;
    }
    for (j = 1; j <= lenx; ++j) {
      for (k = 1; k <= leny; ++k) {
        if (x[j] == y[k]) {
          c[j][k] = c[j - 1][k - 1] + 1;
        } else {
          c[j][k] = max(c[j - 1][k], c[j][k - 1]);
        }
        maxVal = max(maxVal, c[j][k]);
      }
    }
    cout << maxVal << '\n';
  }

  return 0;
}

