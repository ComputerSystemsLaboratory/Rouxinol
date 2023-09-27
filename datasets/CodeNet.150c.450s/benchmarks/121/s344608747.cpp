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

int di[] = {1, 0, -1, 0}, dj[] = {0, 1, 0, -1};

void solve() {
  int h, w;
  while (cin >> h >> w, h) {
    vs s(h);
    rep(i, h) cin >> s[i];
    int x = 0;
    rep(i, h) rep(j, w) {
      char done = '7';
      function<void(int, int, char)> dfs = [&](int i, int j, char c) {
        if (c == done || i < 0 || j < 0 || i >= h || j >= w || s[i][j] != c) return;
        s[i][j] = done;
        rep(k, 4) dfs(i + di[k], j + dj[k], c);
      };
      x += s[i][j] != done;
      dfs(i, j, s[i][j]);
    }
    cout << x << endl;
  }
}