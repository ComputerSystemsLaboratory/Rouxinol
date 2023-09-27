#include <bits/stdc++.h>
using namespace std;

template <typename monoid>
class segmentTree {
public:
  using M = monoid;
  using T = typename M::value_type;

  int sz;
  vector<T> x;

  segmentTree(int n = 1e5) {
    sz = 1; while(sz < n) sz *= 2;
    init();
  }
  void init() { x.assign(sz*2, M::id()); }

  // [a, b)
  T query(int a, int b, int k, int l, int r) {
    if(r <= a || b <= l) return M::id();
    if(a <= l && r <= b) return x[k];
    return M::f(query(a, b, 2*k+1, l, (l+r)/2),
                query(a, b, 2*k+2, (l+r)/2, r));
  }
  T query(int a, int b) {return query(a, b, 0, 0, sz);}
  // 点更新
  void update(int i, const T &val) {
    i += sz-1;
    x[i] = M::g(x[i], val);
    while(i > 0) {
      i = (i-1) / 2;
      x[i] = M::f(x[i*2+1], x[i*2+2]);
    }
  }
};

template <typename T>
struct min_monoid {
  using value_type = T;
  static constexpr T id() { return std::numeric_limits<T>::max(); }
  static T f(const T &a, const T &b) { return min(a, b); }
  static T g(const T &a, const T &b) { return a; }
};
template <typename T>
struct max_monoid {
  using value_type = T;
  static constexpr T id() { return std::numeric_limits<T>::min; }
  static T f(const T &a, const T &b) { return max(a, b); }
  static T g(const T &a, const T &b) { return a; }
};
template <typename T>
struct sum_monoid {
  using value_type = T;
  static constexpr T id() {return 0;}
  static T f(const T &a, const T &b) { return a+b; }
  static T g(const T &a, const T &b) { return a+b; }
};

template <typename T>
using rmq = segmentTree<min_monoid<T>>;
template <typename T>
using rsq = segmentTree<sum_monoid<T>>;

signed main() {
  int n, q;
  cin >> n >> q;
  rsq<int> seg(n);
  for(int i=0; i<q; ++i) {
    int c, x, y;
    cin >> c >> x >> y;
	  x--;
    if(c == 0) {
      seg.update(x, y);
    } else {
      cout << seg.query(x, y) << endl;
    }
  }

  return 0;
}

