#include <bits/stdc++.h>
#include <iterator>
using namespace std;
struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ALL(v) begin(v), end(v)
#define rreps(i, a, n) for (ll i = (a); i <= (ll)(n); ++i)
#define rrep(i, n) rreps(i, 0, n)
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define each(i, n) for (auto&& i : n)
#define fill(x, y) memset(x,y,sizeof(x))
#define debug(x) cerr << x << " " << "(L:" << __LINE__ << ")" << '\n';
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using D = double;
using P = complex<D>;
using vs = vector<string>;
template <typename T> using PQ = priority_queue<T>;
template <typename T> using minPQ = priority_queue<T, vector<T>, greater<T>>;
const int INF = 1001001001;
const ll LINF = 1001001001001001001ll;
const int MOD = 1e9 + 7;
const D EPS = 1e-9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
template <typename T> inline void print(const T& x) {cout << x << '\n';}

signed main()
{ 
  int n; cin>>n;
  vi ans;
  rep(i,n)
  {
    int y,m,d; cin>>y>>m>>d;
    int sum=0;
    sum+=(y-1)%3*195;  
    sum+=(y-1)/3*590;
    sum+=(m-1)%2*20;
    if(y%3==0) sum+=(m-1)/2*40;
    else sum+=(m-1)/2*39;
    sum+=d;
    sum=999/3*590+1-sum;
    ans.pb(sum);
  }
  each(v,ans) print(v);

  return 0;
}

