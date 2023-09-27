#include <bits/stdc++.h>
#include <stdint.h>

typedef uint32_t u32;
typedef uint64_t u64;

int main() {

  for(;;) {
    int n;
    std::cin >> n;
    if( n == 0 ) break;
    int x = 0, y = 0;
    for(int i = 0; i < n; ++i) {
      int a, b;
      std::cin >> a >> b;
      if( a > b ) x += a + b;
      if( a < b ) y += a + b;
      if( a == b ) {
        x += a; y += b;
      }
    }
    std::cout << x << " " << y << std::endl;
  }
  
  return 0;
}