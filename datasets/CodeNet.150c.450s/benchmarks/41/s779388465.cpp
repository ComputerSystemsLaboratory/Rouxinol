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
struct N006 {
   std::vector<std::vector<W>> xss;
   bool negativeCycle;
   N006(const N003<W>& g, W inf) : negativeCycle(false) {
      xss.resize(g.n+1);
      for(auto& xs : xss) xs.resize(g.n+1, inf);
      for(long i = 0; i < g.n+1; ++i) xss[i][i] = 0;
      for(long i = 0; i < g.e; ++i) {
         xss[g.ss[i]][g.ds[i]] = g.ws[i];
      }
      for(long z = 0; z < g.n+1; ++z) {
         for(long x = 0; x < g.n+1; ++x) {
            for(long y = 0; y < g.n+1; ++y) {
               W d = xss[x][y];
               W nd = xss[x][z] + xss[z][y];
               xss[x][y] = std::min(d, nd);
            }
         }
      }
      for(long x = 0; x < g.n+1; ++x) {
         for(long y = 0; y < g.n+1; ++y) {
            if( xss[x][y] >= inf / 2 ) {
               xss[x][y] = inf;
            }
         }
         if( xss[x][x] < 0 ) {
            negativeCycle = true;
         }
      }
   }
};

struct Solver {
   Solver() { fprintf(stderr, "--------Solver begin--------\n"); }
   ~Solver() { fprintf(stderr, "--------Solver end--------\n"); }
   void solve() {
      typedef std::vector<long> LI;
      long v, e;
      scan(v, e);
      LI ss(e+1), ds(e+1);
      LI ws(e+1);
      for(long i = 0; i < e; ++i) {
         scan(ss[i], ds[i], ws[i]);
      }
      N003<long> g(v, ss, ds, ws);
      N006<long> warshallfloyd(g, (1LL << 60));
      if( warshallfloyd.negativeCycle ) {
         puts("NEGATIVE CYCLE");
      }
      else {
         for(long i = 0; i < v; ++i) {
            for(long k = 0; k < v; ++k) {
               if( warshallfloyd.xss[i][k] == (1LL << 60) ) {
                  printf("INF");
               }
               else {
                  printf("%ld", warshallfloyd.xss[i][k]);
               }
               putchar( k == v - 1 ? '\n' : ' ');
            }
         }
      }
   }
};

int main() {
  loop std::unique_ptr<Solver>(new Solver())->solve();
}