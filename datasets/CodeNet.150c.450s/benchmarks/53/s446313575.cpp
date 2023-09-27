#include <chrono>
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

/**
 * @param N 素因数分解する整数
 * @param result N = 2^3 * 3^2の場合、{{2, 3}, {3, 2}}のような形式のvectorが生成される
*/
void prime_factorize(ll N, vector<pair<ll, ll>>& result) {
  for (ll a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    ll ex = 0;  // 指数

    // 割れる限り割り続ける
    while (N % a == 0) {
      ++ex;
      N /= a;
    }

    result.emplace_back(pair<ll, ll>{a, ex});
  }

  // 最後に残った数
  if (N != 1) result.emplace_back(pair<ll, ll>{N, 1});
}

int main() {
  ll N;
  cin >> N;
  vector<pair<ll, ll>> result;

  prime_factorize(N, result);

  cout << N << ":";
  for (auto v : result) {
    for (ll i = 0; i < v.second; ++i) {
      cout << " " << v.first;
    }
  }
  cout << endl;

  return 0;
}

