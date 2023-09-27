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

struct N001 {
  std::vector<long> parents;
  std::vector<long> numbers;
  long n, q;
};
void init(N001& s, long n) {
  s.parents.resize(n+1, -1);
  s.numbers.resize(n+1, -1);
}
long find(N001& s, long x) {
  if( s.parents[x] == -1 ) return x;
  return s.parents[x] = find(s, s.parents[x]);
}
bool same(N001& s, long x, long y) {
  return find(s, x) == find(s, y);
}
void unite(N001& s, long x, long y) {
  long x2 = find(s, x);
  long y2 = find(s, y);
  if( x2 == y2 ) return;
  if( not ( s.numbers[x2] <= s.numbers[y2] ) )
    std::swap(x2, y2);
  s.parents[x2] = y2;
  s.numbers[y2] += s.numbers[x2];
}

struct Solver {
  Solver() { fprintf(stderr, "--------Solver begin--------\n"); }
  ~Solver() { fprintf(stderr, "--------Solver end--------\n"); }
  N001 u;
  void solve() {
    long n, q;
    if( scanf("%ld %ld", &n, &q) < 0 ) exit(0);
    init(u, n);
    for(long i = 0; i < q; ++i) {
      long c, x, y;
      scanf("%ld %ld %ld", &c, &x, &y);
      if( c == 0 ) 
        unite(u, x, y);
      else
        puts(same(u, x, y) ? "1" : "0");
    }
  }
};

int main() {
  loop std::unique_ptr<Solver>(new Solver())->solve();
}  