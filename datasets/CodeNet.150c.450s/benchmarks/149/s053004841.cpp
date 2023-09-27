#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
  vector<int> p, r;
  DisjointSet() {}

public:
  DisjointSet(int size) {
    p.resize(size, 0);
    r.resize(size, 0);
    for (int i = 0; i < size; i++) makeSset(i);
  }

  void makeSset(int i) {
    p[i] = i;
    r[i] = 0;
  }

  int same(int a, int b) {
    return (findSet(a) == findSet(b) ? 1 : 0);
  }

  void unite(int a, int b) {
    link(findSet(a), findSet(b));
  }

  void link(int a, int b) {
    if (r[a] < r[b]) {
      p[a] = b;
    } else {
      p[b] = a;
      if (r[a] == r[b]) r[a]++;
    }
  }

  int findSet(int i) {
    int x = i;
    while (i != p[i]) i = p[i];
    return p[i];
  }
};


int main() {
  int n, q; cin >> n >> q;

  DisjointSet s(n);

  while (q--) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com) {
      cout << s.same(x, y) << endl;
    } else {
      s.unite(x, y);
    }
  }
  return 0;  
}