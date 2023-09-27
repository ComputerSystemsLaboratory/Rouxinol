#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  std::vector<std::vector<int>> a;
  for (int i = 0; i < n; ++i) {
    std::vector<int> row;
    for (int j = 0; j < m; ++j) {
      int x;
      cin >> x;
      row.push_back(x);
    }
    a.push_back(row);
  }

  std::vector<int> b;
  for (int j = 0; j < m; ++j) {
    int x;
    cin >> x;
    b.push_back(x);
  }

  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = 0; j < m; ++j) {
      sum += a[i][j] * b[j];
    }
    cout << sum << endl;
  }
}