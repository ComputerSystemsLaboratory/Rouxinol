// 時系列
// 計算量 O(n^2) のアルゴリズムを避ける
#include <algorithm>
#include <iostream>

static const int MAX = 200000;
using namespace std;

int main() {
  int n, minv, maxv;
  int R[MAX];
  cin >> n;
  for (int it = 0; it < n; ++it) {
    cin >> R[it];
  }
  minv = R[0];
  maxv = -10000000000;
  for (int it = 1; it < n; ++it) {
    maxv = max(maxv, R[it] - minv);
    minv = min(minv, R[it]);
  }
  cout << maxv << endl;
  return 0;
}
