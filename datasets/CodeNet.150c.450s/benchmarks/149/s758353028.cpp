#include "bits/stdc++.h"
using namespace std;


int n, q;

class UnionFindTree {
  int* p;
  int* rank;
public:
  void makeSet(int x);
  void doUnion(int x, int y);
  int findRoot(int x);
  bool isSameSet(int x, int y);
  void link(int x, int y);
};

void UnionFindTree::makeSet(int n) {
  p = new int[n];
  rank = new int[n];
  for (int i=0; i < n; i++) {
    p[i] = i;
    rank[i] = i;
  }
}

void UnionFindTree::doUnion(int x, int y) {
  link(findRoot(x), findRoot(y));
}

int UnionFindTree::findRoot(int x) {
  while (x != p[x]) {
    p[x] = p[p[x]];
    x = p[x];
  }
  return x;
}

bool UnionFindTree::isSameSet(int x, int y) {
  return findRoot(x) == findRoot(y);
}

void UnionFindTree::link(int x, int y) {
  if (rank[x] > rank[y]) {
    p[y] = x;
  } else {
    p[x] = y;
    if (rank[x] == rank[y]) {
      rank[y]++;
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cin >> n >> q;
  
  int com, x, y;
  UnionFindTree uft;
  uft.makeSet(n);
  
  for (int i=0; i < q; i++) {
    cin >> com >> x >> y;
    if (com == 0) {
      uft.doUnion(x, y);
    } else {
      if (uft.isSameSet(x, y)) {
        cout << '1' << '\n';
      } else {
        cout << '0' << '\n';
      }
    }
  }
  return 0;
}