#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<typename T> struct BinaryIndexedTree {
  vector<T> bit;
  BinaryIndexedTree(int n) : bit(n + 1, 0) {}
  T sum(int i) {
    T s = 0;
    for (; i > 0; i -= i & -i) s += bit[i];
    return s;
  }
  void add(int i, T x) {
    for (; i <= bit.size(); i += i & -i) bit[i] += x;
  }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q; cin >> n >> q;
  BinaryIndexedTree<ll> bit(n);
  for (int i = 0; i < q; ++i) {
    int com, x, y; cin >> com >> x >> y;
    if (com) {
      cout << bit.sum(y) - bit.sum(x - 1) << endl;
    } else {
      bit.add(x, y);
    }
  }
  return 0;
}

