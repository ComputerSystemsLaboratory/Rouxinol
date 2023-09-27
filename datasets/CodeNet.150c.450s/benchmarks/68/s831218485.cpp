#include <bits/stdc++.h>
#define loop for(;;)
typedef std::vector<long> LI;
template<typename T> void scan1(T& x) { fprintf(stderr, "unknown type\n"); }
template<> void scan1(long& x) { if( scanf("%ld", &x) < 0 ) exit(0); }
template<> void scan1(std::string& x) { if( not ( std::cin >> x ) ) exit(0); }
void scan() {}
template<typename Head, typename... Tail>
void scan(Head& x, Tail&... xs) {
  scan1(x); scan(xs...);
}

struct Solver {
   void solve() {
      long n; scan(n);
      if( n == 0 ) exit(0);
      LI xs(n); for(long& x : xs) scan(x);
      std::sort(xs.begin(), xs.end());
      long res = (1LL << 53);
      for(long i = 1; i < n; ++i) {
         res = std::min(res, xs[i] - xs[i-1]);
      }
      printf("%ld\n", res);
   }
};

int main() {
   loop std::shared_ptr<Solver>()->solve();
}