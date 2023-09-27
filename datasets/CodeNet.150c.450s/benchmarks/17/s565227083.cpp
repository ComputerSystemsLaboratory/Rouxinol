#include <bits/stdc++.h>
#include <stdint.h>

typedef uint32_t u32;
typedef uint64_t u64;

int main() {

  int a[5];
  for(u32 i = 0; i < 5; ++i) {
    std::cin >> a[i];
  }

  std::sort(a, a + 5);
  std::reverse(a, a + 5);

  std::cout << a[0];
  for(int i = 1; i < 5; ++i) {
    std::cout << " " << a[i];
  }
  std::cout << std::endl;
  
  return 0;
}