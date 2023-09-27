#include <bits/stdc++.h>
using namespace std;

// For given x, return maximum 2^n such that 2^n <= x
// This can be used for calculating the width of a segment(it's size/f(i))
// FIXME: dynamic segtree may use as large segments as int can't represent
// FIXME: what if the compiler is not gcc?
int HighestPow2(int x) {
  if (!x) return 0;
  return 1 << (31-__builtin_clz(x));
}

// T must support a constructor with no argument(works as the identity element)
// T must support `T operator *(T y)` which is associative
template<class T>
struct MonoidSegTree {
  int n;
  int size;
  vector<T> seg;

  MonoidSegTree(const vector<T> A) {
    n = A.size();

    size = 1;
    while (size < n) size *= 2;
    
    seg.resize(size);
    seg.insert(seg.end(), A.begin(), A.end());
    seg.resize(size*2);
    for (int i=size-1; i>0; --i) seg[i] = seg[i*2] * seg[i*2+1];
  }

  void Update(int k, const T v) {
    k += size;
    seg[k] = v;
    while (k > 1) {
      k /= 2;
      seg[k] = seg[k*2] * seg[k*2+1];
    }
  }

  T Get(int l, int r) {
    T retl = T(); // the identity element
    T retr = T();

    l += size;
    r += size;
    for (; l < r; l>>=1, r>>=1) {
      if (r & 1) retr = retr * seg[--r];
      if (l & 1) retl = seg[l++] * retl;
    }
    return retl * retr;
  }

  T At(int k) {
    return seg[k+size];
  }
};

#define INF 0x7fffffff
struct Monoid {
  int v;
  Monoid() {v = 0;}
  Monoid(const Monoid &a) : v(a.v) {}
  Monoid(int a) : v(a) {}
  Monoid operator*(Monoid y) {
    return Monoid(v+y.v);
  }
};

using SegTree = MonoidSegTree<Monoid>;

int n;
int q;

int main() {
  scanf("%d%d", &n, &q);
  SegTree seg = SegTree(vector<Monoid>(n+1));
  while (q--) {
    int cmd;
    int x, y;
    scanf("%d", &cmd);
    scanf("%d%d", &x, &y);
    if (cmd == 0) {
      seg.Update(x, seg.At(x).v+y);
    } else {
      printf("%d\n", seg.Get(x, y+1).v);
    }
  }
}
  