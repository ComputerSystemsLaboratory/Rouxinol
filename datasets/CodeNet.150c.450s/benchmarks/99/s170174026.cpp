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
main { solve(); return 0; }
// clang-format on

int f(string s) {
  int c = 0, p = 0;
  rep(i, s.size()) {
    if (s[i] == 'm') (c += p ? 1000 * p : 1000), p = 0;
    if (s[i] == 'c') (c += p ? 100 * p : 100), p   = 0;
    if (s[i] == 'x') (c += p ? 10 * p : 10), p     = 0;
    if (s[i] == 'i') (c += p ? p : 1), p           = 0;
    if ('2' <= s[i] && s[i] <= '9') p = s[i] - '0';
  }
  return c;
}

string g(int x) {
  stringstream ss;
  if (x >= 2000) (ss << x / 1000 << 'm'), x %= 1000;
  if (x >= 1000) (ss << 'm'), x %= 1000;
  if (x >= 200) (ss << x / 100 << 'c'), x %= 100;
  if (x >= 100) (ss << 'c'), x %= 100;
  if (x >= 20) (ss << x / 10 << 'x'), x %= 10;
  if (x >= 10) (ss << 'x'), x %= 10;
  if (x >= 2) (ss << x << 'i'), x = 0;
  if (x == 1) ss << 'i';
  return ss.str();
}

void solve() {
  int n;
  cin >> n;
  rep(i, n) {
    string s, t;
    cin >> s >> t;
    cout << g(f(s) + f(t)) << endl;
  }
}