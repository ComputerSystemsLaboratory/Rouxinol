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
bool odd(const int &n) { return n & 1; }
bool even(const int &n) { return ~n & 1; }
template<typename T> int len(const T &v) { return v.size(); }
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

template<typename Monoid> class SegTree {
  using T = typename Monoid::value_type;

  Monoid m;
  vector<T> tree; // 1-indexed
  int size = 1;

public:
  SegTree(const int &n = 0) {
    while (size < n) size *= 2;
    tree.assign(size * 2, m.id());
  }

  SegTree(const int &n, const T &x) {
    while (size < n) size *= 2;
    tree.assign(size * 2, x);
    for (int i = size - 1; i >= 1; i--) tree[i] = m(tree[i * 2], tree[i * 2 + 1]);
  }

  template<typename InputIterator> SegTree(InputIterator first, InputIterator last) {
    int n = distance(first, last);
    while (size < n) size *= 2;
    tree.resize(size * 2, m.id());
    copy(first, last, tree.begin() + size);
    for (int i = size - 1; i >= 1; i--) tree[i] = m(tree[i * 2], tree[i * 2 + 1]);
  }

  T fold(int l, int r) { // [l, r)
    T accl = m.id(), accr = m.id();
    for (l += size, r += size; l < r; l /= 2, r /= 2) {
      if (l & 1) accl = m(accl, tree[l++]);
      if (r & 1) accr = m(tree[--r], accr);
    }
    return m(accl, accr);
  }

  void update(int i, const T &x) {
    tree[i += size] = x;
    while (i /= 2) tree[i] = m(tree[i * 2], tree[i * 2 + 1]);
  }

  const T &operator[](int i) const { return tree[i + size]; }
};

template<typename T> class RangeSum {
  struct trait {
    using value_type = T;
    T id() { return T(); }
    T operator()(const T &a, const T &b) { return a + b; }
  };
  SegTree<trait> st;

public:
  RangeSum(const int &n = 0) : st(n) {}
  RangeSum(const int &n, const T &x) : st(n, x) {}
  template<typename InputIterator> RangeSum(InputIterator first, InputIterator last) : st(first, last) {}
  void update(const int &i, const T &x) { st.update(i, x); }
  T sum(const int &l, const int &r) { return st.fold(l, r); }
  T operator[](const int &i) { return st[i]; }
};

main {
  int n, q;
  cin >> n >> q;
  RangeSum<int> rs(n);
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    --x;
    if (t) {
      cout << rs.sum(x, y) << endl;
    } else {
      rs.update(x, rs[x] + y);
    }
  }
}

