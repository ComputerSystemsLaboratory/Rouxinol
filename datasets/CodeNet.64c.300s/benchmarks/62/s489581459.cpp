#include <iostream>
using namespace std;

int main() {
  int n, m, a[100][100], b[100], ans[100];
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ans[i] += a[i][j] * b[j];
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << '\n';
  }
  cout << flush;
}