#include <iostream>

using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  int as[n][m], bs[m][l];
  long long cs[n][l];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      cs[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> as[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> bs[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        cs[i][j] += (as[i][k] * bs[k][j]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << cs[i][0];
    for (int j = 1; j < l; j++) {
      cout << " " << cs[i][j];
    }
    cout << endl;
  }
}
