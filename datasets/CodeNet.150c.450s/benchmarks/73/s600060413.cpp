#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)

template<class T, class E>
struct SegTree{
  typedef function<T(T,T)> F;
  typedef function<T(T,E)> G;
  typedef function<E(E,E)> H;
  typedef function<E(E,int)> P;
  int n;
  F f;
  G g;
  H h;
  P p;
  T d1;
  E d0;
  vector<T> dat;
  vector<E> lazy;
  SegTree(int n_, F f, G g, H h, T d1, E d0, P p=[](E a, int b){ return a; })
    : f(f), g(g), h(h), d1(d1), d0(d0), p(p) {
    n = 1;
    while (n < n_) n *= 2;
    dat.resize(2 * n - 1, d1);
    lazy.resize(2 * n - 1, d0);
  }
  void eval(int k, int l, int r) {
    if (lazy[k] == d0) return;
    dat[k] = g(dat[k], p(lazy[k], r - l));
    if (k < n - 1) {
      lazy[2 * k + 1] = h(lazy[2 * k + 1], lazy[k]);
      lazy[2 * k + 2] = h(lazy[2 * k + 2], lazy[k]);
    }
    lazy[k] = d0;
  }
  void update(int a, int b, E x, int k = 0, int l = 0, int r = -1) {
    if (r == -1) r = n;
    eval(k, l, r);
    if (b <= l || r <= a) return;
    if (a <= l && r <= b) {
      lazy[k] = h(lazy[k], x);
      eval(k, l, r);
    }
    else {
      update(a, b, x, 2 * k + 1, l, (l + r) / 2);
      update(a, b, x, 2 * k + 2, (l + r) / 2, r);
      dat[k] = f(dat[2 * k + 1], dat[2 * k + 2]);
    }
  }
  // return op[a..b)
  // k: node id, [l, r): node interval
  E query(int a, int b, int k = 0, int l = 0, int r = -1) {
    if (r == -1) r = n;
    eval(k, l, r);
    if (r <= a || b <= l) return d1;
    if (a <= l && r <= b) return dat[k];
    E vl = query(a, b, 2 * k + 1, l, (l + r) / 2);
    E vr = query(a, b, 2 * k + 2, (l + r) / 2, r);
    return f(vl, vr);
  }
};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n, q;
  cin >> n >> q;
  SegTree<int, int> seg(
    n,
    [](int a, int b){ return a + b; },
    [](int a, int b){ return a + b; },
    [](int a, int b){ return a + b; },
    0,
    0);

  rep(i, q) {
    int t, x, y;
    cin >> t >> x >> y;
    x--;
    if (t == 0) {
      seg.update(x, x + 1, y);
    }
    else {
      cout << seg.query(x, y) << endl;
    }
  }

  return 0;
}

