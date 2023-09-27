#include <bits/stdc++.h>
#define rep(i,n) for (int i = (0); i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define limit(x,l,r) max(l,min(x,r))
#define lims(x,l,r) (x = max(l,min(x,r)))
#define isin(x,l,r) ((l) <= (x) && (x) < (r))
#define show(x) cout << #x << " = " << (x) << endl
#define show2(x,y) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#define show3(x,y,z) cout << #x << " = " << (x) << ", " << #y << " = " << (y) <<  ", " << #z << " = " << (z) << endl
#define showv(v) rep(i,v.size()) printf("%d%c", v[i], i==v.size()-1?'\n':' ')
#define showv2(v) rep(j,v.size()) showv(v[j])
#define showt(t,n) rep(i,n) printf("%d%c", t[i], i==n-1?'\n':' ')
#define showt2(t,r,c) rep(j,r) showt(t[j],c)
#define showvp(p) rep(i,p.size()) printf("%d %d\n", p[i].first, p[i].second)
#define printv(v) rep(i,v.size()) printf("%d\n", v[i])
#define printt(t,n) rep(i,n) printf("%d\n", t[i])
#define incl(v,x) (find(all(v),x)!=v.end())
#define incls(s,c) (s.find(c)!=string::npos)
#define lb(a,x) distance((a).begin(),lower_bound(all(a),(x)))
#define ub(a,x) distance((a).begin(),upper_bound(all(a),(x)))
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define bit(n,k) ((n>>k)&1) // nのk bit目
#define bn(x) ((1<<x)-1)
#define dup(x,y) (((x)+(y)-1)/(y))
#define newline puts("")
#define uni(x) x.erase(unique(all(x)),x.end())
#define SP << " " <<
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vb = vector<bool>;
using vvb = vector<vb>;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vp = vector<P>;
using vt = vector<T>;
const int mod = 1000000007;
const double EPS = 1e-9;
//const long double EPS = 1e-14;
const int INF = (1<<30)-1;
const ll LINF = (1LL<<62)-1;
#define dame { puts("No"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
inline int in() { int x; cin >> x; return x;}
inline ll lin() { ll x; cin >> x; return x;}
inline char chin() { char x; cin >> x; return x;}
inline string stin() { string x; cin >> x; return x;}
inline double din() { double x; cin >> x; return x;}
//template<class T = int> inline T in() { T x; cin >> x; return (x);}
template<typename T>inline ll suma(const vector<T>& a) { ll res(0); for (auto&& x : a) res += x; return res;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
char itoa(int n) { return n + '0';}
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
const int dx[4] = {1, 0,-1, 0};
const int dy[4] = {0, 1, 0,-1};

int toSecond(string str) {
  // 01234567
  // hh:mm:ss
  string sh = str.substr(0,2);
  string sm = str.substr(3,2);
  string ss = str.substr(6,2);
  int h = stoi(sh);
  int m = stoi(sm);
  int s = stoi(ss);
  int res = h*3600 + m*60 + s;
  return res;
}

int main () {
  while (true) {
    int n = in();
    if (n == 0) break;

    vi imos(86401);
    rep(i,n) {
      string s, t;
      cin >> s >> t;
      int ss = toSecond(s);
      int tt = toSecond(t)-1;
      //show2(ss,tt);
      imos[ss]++;
      imos[tt+1]--;
    }
    rep(i,86400) imos[i+1] += imos[i];

    int ans = 0;
    rep(i,86400) chmax(ans, imos[i]);
    cout << ans << endl;
  }
  return 0;
}
