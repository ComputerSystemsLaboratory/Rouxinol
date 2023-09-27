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

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void solve() {
  int N;
  while (cin >> N, N) {
    vpii e(N);
    e[0] = mp(300, 300);
    loop(i, 1, N) {
      int n, d;
      cin >> n >> d;
      e[i] = mp(e[n].fi + dy[d], e[n].se + dx[d]);
    }
    vvb t(600, vb(600));
    rep(i, N) t[e[i].fi][e[i].se] = true;
    int u = 0, l = 0, d = 599, r = 599;
    for (;;) {
      bool b = false;
      rep(i, 600) b |= t[u][i];
      if (b) {
        break;
      } else {
        u++;
      }
    }
    for (;;) {
      bool b = false;
      rep(i, 600) b |= t[i][l];
      if (b) {
        break;
      } else {
        l++;
      }
    }
    for (;;) {
      bool b = false;
      rep(i, 600) b |= t[d][i];
      if (b) {
        break;
      } else {
        d--;
      }
    }
    for (;;) {
      bool b = false;
      rep(i, 600) b |= t[i][r];
      if (b) {
        break;
      } else {
        r--;
      }
    }
    cout << r - l + 1 << ' ' << d - u + 1 << endl;
  }
}