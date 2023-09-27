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
#define drep(i,j) for(int (i)=(j);(i)>=0;(i)--)
#define Ford(i,j,k) for(int (i)=(j);i>=(k);i--)
#define vfor(c,v) for(auto (c): (v))
#define lpi(n) for(int i=0;i<(n);i++)
#define lpj(n) for(int j=0;j<(n);j++)
#define lpz(n) for(int z=0;z<(n);z++)
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
const int dx2[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
const int dy2[] = {1, 0, -1, 1, 0, -1, 1, 0, -1};
//_____________________________________Templates_________________________________________//

template<class T1, class T2> inline void chmin(T1 &a, T2 b){if(a > b) a = b;}
template<class T1, class T2> inline void chmax(T1 &a, T2 b){if(a < b) a = b;}
template<class T> inline void swap(T &a,T &b){T c = a;a = b;b = c;}
template<class T> inline void pri(T a){cout << a << endl;}
template<class Z> using vec = vector<Z>;
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
vector<int> make_bit(int a){vector<int> res; lpi(32)if(a&(1<<i))res.pb(i);return res;}
bool stdbit(int a, int b){return a&(1 << b); }
int GCD(int a, int b){if(b > a)return GCD(b,a);if(a%b == 0)return b;else return GCD(b, a%b);}
int LCM(int a, int b){return a*b/GCD(a,b);}
int roundup(int a, int b){if(a % b == 0)return a/b;else return (a+b)/b;}
int rounddown(int a, int b){if(a%b == 0)return a/b;else {return (a-b)/b;}}


//_____________________　following sorce code_________________________//
const int max_n = 3 * (1e5) + 1;
const int max_m = 83 * (1e5) + 1;

int n,m,k;
int h,w;
vvi dp;
string S;
int a,b,c;
vi v;
// transform from S to T 
int LevenSteinDist(string S, string T)
{
  int n = S.size(), m = T.size();
  vvi dp(n+1, vi(m+1,INF));
  dp[0][0] = 0;
  lpi(n)dp[i+1][0] = i+1;
  lpj(m)dp[0][j+1] = j+1;
  lpi(n)lpj(m)
  {
    chmin(dp[i+1][j+1], dp[i][j+1] + 1);
    chmin(dp[i+1][j+1], dp[i+1][j] + 1);
   int r = 1;
   if(S[i] == T[j])r = 0;
   chmin(dp[i+1][j+1], dp[i][j] + r);
  }
  return dp[n][m];
}

int main () {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string t;
  IN(S,t);
  int ans = LevenSteinDist(S,t);

  cout << ans << endl;
  //for(auto c : ans){cout << c << endl;}
  //cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
