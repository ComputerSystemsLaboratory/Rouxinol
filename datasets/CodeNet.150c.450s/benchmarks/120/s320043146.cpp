/* {{{ Shinobu kawaii */
/*
  ______   __        _                  __                 
.' ____ \ [  |      (_)                [  |                
| (___ \_| | |--.   __   _ .--.   .--.  | |.--.   __   _   
 _.____`.  | .-. | [  | [ `.-. |/ .'`\ \| '/'`\ \[  | | |  
| \____) | | | | |  | |  | | | || \__. ||  \__/ | | \_/ |, 
 \______.'[___]|__][___][___||__]'.__.'[__;.__.'  '.__.'_/ 

*/
// clang-format off
/* }}} */

#include <bits/stdc++.h>
using namespace std;

// #define int long long
struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;

/* cpp template {{{ */

/* short */
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) (v).begin(), (v).end()
#define X real()
#define Y imag()

/* REPmacro */
#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

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
template <typename T> inline bool chmin(T& a, const T& b) {if (a > b) a = b; return a > b;}
template <typename T> inline bool chmax(T& a, const T& b) {if (a < b) a = b; return a < b;}
template <typename T> inline void print(const T& x) {cout << x << '\n';}
template <typename T, typename S> inline void print(const pair<T, S>& p) {cout << p.first << " " << p.second << '\n';}
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v) {
  REP(i, v.size()) print(v[i]);
}
template <typename T> inline void print(const vector<T>& v, string s = " ") {
  REP(i, v.size()) {
    if (i != 0) cout << s;
    cout << v[i];
  }
  cout << '\n';
}
// clang-format on
/* }}} */

int r, c;
bool flg[10], table[10][10000];
int ans = -INF;

int colres() {
  int ret = 0;
  REP(i, c) {
    int cnt = 0;
    REP(j, r) {
      if (((int)flg[j] + (int)table[j][i]) % 2 == 0) {
        ++cnt;
      }
    }
    if (r / 2 >= cnt) {
      ret += (r - cnt);
    } else {
      ret += cnt;
    }
  }

  return ret;
}

void dfs(int i = 0, bool rev = false) {
  if (i == r) {
    chmax(ans, colres());
    return;
  }

  flg[i] = rev;
  dfs(i + 1, true);
  dfs(i + 1, false);
}

signed main() {
  while (cin >> r >> c, r || c) {
    ans = -INF;
    REP(i, r) REP(j, c) cin >> table[i][j];
    dfs();
    print(ans);
  }

  return 0;
}