#include <bits/stdc++.h>
#include <stdint.h>

typedef uint64_t u64;

int main() {

  u64 n;
  std::cin >> n;

  u64 res = 1;
  for(u64 i = 1; i <= n; ++i) {
    res *= i;
  }

  std::cout << res << std::endl;
  
  return 0;
}