#include <bits/stdc++.h>
using namespace std;

class UnionFindTree {
private:
  int P[10000];
public:
  void init(int N) {
    for (int i=0; i<N; i++) {
      P[i]=i;
    }
  }
  int root(int a) {
    if (P[a]==a) {
      return a;
    } else {
      return (P[a]=root(P[a]));
    }
  }
  void unite(int a,int b) {
    P[root(a)]=root(b);
  }
  bool same(int a,int b) {
    return (root(a)==root(b));
  }
};
int main() {
  int n, q;
  cin >> n >> q;
  UnionFindTree S;
  S.init(n);
  while (q--) {
    int com, x, y;
    cin >> com >> x >> y;
    if (!com) {
      S.unite(x,y);
    } else {
      printf("%d\n",S.same(x,y));
    }
  }
  return 0;
}