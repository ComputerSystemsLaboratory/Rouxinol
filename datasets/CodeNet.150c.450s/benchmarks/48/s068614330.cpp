#include <bits/stdc++.h>
#include <cstdint>
#include <sys/time.h>

typedef std::int_fast32_t  s32;
typedef std::uint_fast32_t u32;
typedef std::int_fast64_t  s64;
typedef std::uint_fast64_t u64;

const unsigned long mod = 1000000007;
const double EPS = 0.00000001;
const int INF = (1 << 29);

typedef std::pair<int, int> pii;

template<typename T>
void print_array(T *A_, s32 size) {
  //printf("%d\n", size);
  if( size != 0 ) {
    for(int i = 0; i < size - 1; ++i) {
      printf("%d ", A_[i]);
    }
    printf("%d\n", A_[size - 1]);
  }
}


auto main() -> int {

  for(;;) {
    int e;
    std::cin >> e;
    if( e == 0 ) break;

    int res = INF;
    for(int z = 0; z <= 100; ++z) {
      for(int y = 0; y <= 1000; ++y) {
        int x = e - z * z * z - y * y;
        if( x < 0 ) continue;
        if( x + y + z < res ) {
          res = x + y + z;
        }
      }
    }
    
    std::cout << res << std::endl;
  }
  
  return 0;
}