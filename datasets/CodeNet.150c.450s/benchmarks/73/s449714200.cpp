#include <bits/stdc++.h>
using namespace std;

struct BinaryIndexedTree {
  BinaryIndexedTree() {}
  BinaryIndexedTree(int n) : n(n), v(n + 1, 0) {}

  vector<int> v;
  int n;

  int sum(int i) {
    int ret = 0;
    while (i) {
      ret += v[i];
      i -= i & -i;
    }
    return ret;
  }

  void add(int i, int x) {
    while (i <= n) {
      v[i] += x;
      i += i & -i;
    }
  }
};

int main() {
  int n, q;
  cin >> n >> q;

  BinaryIndexedTree bit(n);
  while (q--) {
    int c, x, y;
    cin >> c >> x >> y;
    if (c) {
      cout << bit.sum(y) - bit.sum(x - 1) << endl;
    } else {
      bit.add(x, y);
    }
  }
}