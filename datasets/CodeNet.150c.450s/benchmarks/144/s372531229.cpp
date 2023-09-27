#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m, l;
  cin >> n >> m >> l;

  // 行列A
  vector<vector<ll>> matrix_a(n, vector<ll>(m, 0));
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < m; y++) {
      cin >> matrix_a.at(x).at(y);
    }
  }

  // 行列B
  vector<vector<ll>> matrix_b(m, vector<ll>(l, 0));
  for (int x = 0; x < m; x++) {
    for (int y = 0; y < l; y++) {
      cin >> matrix_b.at(x).at(y);
    }
  }

  // 行列C
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < l; y++) {
      ll sum = 0;
      for (int k = 0; k < m; k++) {
        sum += matrix_a.at(x).at(k) * matrix_b.at(k).at(y);
      }
      cout << sum;

      if (y < l - 1) { cout << " "; }
    }
    cout << endl;
  }

  return 0;
}

