#include <bits/stdc++.h>

//{{{ seg.hpp
#ifndef INCLUDE_SEG_HPP
#define INCLUDE_SEG_HPP
#include <functional>
#include <algorithm>
#include <iterator>
namespace orislib {
namespace ds {
constexpr int uprt(int k, int i=1){
  return i < k ? uprt(k, i + i) : i;
}
template<typename T, int S>
struct SegT {
  typedef T seg_t;
  const seg_t OUT;
  static const int N = uprt(S);
  seg_t data[N * 2];
  std::function<seg_t(seg_t,seg_t)>ufunc;
  template<typename F>
  SegT(T initial,F f):OUT(initial),ufunc(f){std::fill(std::begin(data),std::end(data),initial);}
  void update(int x, seg_t v){
    for (data[x+=N-1]=v;x;data[x]=ufunc(data[x+x+1],data[x+x+2]))x=x-1>>1;
  }
  void add(int x,seg_t a){ update(x,data[x+N-1]+a); }
  seg_t query(int a=0,int b=N,int x=0,int l=0,int r=N){
    if (r<=a||b<=l) return OUT;
    if (a<=l&&r<=b) return data[x];
    return ufunc(query(a,b,x+x+1,l,l+r>>1),query(a,b,x+x+2,l+r>>1,r));
  }
};
template<typename T, int S>
struct LazySegT {
  typedef T seg_t;
  const seg_t OUT;
  static const int N = uprt(S);
  seg_t data[N * 2];
  seg_t lazy[N * 2];
  std::function<seg_t(seg_t,seg_t)>ufunc;
  template<typename F>
  LazySegT(T initial, F f) : OUT(initial), ufunc(f) {
    std::fill(std::begin(data), std::end(data), initial);
    std::fill(std::begin(lazy), std::end(lazy), 0);
  }
  void evaluate(int x, int l, int r){
    data[x] += lazy[x] * (r - l);
    if (x < N - 1){
      lazy[x+x+1] += lazy[x];
      lazy[x+x+2] += lazy[x];
    }
    lazy[x] = 0;
  }
  void add(seg_t v, int a=0, int b=N, int x=0, int l=0, int r=N){
    evaluate(x, l, r);
    if (r <= a || b <= l) return;
    if (a <= l && r <= b){
      lazy[x] = lazy[x] + v;
      evaluate(x, l, r);
      return;
    }
    add(v, a, b, x + x + 1, l, l + r >> 1);
    add(v, a, b, x + x + 2, l + r >> 1, r);
    data[x] = ufunc(data[x + x + 1], data[x + x + 2]);
  }
  seg_t query(int a=0, int b=N, int x=0, int l=0, int r=N){
    evaluate(x, l, r);
    if (b <= l || r <= a) return OUT;
    if (a <= l && r <= b) return data[x];
    seg_t res = ufunc(query(a, b, x + x + 1, l, l + r >> 1), query(a, b, x + x + 2, l + r >> 1, r));
    data[x] = ufunc(data[x + x + 1], data[x + x + 2]);
    return res;
  }
};
}
}
#endif
//}}}

using namespace orislib::ds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;
//{{{ templates
#define TMPINL_(...) template<__VA_ARGS__>inline
#define TT_ TMPINL_(typename T)
#define TTF_ TMPINL_(typename T,typename F)
#define TTTS_ TMPINL_(typename T,typename...Ts)
#define TITS_ TMPINL_(size_t I=0,typename...Ts)
TT_ T sq(T x){return x*x;}
TT_ T In(){T x;cin>>x;return x;}
TT_ void Out(T&x){cout<<x;}
TT_ void sort(T&v){sort(begin(v),end(v));}
TT_ void revs(T&v){reverse(begin(v),end(v));}
TT_ void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT_ int ubnd(T&v,typename T::value_type&x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT_ int lbnd(T&v,typename T::value_type&x){return lower_bound(begin(v),end(v),x)-begin(v);}
TTF_ void inpt(T&v,int n,F f){for(v.reserve(n);n--;v.emplace_back(f()));}
TTF_ void show(T&v,F f,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),f(x);cout<<e;}
TITS_ typename enable_if<I==tuple_size<tuple<Ts...>>::value-1,string>::type join(string s,tuple<Ts...>t){return to_string(get<I>(t));}
TITS_ typename enable_if<I<tuple_size<tuple<Ts...>>::value-1,string>::type join(string s,tuple<Ts...>t){return to_string(get<I>(t))+s+join<I+1>(s,t);}
TT_ string join(string s,T t){return to_string(t);}
TTTS_ string join(string s,T t,Ts...ts){return join(s,t)+s+join(s,ts...);}

inline void fast_io(){ios::sync_with_stdio(0);cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline ll pow_mod(ll a,ll k,ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a,ll p){return pow_mod(a,p-2,p);}
inline int puts(const string&s){ return puts(s.c_str()); }
//}}} priority_queue queue deque front stringstream max_element min_element insert count make_tuple
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000 + 0;

int main()
{
  SegT<int, 100000> seg(0, [](int a, int b){ return a + b; });
  int n, q;
  n = in(), q = in();
  for (int i = 0; i < q; i++){
    int a, b, c;
    a = in(), b = in(), c = in();
    if (a) printf("%d\n", seg.query(b, c + 1));
    else seg.add(b, c);
  }
  return 0;
}