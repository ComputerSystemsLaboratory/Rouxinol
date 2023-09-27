// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
constexpr int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979;
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
constexpr bool odd(const int n) { return n & 1; }
constexpr bool even(const int n) { return ~n & 1; }
template<typename T = int> T in() { T x; cin >> x; return x; }
template<typename T = int> T in(T &&x) { T z(forward<T>(x)); cin >> z; return z; }
template<typename T> istream &operator>>(istream &is, vector<T> &v) { for (T &x : v) is >> x; return is; }
template<typename A, typename B> istream &operator>>(istream &is, pair<A, B> &p) { return is >> p.first >> p.second; }
template<typename T> ostream &operator<<(ostream &os, const vector<vector<T>> &v) { int n = v.size(); rep(i, n) os << v[i] << (i == n - 1 ? "" : "\n"); return os; }
template<typename T> ostream &operator<<(ostream &os, const vector<T> &v) { int n = v.size(); rep(i, n) os << v[i] << (i == n - 1 ? "" : " "); return os; }
template<typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << p.first << ' ' << p.second; }
template<typename Head, typename Value> auto vectors(const Head &head, const Value &v) { return vector<Value>(head, v); }
template<typename Head, typename... Tail> auto vectors(Head x, Tail... tail) { auto inner = vectors(tail...); return vector<decltype(inner)>(x, inner); }
// clang-format on

main {
  while (true) {
    int n = in();
    int m = in();
    if (n == 0 && m == 0) break;
    vector<int> d(n), p(n);
    multimap<int, int> w;
    int s = 0;
    rep(i, n) {
      cin >> d[i] >> p[i];
      s += d[i] * p[i];
      w.emplace(-p[i], i);
    }
    for (auto &q : w) {
      auto &i = q.second;
      s -= min(m, d[i]) * p[i];
      m -= min(m, d[i]);
    }
    cout << s << endl;
  }
}

