#include <bits/stdc++.h>
typedef std::vector<long> LI;

struct BIT {
   LI xs;
   long n;
   BIT(long n) : xs(n+1), n(n) {}
   long sum(long i) {
      if( i <= 0 ) return 0;
      return xs[i] + sum(i-(i&-i));
   }
   void add(long i, long x) {
      if( i > n ) return;
      xs[i] += x;
      add(i+(i&-i), x);
   }
};

struct Solver {
   void solve() {
      long n, q; std::cin >> n >> q;
      BIT bit(n);
      for(long i = 0; i < q; ++i) {
         long com, x, y;
         std::cin >> com >> x >> y;
         if( com == 0 ) {
            bit.add(x, y);
         }
         else {
            long res = bit.sum(y) - bit.sum(x-1);
            printf("%ld\n", res);
         }
      }
   }
};

int main() { std::shared_ptr<Solver>(new Solver())->solve(); }