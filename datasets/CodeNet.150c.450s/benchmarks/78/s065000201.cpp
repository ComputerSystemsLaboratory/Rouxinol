#include <bits/stdc++.h> // {{{
// clang-format off
#define ARG4(_1, _2, _3, _4, ...) _4
#define rep(...) ARG4(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define REP(i, a) FOR(i, 0, a)
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define rrep(...) ARG4(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
#define RREP(i, a) RFOR(i, 0, a)
#define RFOR(i, a, b) for (int i = (b)-1; i >= (int)(a); --i)
#define ALL(c) (c).begin(), (c).end()
#define pb emplace_back
#define em emplace
#define fi first
#define se second
#define USE1(...) template <typename __VA_ARGS__> inline
#define USE2(T, ...) USE1(T, typename __VA_ARGS__)
#define mygc(c) (c) = getchar_unlocked()
#define mypc(c) putchar_unlocked(c)
 
using ll = long long;
template<typename T> using vec = std::vector<T>;
USE2(T,U)bool chmax(T&x,U a){return x<a&&(x=a,1);}
USE2(T,U)bool chmin(T&x,U a){return a<x&&(x=a,1);}
USE1(T=int)T in(){T x;std::cin>>x;return x;}
USE2(T=int,V=vec<T>)V reserved(int n){V v;v.reserve(n);return v;}
USE1(T=int)vec<T>in(int n){auto v=reserved<T>(n);rep(i,n)v.pb(in<T>());return v;}
USE2(T,U=std::pair<T,int>)vec<U>enume(const vec<T>&x,int s=0){int N=x.size();auto v=reserved<U>(N);rep(i,N)v.pb(x[i],s+i);return v;}
USE1(T)vec<T>ndvec(T v,int n){return vec<T>(n,v);}
USE2(T,...Ts)auto ndvec(T v,int n,Ts...ns)->vec<decltype(ndvec(v,ns...))>{return ndvec(ndvec(v,ns...),n);}
USE1(T)void pr(T x){std::cout<<x<<'\n';}
USE2(T,...Ts)void pr(T x,Ts...xs){std::cout<<x<<' ';pr(xs...);}
USE1(T=int)T rd(){T x=0,m=0,k;for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||'9'<k)break;x=x*10+k-'0';}return x;}
USE1(T=int)void wr(T x,char c='\n'){int s=0,m=0;char b[32];if(x<0)m=1,x=-x;for(;x;x/=10)b[s++]=x%10;if(!s)b[s++]=0;if(m)mypc('-');for(;s--;)mypc(b[s]+'0');mypc(c);}
// clang-format on
// }}}
struct IoSetup { // {{{
  IoSetup() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.precision(10);
    std::cerr.precision(10);
  }
} iosetup; //}}}
using namespace std;
const int inf = 1001001001;
const ll infl = 1001001001001001001ll;
const int dd[] = {0, 1, 0, -1, 0};

signed main() {
  const int M = 1000000;
  vec<int> tet;
  rep(i, 1, 1000) {
    int x = i * (i + 1) * (i + 2) / 6;
    if (x >= M) break;
    tet.pb(x);
  }
  vec<int> dp(2 * M, inf), dpo(2 * M, inf);
  dp[0] = dpo[0] = 0;
  REP(i, M) {
    for (int x : tet) {
      chmin(dp[i + x], dp[i] + 1);
      if (x % 2) chmin(dpo[i + x], dpo[i] + 1);
    }
  }
  int N;
  while (N = in(), N) {
    pr(dp[N], dpo[N]);
  }

  return 0;
}