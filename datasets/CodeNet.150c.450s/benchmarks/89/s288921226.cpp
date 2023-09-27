#include <bits/stdc++.h>
#include <iterator>
using namespace std;

struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;

/* cpp template {{{ */

/* short */
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) begin(v), end(v)
#define RALL(v) (v).rbegin(), (v).rend()
#define X real()
#define Y imag()

/* REPmacro */
#define REPS(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) REPS(i, 0, n)
#define REP1(i,n) for (ll i = 1; i <= (ll)(n); ++i)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (ll i = (a); i >= (ll)(n); --i)
#define DEP(i, n) DEPS(i, n, 0)
#define EACH(i, n) for (auto&& i : n)

/* debug */
#define debug(x) cerr << x << " " << "(L:" << __LINE__ << ")" << '\n';

/* alias */
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using D = double;
using P = complex<D>;
using vs = vector<string>;
template <typename T> using PQ = priority_queue<T>;
template <typename T> using minPQ = priority_queue<T, vector<T>, greater<T>>;

/* const */
const int INF = 1001001001;
const ll LINF = 1001001001001001001ll;
const int MOD = 1e9 + 7;
const D EPS = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

/* func */
inline bool inside(int y, int x, int H, int W) {return y >= 0 && x >= 0 && y < H && x < W;}
inline int in() {int x; cin >> x; return x;}
inline ll IN() {ll x; cin >> x; return x;}
inline vs split(const string& t, char c) {vs v; stringstream s(t); string b; while(getline(s, b, c)) v.eb(b); return v;}
template <typename T> inline bool chmin(T& a, const T& b) {if (a > b) a = b; return a > b;}
template <typename T> inline bool chmax(T& a, const T& b) {if (a < b) a = b; return a < b;}
template <typename T, typename S> inline void print(const pair<T, S>& p) {cout << p.first << " " << p.second << endl;}
template <typename T> inline void print(const T& x) {cout << x << '\n';}
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v) {for (auto&& p : v) print(p);}
template <typename T> inline void print(const vector<T>& v, string s = " ") {rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");}

//素数判定
bool isPrime(int n)
{
  if(n<=1) return false;
  for(int i=2;i<=sqrt(double(n));++i)
  {
    if(!(n%i)) return false;
  }
  return true;
}

signed main() 
{
  int a,d,n;
  vi ans;
  while(cin>>a>>d>>n, a||d||n)
  {
    int cnt=0;
    while(1)
    {
      if(isPrime(a))
      {
        ++cnt;
        if(cnt==n) break;
      }
      a+=d;
    }
    ans.pb(a);
  }
  EACH(e,ans) print(e); 

  return 0;
}
