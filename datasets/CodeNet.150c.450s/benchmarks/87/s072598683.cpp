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
#define showv2r(v) rep(j,v.size()) showv(v[v.size()-1-j])
#define showt(t,n) rep(i,n) printf("%d%c", t[i], i==n-1?'\n':' ')
#define showt2(t,r,c) rep(j,r) showt(t[j],c)
#define showvp(p) rep(i,p.size()) printf("%d %d\n", p[i].first, p[i].second);
#define printv(v) rep(i,v.size()) printf("%d\n", v[i])
#define printt(t,n) rep(i,n) printf("%d\n", t[i])
#define incl(v,x) find(rng(v),x)!=v.end()
#define incls(s,c) s.find(c)!=string::npos
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
#define uni(x) x.erase(unique(rng(x)),x.end())
#define SP << " " <<
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
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
inline int in() { int x; scanf("%d",&x); return x;}
inline ll lin() { ll x; scanf("%lld",&x); return x;}
inline char chin() { char x; scanf("%c",&x); return x;}
inline string stin() { string x; cin >> x; return x;}
inline double din() { double x; scanf("%lf",&x); return x;}
//template<class T = int> inline T in() { T x; cin >> x; return (x);}
template<typename T>inline ll suma(const v(T)& a) { ll res(0); for (auto&& x : a) res += x; return res;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
char itoa(int n) { return n + '0';}
ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

// s = "112223" -> [[1,2],[2,3],[3,1]]
vector<pair<int,int>> rle (vector<int> x) {
  vector<pair<int,int>> res;
  int n = (int)x.size();
  for (int i = 0; i < n;) {
    int j = i;
    int cnt = 0;
    while (j < n && x[j] == x[i]) {
      ++j;
      ++cnt;
    }
    res.emplace_back(x[i], cnt);
    i = j;
  }
  return res;
}

int main () {
  while(true) {
    int h = in();
    if (h==0) break;
    vvi s(h,vi(5));
    rep(i,h)rep(j,5) s[h-1-i][j] = in();
    int score = 0;
    bool find = true;
    while(find) {
      vvi erase(h,vi(5));
      find = false;
      rep(i,h) {
        auto d = rle(s[i]);
        int pos = 0;
        for (auto p : d) {
          if (s[i][pos]!=0 && p.se >= 3) {
            srep(j,pos,pos+p.se) {
              erase[i][j] = true;
              score += s[i][pos];
              find = true;
            }
            break;
          }
          else {
            pos += p.se;
          }
        }
      }
      
      vvi csum(h+1,vi(5));
      rep(j,5) {
        int cnt = 0;
        rep(i,h) {
          if (erase[i][j]) cnt++;
          csum[i][j] = cnt;
        }
      }

      rep(j,5) {
        rep(i,h) {
          if (erase[i][j]) s[i][j] = 0;
          else {
            int fall = csum[i][j];
            if (fall == 0) continue;
            s[i-fall][j] = s[i][j];
            s[i][j] = 0;
          }
        }
      }
    }
    printf("%d\n", score);
  }
  return 0;
}
