#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int m, n_mi, n_ma;
  while (cin >> m >> n_mi >> n_ma, m || n_mi || n_ma) {
    vector<int> p(m);
    for (int i = 0; i < m; ++i) {
      cin >> p[i];
    }
    int ma = -1;
    int res;
    for (int i = n_mi; i <= n_ma; ++i) {
      if (ma <= abs(p[i - 1] - p[i])) {
        ma = p[i - 1] - p[i];
        res = i;
      }
    }
    cout << res << endl;
  }
}

