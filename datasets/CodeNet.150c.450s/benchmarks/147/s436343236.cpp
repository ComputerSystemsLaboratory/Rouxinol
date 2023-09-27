#include <limits.h>

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
using namespace std;
using P = pair<int, int>;
using ll = long long;
template <typename T = long long>
vector<T> make_v(size_t a) {
  return vector<T>(a);
}
template <typename T, typename... Ts>
auto make_v(size_t a, Ts... ts) {
  return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int x = 1; x * x < n; x++) {
    for (int y = 1; y * y < n; y++) {
      for (int z = 1; z * z < n; z++) {
        if (x * x + y * y + z * z + x * y + y * z + z * x <= n) {
          a[x * x + y * y + z * z + x * y + y * z + z * x - 1]++;
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << endl;
}
