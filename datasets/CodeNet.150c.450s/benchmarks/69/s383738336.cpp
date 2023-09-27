// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
// #define main int main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
#define stlice(from, to) substr(from, (to) - (from) + 1)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
bool odd(const int &n) { return n & 1; }
bool even(const int &n) { return !odd(n); }
template<typename V> typename V::value_type sum(const V &v) { return accumulate(all(v), 0); }
void solve();

// clang-format on

bool dfs(vi v, int l, int r) {
  if (v.size() == 0) {
    return true;
  }
  bool hoge = false;
  if (v.back() > l) {
    vi _v  = v;
    int _l = v.back();
    _v.pop_back();
    hoge |= dfs(_v, _l, r);
  }
  if (v.back() > r) {
    vi _v  = v;
    int _r = v.back();
    _v.pop_back();
    hoge |= dfs(_v, l, _r);
  }
  return hoge;
}

main {
  int n;
  cin >> n;
  rep(_, n) {
    vi v(10);
    rep(i, 10) cin >> v[9 - i];
    cout << (dfs(v, 0, 0) ? "YES" : "NO") << endl;
  }
  return 0;
}