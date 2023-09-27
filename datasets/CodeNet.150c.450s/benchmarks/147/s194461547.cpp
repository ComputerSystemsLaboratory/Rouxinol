#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <tuple>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = int64_t;
#define rep(i, j, n) for (int i = j; i < (int)n; ++i)

int main() {
  int n;
  cin >> n;
  auto f = [](int x, int y, int z) {
    return x * x + y * y + z * z + x * y + y * z + z * x;
  };

  vector<int> ans(n + 1);
  rep(x, 1, sqrt(n) + 1) rep(y, 1, sqrt(n) + 1) rep(z, 1, sqrt(n) + 1) {
    int w = f(x, y, z);
    if (w <= n) ++ans[w];
  }

  rep(i, 1, n + 1) cout << ans[i] << '\n';
  return 0;
}