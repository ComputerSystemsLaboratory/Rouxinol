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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  for (int i = k; i < n; i++) {
    if (a[i] > a[i - k])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
