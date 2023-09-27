#include <bits/stdc++.h>

//{{{ uf.hpp
#ifndef INCLUDE_UF_HPP
#define INCLUDE_UF_HPP
#include <vector>
#include <algorithm>
namespace orislib {
namespace ds {
struct UF {
  std::vector<int> data;
  int cnt;
  UF(int n) : data(n, -1), cnt(n) {}
  bool merge(int a, int b){
    a = root(a);
    b = root(b);
    if (a != b){
      cnt--;
      if (data[b] < data[a]) std::swap(a, b);
      data[a] += data[b];
      data[b] = a;
    }
    return a != b;
  }
  bool same(int a, int b){ return root(a) == root(b); }
  int root(int a){ return data[a] >= 0 ? data[a] = root(data[a]) : a; }
  int size(int a){ return -data[root(a)]; }
  int count(){ return cnt; }
};
struct UF2d {
  UF uf;
  const int W, H;
  UF2d(int w, int h) : uf(w * h), W(w), H(h) {}
  bool merge(int ax, int ay, int bx, int by){ return uf.merge(ay * W + ax, by * W + bx); }
  bool same(int ax, int ay, int bx, int by){ return uf.same(ay * W + ax, by * W + bx); }
  int size(int x, int y){ return uf.size(y * W + x); }
  int count(){ return uf.count(); }
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
  UF uf(100001);
  int n, q;
  n = in(), q = in();
  for (int i = 0; i < q; i++){
    int c, x, y;
    c = in(), x = in(), y = in();
    if (c) printf("%d\n", uf.same(x, y));
    else uf.merge(x, y);
  }
  return 0;
}