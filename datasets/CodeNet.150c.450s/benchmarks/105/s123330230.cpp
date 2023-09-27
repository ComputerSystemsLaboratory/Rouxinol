#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
#include<cstdlib>
template<typename T>
void fin(T const& t){ std::cout << t << std::endl; exit(0); }

int msb32(uint32_t x) { return 31 - __builtin_clz(x); }
int msb(uint64_t x) {
  if(x < (1ULL<<32)) return msb32((uint32_t)x);
  return 32 +msb((uint32_t)(x>>32));
}

struct bit_base {
  uint64_t bases[64];
  bit_base() { std::fill_n(bases, 64, (uint64_t)0); }
  uint64_t add(uint64_t n) {
    int x = msb(n);
    while(bases[x] > 0) {
      n ^= bases[x];
      if(n == 0) return 0;
      x = msb(n);
    }
    return bases[x] = n;
  }
};

int main() {
  std::cin.tie(0); std::ios::sync_with_stdio(false);
  int T; std::cin >> T;
  for(int t = 0; t < T; ++t) {
    int N; std::cin >> N;
    std::vector<uint64_t> A(N);
    for(auto& Ai: A) std::cin >> Ai;
    std::string S; std::cin >> S;
    bit_base b;
    for(int n = N-1; n >= 0; --n) {
      if(S[n] == '0') {
        b.add(A[n]);
      } else {
        if(b.add(A[n]) > 0) { std::cout << "1\n"; break; }
      }
      if(n == 0) { std::cout << "0\n"; break; }
    }
  }
  return 0;
}

