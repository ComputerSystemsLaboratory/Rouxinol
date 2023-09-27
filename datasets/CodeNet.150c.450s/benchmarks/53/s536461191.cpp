#pragma region Macros
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())
#define IN(x, a, b) x >= a and x < b

using namespace std;
using ll = long long;

template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename T> constexpr T INF = numeric_limits<T>::max() / 2;
#pragma endregion

vector<int> prime_factors(int n) {
  vector<int> ret;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret.emplace_back(i);
      n /= i;
    }
  }
  if (n != 1) {
    ret.emplace_back(n);
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  cout << n << ':';
  for (auto v : prime_factors(n)) {
    cout << " " << v;
  }
  cout << '\n';

  return 0;
}
