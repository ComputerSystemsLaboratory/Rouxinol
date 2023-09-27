#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000 + 0;
//{{{ templates
#define TT_ template<typename T>inline
#define TTF_ template<typename T,typename F>inline
TT_ T sq(T x){return x*x;}
TT_ T In(){T x;cin>>x;return x;}
TT_ void Out(T&x){cout<<x;}
TT_ void sort(T&v){sort(begin(v),end(v));}
TT_ void revs(T&v){reverse(begin(v),end(v));}
TT_ void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT_ int ubnd(T&v,typename T::value_type x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT_ int lbnd(T&v,typename T::value_type x){return lower_bound(begin(v),end(v),x)-begin(v);}
TTF_ void inpt(T&v,int n,F f){for(v.reserve(n);n--;v.emplace_back(f()));}
TTF_ void show(T&v,F f,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),f(x);cout<<e;}
TT_ typename T::iterator minel(T&v){return min_element(begin(v),end(v));}
TT_ typename T::iterator maxel(T&v){return max_element(begin(v),end(v));}
 
inline void fast_io(){ios_base::sync_with_stdio(0);cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline ll pow_mod(ll a,ll k,ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a,ll p){return pow_mod(a,p-2,p);}
//}}} priority_queue queue deque front stringstream max_element min_element insert count make_tuple
 
short B[3000300];
int H[2048], W[2048];
int main()
{
  int N, M;
  short K = 0;
  while (N = in(), M = in()){
    K++;
    for (int i = 1; i <= N; i++){
      H[i] = H[i - 1] + in();
      B[H[i]] = K;
    }
    for (int i = 1; i <= M; i++){
      W[i] = W[i - 1] + in();
    }
    int ans = 0;
    for (int y = 0; y < N; y++){
      for (int x = 0; x < M; x++){
        for (int z = x + 1; z <= M; z++){
          int d = W[z] - W[x];
          if (H[N] - H[y] < d) break;
          ans += B[H[y] + d] == K;
        }
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}