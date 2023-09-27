#include <bits/stdc++.h>
using Int = int64_t;
using UInt = uint64_t;
using C = std::complex<double>;
#define rep(i, n) for(Int i = 0; i < (Int)(n); ++i)
#define guard(x) if( not (x) ) continue;
#ifndef LOCAL_
#define fprintf if( false ) fprintf
#endif

struct DisjointSet {
   DisjointSet(Int n)
      : ps(n, -1), ns(n, 1) {}
   std::vector<Int> ps, ns;
   Int find(Int x) {
      if( ps[x] == -1 ) return x;
      return ps[x] = find(ps[x]);
   }
   void unite(Int x, Int y) {
      x = find(x), y = find(y);
      if( x == y ) return;
      if( ns[x] > ns[y] ) std::swap(x, y);
      ps[x] = y;
      ns[y] += ns[x];
   }
   bool same(Int x, Int y) {
      return find(x) == find(y);
   }
};

int main() {
   Int n, q;
   std::cin >> n >> q;
   std::vector<Int> ps(n, -1), ns(n);
   DisjointSet dset(n);
   rep(i,q) {
      Int c, x, y;
      std::cin >> c >> x >> y;
      if( c == 0 ) {
         dset.unite(x, y);
      }
      else {
         puts(dset.same(x, y)?"1":"0");
      }
   }
}

