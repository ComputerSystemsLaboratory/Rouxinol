#include <bits/stdc++.h>
using Int = int64_t;
using UInt = uint64_t;
using C = std::complex<double>;
#define rep(i, n) for(Int i = 0; i < (Int)(n); ++i)
#define guard(x) if( not (x) ) continue;

struct DisjointSet {
   DisjointSet(Int n)
      : ps(n, -1), ns(n, 1) {}
   std::vector<Int> ps, ns;
   Int find(Int x) {
      while( ps[x] != -1 ) x = ps[x];
      return x;
   }
   void unite(Int x, Int y) {
      x = find(x), y = find(y);
      if( x != y ) {
         if( not ( ns[x] <= ns[y] ) ) std::swap(x, y);
         ps[x] = y;
         ns[y] += ns[x];
      }
   }
};

int main() {
   Int v, e;
   std::cin >> v >> e;
   std::vector<Int> ss(e), ts(e), ws(e);
   rep(i, e) std::cin >> ss[i] >> ts[i] >> ws[i];
   std::vector<std::pair<Int, Int>> xs;
   rep(i, e) xs.emplace_back(ws[i], i);
   std::sort(xs.begin(), xs.end());
   DisjointSet z(v);
   Int res = 0;
   rep(i, e) {
      Int k = xs[i].second;
      Int s = ss[k], t = ts[k];
      guard( z.find(s) != z.find(t) );
      z.unite(s, t);
      res += ws[k];
   }
   printf("%ld\n", res);
}