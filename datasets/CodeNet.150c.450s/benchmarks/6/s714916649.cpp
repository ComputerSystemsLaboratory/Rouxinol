/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using P = pair<int32_t, int32_t>;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  int32_t a, b, c;
  cin >> a >> b >> c;
  if ((a < b) && (b < c)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}

