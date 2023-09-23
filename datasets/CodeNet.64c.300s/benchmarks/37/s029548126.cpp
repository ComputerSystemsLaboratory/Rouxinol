#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < static_cast<int>(n); ++i)
#define REPR(i, n) for (int i = static_cast<int>(n) - 1; i >= 0; --i)
#define FOR(i, a, b) \
  for (int i = static_cast<int>(a); i < static_cast<int>(b); ++i)
#define FORR(i, a, b) \
  for (int i = static_cast<int>(b) - 1; i >= static_cast<int>(a); --i)
#define ALL(f, x, ...) \
  ([&](auto &y) { return (f)(begin(y), end(y), ##__VA_ARGS__); })(x)
#define INDEX(x, xs) &x - &xs[0]

void async_io() {
  cin.tie(0);
  ios::sync_with_stdio(false);
}
const auto inf = INT_MAX / 3;
const auto pi = 2 * std::acos(0.0);
const auto eps = 1e-14;
using ll = long long int;
using ull = unsigned long long;

signed main() {
  async_io();
  int n;
  while (true) {
    cin >> n;
    if (n == 0) return 0;
    auto sum = 0;
    for (int i = 2;; i++) {
      auto base = i * (i + 1) / 2;
      if (base > n) break;
      if ((base - n) % i == 0) sum++;
    }
    cout << sum << "\n";
  }
}
// aoj submit / --language cpp11 --page 0001 --tweet