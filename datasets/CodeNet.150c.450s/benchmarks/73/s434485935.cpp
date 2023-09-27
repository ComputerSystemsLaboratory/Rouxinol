#include <bits/stdc++.h>
using namespace std;

struct segtree {
  int id; // identity element
  vector<int> node;
  function<int(int, int)> f;
  static const int N = 1 << 18;

  segtree(int id, function<int(int, int)> f) : id(id), f(f), node(2 * N, id){}

  void init(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
      node[i + N - 1] = v[i];
    }
    for (int i = N - 2; i >= 0; --i) {
      node[i] = f(node[2 * i + 1], node[2 * i + 2]);
    }
  }

  int find(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return id;
    if (a <= l && r <= b) return node[k];
    return f(
      find(a, b, 2 * k + 1, l, (l + r) / 2),
      find(a, b, 2 * k + 2, (l + r) / 2, r)
    );
  }

  int find(int a, int b) {
    return find(a, b, 0, 0, N);
  }

  void update(int k, int x) {
    k += N - 1;
    node[k] = x;
    while (k) {
      k = (k - 1) / 2;
      node[k] = f(node[2 * k + 1], node[2 * k + 2]);
    }
  }

  void add(int k, int x) {
    k += N - 1;
    node[k] += x;
    while (k) {
      k = (k - 1) / 2;
      node[k] = f(node[2 * k + 1], node[2 * k + 2]);
    }
  }
};

int main() {
  int n, q;
  cin >> n >> q;

  segtree seg(0, [&](int a, int b) { return a + b; } );
  while (q--) {
    int f, a, b;
    cin >> f >> a >> b;

    if (f) cout << seg.find(a, b + 1) << endl;
    else seg.add(a, b);
  }
}