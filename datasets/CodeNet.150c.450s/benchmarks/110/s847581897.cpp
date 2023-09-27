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
void solve();
main { solve(); return 0; }
// clang-format on

typedef pair<pii, int> ppi;

int di[] = {1, 0, -1, 0}, dj[] = {0, 1, 0, -1};

void solve() {
  int h, w, n;
  cin >> h >> w >> n;
  vs s(h);
  vpii v(n + 1);
  rep(i, h) {
    cin >> s[i];
    rep(j, w) {
      if (s[i][j] == 'S') v[0]                               = mp(i, j);
      if ('1' <= s[i][j] && s[i][j] <= '9') v[s[i][j] - '0'] = mp(i, j);
    }
  }
  int c    = 0;
  auto bfs = [&](vs s, pii f, pii t) {
    queue<ppi> q;
    q.push(mp(f, 0));
    while (q.size()) {
      int i = q.front().fi.fi, j = q.front().fi.se, d = q.front().se;
      q.pop();
      if (i < 0 || j < 0 || i >= h || j >= w || s[i][j] == 'X') continue;
      if (i == t.fi && j == t.se) return d;
      s[i][j] = 'X';
      d++;
      rep(k, 4) q.push(mp(mp(i + di[k], j + dj[k]), d));
    }
  };
  loop(i, 1, v.size()) c += bfs(s, v[i - 1], v[i]);
  cout << c << endl;
}