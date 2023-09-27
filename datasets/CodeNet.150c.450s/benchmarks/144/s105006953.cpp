#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

vector<vector<int>> readMatrix(int n, int m) {
  vector<vector<int>> a;
  for (int i = 0; i < n; ++i) {
    vector<int> row;
    for (int j = 0; j < m; ++j) {
      int x;
      cin >> x;
      row.push_back(x);
    }
    a.push_back(row);
  }
  return a;
}

int main() {
  int n, m, l;

  cin >> n >> m >> l;
  auto a = readMatrix(n, m);
  auto b = readMatrix(m, l);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      int64_t sum = 0;
      for (int k = 0; k < m; ++k) {
        sum += a[i][k] * b[k][j];
      }
      if (j != 0) {
        cout << " ";
      }
      cout << sum;
    }
    cout << endl;
  }
}