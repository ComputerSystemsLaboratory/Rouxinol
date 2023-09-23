#include <cmath>
#include <cstdlib>
#include <cstdio>

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
  long n;
  long ans;

  std::cin >> n;

  ans = 100000;
  for(int i = 0; i < n; ++i) {
    ans = ans * 105 / 100;
    ans += 999;
    ans /= 1000;
    ans *= 1000;
  }

  std::cout << ans << std::endl;

  return 0;
}