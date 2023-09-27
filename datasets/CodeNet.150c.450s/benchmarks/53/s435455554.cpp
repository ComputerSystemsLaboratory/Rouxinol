/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using Pair = pair<int64_t, int64_t>;

// std::cout << std::setprecision(20) << 1.1 << endl;

std::vector<std::pair<int64_t, int64_t>> FactorizeIntoPrimeFactors(const int64_t N) {
  std::vector<std::pair<int64_t, int64_t>> result;
  if (N <= 0LL || N == 1LL) {
    return result;
  }
  int64_t remaining = N;
  for (int64_t i = 2LL; i * i <= remaining; ++i) {
    int64_t count = 0LL;
    while (remaining % i == 0LL) {
      ++count;
      remaining /= i;
    }
    if (count > 0LL) {
      result.push_back(std::pair<int64_t, int64_t>(i, count));
    }
  }
  if (remaining > 1) {
    result.push_back(std::pair<int64_t, int64_t>(remaining, 1));
  }
  return result;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int64_t N;
  cin >> N;
  cout << N << ":";
  std::vector<std::pair<int64_t, int64_t>> result = FactorizeIntoPrimeFactors(N);
  for (const auto p : result) {
    for (int32_t i = 0; i < p.second; ++i) {
      cout << " " << p.first;
    }
  }
  cout << endl;

  return 0;
}

