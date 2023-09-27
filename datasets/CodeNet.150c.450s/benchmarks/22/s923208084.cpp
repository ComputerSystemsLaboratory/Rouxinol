#include <bits/stdc++.h>

#ifndef LOCAL_
#define fprintf if( false ) fprintf
#endif // LOCAL_
// #define dump() fprintf(stderr, "#%s.%d\n", __func__, __LINE__);
#define dumpl(x1) fprintf(stderr, "#%s.%d (%s) = (%ld)\n", __func__, __LINE__, #x1, x1);
#define dumpll(x1, x2) fprintf(stderr, "#%s.%d (%s, %s) = (%ld, %ld)\n", __func__, __LINE__, #x1, #x2, x1, x2);
#define dumplll(x1, x2, x3) fprintf(stderr, "#%s.%d (%s, %s, %s) = (%ld, %ld, %ld)\n", __func__, __LINE__, #x1, #x2, #x3, x1, x2, x3);
#define dumpd(x1) fprintf(stderr, "#%s.%d (%s) = (%lf)\n", __func__, __LINE__, #x1, x1);
#define dumpdd(x1, x2) fprintf(stderr, "#%s.%d (%s, %s) = (%lf, %lf)\n", __func__, __LINE__, #x1, #x2, x1, x2);
#define loop for(;;)

template<typename T> void scan1(T& x) { fprintf(stderr, "unknown type\n"); }
template<> void scan1(long& x) { if( scanf("%ld", &x) < 0 ) exit(0); }
void scan() {}
template<typename Head, typename... Tail>
void scan(Head& x, Tail&... xs) {
  scan1(x); scan(xs...);
}

template<typename W>
struct N003 {
   typedef std::vector<long> LI;
   typedef std::vector<W>    LW;
   long n, e;
   LI ss, ds;
   LW ws;
   std::vector<LI> iss;
   N003(long n_, const LI& ss_, const LI& ds_, const LW& ws_)
      : n(n_), e(ss_.size()), ss(ss_), ds(ds_), ws(ws_) {
      iss.resize(n+1);
      for(long i = 0; i < e; ++i) {
         iss[ss[i]].push_back(i);
      }
   }
};

template<typename W>
struct N005 {
   std::vector<W> xs;
   bool negativeCycle;
   N005(const N003<W>& g, long s, W inf) : xs(g.n+1, inf) {
      long latest;
      xs[s] = 0;
      for(long i = 0; i < g.n+1; ++i) {
         for(long k = 0; k < g.e; ++k) {
            if( xs[g.ss[k]] == inf ) continue;
            W nd = xs[g.ss[k]] + g.ws[k];
            if( nd < xs[g.ds[k]] ) {
               xs[g.ds[k]] = nd;
               latest = i;
            }
         }
      }
      for(long i = 0; i < g.n+1; ++i) {
         if( xs[i] >= inf / 2 ) xs[i] = inf;
      }
      negativeCycle = latest == g.n+1-1;
   }
};

struct Solver {
   Solver() { fprintf(stderr, "--------Solver begin--------\n"); }
   ~Solver() { fprintf(stderr, "--------Solver end--------\n"); }
   void solve() {
      typedef std::vector<long> LI;
      long v, e, r;
      scan(v, e, r);
      LI ss(e+1), ds(e+1);
      LI ws(e+1);
      for(long i = 0; i < e; ++i) {
         scan(ss[i], ds[i], ws[i]);
      }
      N003<long> g(v, ss, ds, ws);
      N005<long> bellmanford(g, r, (1LL << 60));
      if( bellmanford.negativeCycle ) {
         puts("NEGATIVE CYCLE");
      }
      else {
         for(long i = 0; i < v; ++i) {
            long res = bellmanford.xs[i];
            if( res == (1LL << 60) ) {
               puts("INF");
            }
            else {
               printf("%ld\n", res);
            }
         }
      }
   }
};

int main() {
  loop std::unique_ptr<Solver>(new Solver())->solve();
}