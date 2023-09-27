#include<vector>
#include<iostream>
using namespace std;

struct UnionFindTree {
  vector<int> par, rank;
  UnionFindTree(int n) {
    par.reserve(n);
    rank.reserve(n);
    for (int i = 0; i < n; i++) {
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int i) {
    if (par[i] == i) {
      return i;
    } else {
      return par[i] = find(par[i]);
    }
  }

  void unite(int i, int j) {
    i = find(i);
    j = find(j);
    if (i == j) return;

    if (rank[i] < rank[j]) {
      par[i] = j;
    } else {
      par[j] = i;
      if (rank[i] = rank[j]) rank[i]++;
    }
  }

  bool same(int i, int j) {
    return find(i) == find(j);
  }
};

#define REP(i,n) for(int i=0;i<(int)(n);i++)

int main() {
  int n, q;
  cin >> n >> q;
  UnionFindTree uft(n);

  REP(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uft.unite(x, y);
    } else {
      cout << (uft.same(x, y) ? 1 : 0) << endl;
    }
  }
}