#include <iostream>
using namespace std;

const int MAX_LEN = 1000;

int lcs(string x, string y) {
  int a[MAX_LEN + 1][MAX_LEN + 1];
  for (int i = 0; i <= MAX_LEN; i++)
    a[i][0] = a[0][i] = 0;

  for (int i = 1; i <= x.size(); i++) {
    for (int j = 1; j <= y.size(); j++) {
      if (x[i-1] == y[j-1]) {
        a[i][j] = a[i-1][j-1] + 1;
      } else if (a[i][j-1] > a[i-1][j]) {
        a[i][j] = a[i][j-1];
      } else {
        a[i][j] = a[i-1][j];
      }
    }
  }
  return a[x.size()][y.size()];
}

int main() {
  string x, y;
  int q; cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> x >> y;
    cout << lcs(x, y) << endl;
  }
  return 0;
}