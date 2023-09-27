#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <numeric>
#include <queue>
#include <string>
#include <utility>
#include <vector>

using namespace std;
#define ALL(a) (a).begin(), (a).end()
#define REP(i, n) for (size_t i = 0; i < (n); i++)
#define nvec(T, v, n) vector<T> v(n); REP(i, n) {cin>>(v)[i];}
#define npairs(T1, T2, v, n) vector<pair<T1, T2>> v(n); REP(i, n){cin>>v[i].first>>v[i].second;}
#define ntuples(T1, T2, T3, v, n) vector<tuple<T1, T2, T3>> v(n); REP(i, n){cin>>get<0>(v[i])>>get<1>(v[i])>>get<2>(v[i]);}
#define vec2d(T, v, m, n) vector<vector<T>> (v)(m, vector<T>(n))
#define nvec2d(T, v, m, n) vec2d(T, v, m, n); REP(j, m){REP(i, n) {cin>>(v[j])[i];}}

#define min_index(v) size_t( min_element(all(v)) - (v).begin() )
#define max_index(v) size_t( max_element(all(v)) - (v).begin() )
#define min_e(v) *min_element(ALL(v))
#define max_e(v) *max_element(ALL(v))

#define count_le(v, a) size_t( upper_bound(ALL(v), a) - (v).begin() )
#define count_lt(v, a) size_t( lower_bound(ALL(v), a) - (v).begin() )
#define count_ge(v, a) size_t( (v).end() - lower_bound(ALL(v), a) )
#define count_gt(v, a) size_t( (v).end() - upper_bound(ALL(v), a) )

#define order(neq_sl) [](const auto s, const auto l){return neq_sl;}
#define make_lr(v,type,l,r) vector<type> l(n+1),r(n+1);FOR(i,n){l[i+1]=l[i]+v[i];r[i+1]=r[i]+v[n-1-i];}

#define acm accumulate
#define SUM(v) accumulate(ALL(v), 0l)
#define SORT(v) sort(ALL(v))
#define P 1000000007
long powP (long a, long b) {
  if (b == 1) return a;
  else if (b == 0) return 1;
  else if (b < 0) return powP(a, P + b - 1);
  else return (powP(a, b/2) * powP(a, b/2 + b%2)) % P;
}

#define GCD(v) gcd(ALL(v), 0l)

/*template <typename T>
T gcd(T a, T b) {
    if (a > b) swap(a, b);
    if (a == 0) return b;
    return gcd(b%a, a);
}
template <typename InputItr, typename T>
T gcd(InputItr first, InputItr last, T init) {
    for (; first != last; ++first) init = gcd(init, *first);
    return init;
}*/

template <typename T>
using vec = vector<T>;

template <typename T>
using vvec = vector<vector<T>>;



int main() {
  int n, ac=0, wa=0, tle=0, re=0; cin>>n;
  for (int i = 0; i < n; i++) {
    string s; cin>>s;
    if(s=="AC") ac++;
    if(s=="WA") wa++;
    if(s=="TLE") tle++;
    if(s=="RE") re++;
  }
  printf("AC x %d\n", ac);
  printf("WA x %d\n", wa);
  printf("TLE x %d\n", tle);
  printf("RE x %d\n", re);
}


/* きょむ〜 */
