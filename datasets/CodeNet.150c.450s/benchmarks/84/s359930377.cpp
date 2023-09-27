#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <utility>
#include <queue>
#include <map>

#define fir first
#define sec second
#define sz(s) (s).size()
#define pb push_back
#define get(n) scanf("%d",&n);
#define gets(s) string s;cin >> (s);
#define prfi(n) printf("%d", &n);
#define prfd(n) printf("%lf", &n);
#define All(s) (s).begin(), (s).end()
#define rep(i,j) for(int (i)=0;(i)<(j);(i)++)
#define For(i,j,k) for(int (i)=(j);(i)<(k);(i)++)
#define repd(i,j) for(int (i)=(j);(i)>=0;(i)--)
#define Ford(i,j,k) for(int (i)=(j);i>=(k);i--)
#define vfor(c,v) for(auto (c): v)
#define mem(a,b) memset(a,b,sizeof(a));
#define dump(x)  std::cout << #x << " = " << (x) << std::endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
using ll = long long;
using ld = long double;
using pii = std::pair<int,int>;
using pll = std::pair<ll, ll>;
using vi = std::vector<int> ;
using vvi = std::vector<vi> ;
using vll = std::vector<ll>;
using vvll = std::vector<vll>;
using vd = std::vector<double> ;
using vvd = std::vector<vd> ;
using qi = std::queue<int> ;
using vpii = std::vector<std::pair<int, int> >;
using vpll = std::vector<pll>;
using namespace std;

const int Mod = (1e9) + 7;
const int INF = 1e9 + 19;
const ll INFL = 1e18 + 19;
const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};
//_____________________________________Templates_________________________________________//

template<class T1, class T2> inline void chmin(T1 &a, T2 b){if(a > b) a = b;}
template<class T1, class T2> inline void chmax(T1 &a, T2 b){if(a < b) a = b;}
template<class T> inline void swap(T &a,T &b){T c = a;a = b;b = c;}
template<class T> inline void pri(T a){cout << a << endl;}
//mainly use for dynamic prog
template<class T1, class T2>
void update(T1 &a, T2 b){
  a += b;
  if(a > Mod) a %= Mod;
}

inline void IN(void){
  return;
}

template <typename First, typename... Rest>
void IN(First& first, Rest&... rest){
  cin >> first;
  IN(rest...);
  return;
}

inline void OUT(void){
  cout << "\n";
  return;
}

template <typename First, typename... Rest>
void OUT(First first, Rest... rest){
  cout << first << " ";
  OUT(rest...);
  return;
}

bool pairsort(pll pl, pll pr){
  if(pl.first == pr.first)return pl.second > pr.second;
  return pl.first < pr.first;
}

int cntbit(ll a,int n,int j){int res = 0;For(i,j,n){if(a>>i & 1){res++;}}return res;}
ll makebit(ll a,int n,int j){ll res = 0;For(i,j,n){if(a &(1 << i))res |= 1ll << (i - j);}return res;} 
int GCD(int a, int b){if(b > a)return GCD(b,a);if(a%b == 0)return b;else return GCD(b, a%b);}
int LCM(int a, int b){return a*b/GCD(a,b);}
int compress(vi& x1, vi& x2,int w){
  int n = x1.size();
  vi vx;
  rep(i,n){
  	vx.pb(x1[i]);
    vx.pb(x2[i]);
  }
  vx.pb(0);vx.pb(w);
  sort(All(vx));
  vx.erase(unique(All(vx)), vx.end());
  rep(i,n){
    int idx1 = lower_bound(All(vx), x1[i]) - vx.begin();
    int idx2 = lower_bound(All(vx), x2[i]) - vx.begin();
    x1[i] = idx1;
    x2[i] = idx2;
  }
  /*OUT(-1);
  for(auto c : vx)OUT(c);
  OUT(-1);*/
  return vx.size()-1;
}

struct BIT{
  using T = int;
  vector<T> bit;
  T UNIT;
  int n;
  BIT(int n,T a) : n(n), UNIT(a){
    bit.resize(n+1,UNIT);
  }

  T sum (int i){
    T s = 0;
    while(i > 0){
      s += bit[i];
      i -= i & -i;
    }
    return s;
  }
  void add(int i, int x){
    while(i <= n){
      bit[i] += x;
      i += i & -i;
    }
  }

  T area(int r, int l){
    return sum(r) - sum(l-1);
  }
};
//_____________________　following sorce code_________________________//
const int max_n = 3 * (1e5) + 1;
const int max_m = 83 * (1e5) + 1;

int n,m,k;
vvi dp;
string S;
vll cost(1 << 16);
int a,b,c;
int h,w;
vll u;
vpii vp;
vi v;
bool check(){
  return true;
}
ll rec(){
  ll res = 0;
  return res;
}


int main () {
  cin.tie(0);
  ios::sync_with_stdio(false);
  IN(n);
  v = vi(n);
  rep(i,n)IN(v[i]);
  vi u = v;
  u.pb(-1);
  sort(All(u));
  u.erase(unique(All(u)), u.end());
  BIT bt(sz(u),0);
  ll ans = 0;
  rep(i,n){
    int idx = lower_bound(All(u), v[i]) - u.begin();
    //v[i] = idx;
    ans += idx - 1 - bt.sum(idx);
    bt.add(idx,1);
  }
  /*
  OUT("start");
  for(auto c : u){
    cout << c << endl;
  }
  */
  //OUT("end");
  /*OUT("start dump v");
  for(auto c : v){
    cout << c << endl;
  }
  OUT("end");
  */
  pri(ans);
  //for(auto c : ans){cout << c << endl;}
  //cout << fixed << setprecision(15) << ans << endl;
  return 0;
}

