#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<cstdint>
#include<cstdlib>
template<typename T>
void fin(T const& t){ std::cout << t << std::endl; exit(0); }

int main() {
  std::cin.tie(0); std::ios::sync_with_stdio(false);
  int D; std::cin >> D;
  int c[26];
  for(int& ci: c) std::cin >> ci;
  std::vector<std::array<int,26>> s(D);
  for(int d = 0; d < D; ++d) {
    for(int& si: s[d]) std::cin >> si;
  }
  std::vector<int> t(D);
  for(int& ti: t) std::cin >> ti;
  
  int ans = 0;
#if 0
  // plus
  for(int d = 0; d < D; ++d) ans += s[d][t[d]-1];
  // minus
  for(int cx = 0; cx < 26; ++cx) {
    int last = -1;
    for(int d = 0; d < D; ++d) {
      if(t[d]-1 == cx) last = d;
      ans -= (d-last)*c[cx]; 
    }
  }
  fin(ans);
#else
  int last[26];
  std::fill_n(last, 26, -1);
  for(int d = 0; d < D; ++d) {
    ans += s[d][t[d]-1];
    last[t[d]-1] = d;
    for(int cx = 0; cx < 26; ++cx) {
      ans -= (d-last[cx])*c[cx];
    }
    std::cout << ans << "\n";
  }
#endif
  return 0;
}
