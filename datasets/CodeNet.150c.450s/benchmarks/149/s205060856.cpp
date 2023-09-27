#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <utility>

class UnionFind {
  public:
    UnionFind(int n = 0) {
      init(n);
    }
    void init(int n) {
      p_.resize(n);
      for (int i = 0; i < n; ++i) {
        p_[i] = i;
      }
    }
    int parent(int id) {
      if (p_[id] == id) {
        return id;
      } else {
        return p_[id] = parent(p_[id]);
      }
    }
    void join(int a, int b) {
      p_[parent(b)] = parent(a);
    }
    bool is_same(int a, int b) {
      return parent(a) == parent(b);
    }
    bool is_representative(int id) {
      return parent(id) == id;
    }
  private:
    std::vector<int> p_;
};

int main() {
  UnionFind uf;
  int n, q, c, x, y;
  std::cin >> n >> q;
  uf.init(n);
  for (int i = 0; i < q; ++i) {
    std::cin >> c >> x >> y;
    if (c == 0) {
      uf.join(x, y);
    } else {
      std::cout << uf.is_same(x, y) << std::endl;
    }
  }
  return 0;
}