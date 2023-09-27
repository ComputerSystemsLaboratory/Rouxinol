#include <bits/stdc++.h>
#include <cstdint>
#include <sys/time.h>

typedef std::int_fast32_t  s32;
typedef std::uint_fast32_t u32;
typedef std::int_fast64_t  s64;
typedef std::uint_fast64_t u64;

typedef std::pair<int, int> P;

int main(void) {
  
  for(;;) {
    int N;
    std::cin >> N;
    if( N == 0 ) break;
    
    P p[256];
    p[0].first = p[0].second = 0;
    for(int i = 1; i < N; ++i) {
      int n, d;
      std::cin >> n >> d;

      int dx[4] = {-1, 0, 1, 0};
      int dy[4] = {0, -1, 0, 1};
      p[i].first  = p[n].first  + dx[d];
      p[i].second = p[n].second + dy[d];
    }

    int left, right, down, up;
    left = right = down = up = 0;
    for(int i = 0; i < N; ++i) {
      left  = std::min(left, p[i].first);
      right = std::max(right, p[i].first);

      down = std::min(down, p[i].second);
      up   = std::max(up, p[i].second);
    }

    std::cout << right - left + 1 << " " << up - down + 1 << std::endl;
  }
  
  return 0;
}