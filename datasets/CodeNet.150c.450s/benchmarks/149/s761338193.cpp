#include <bits/stdc++.h>
using namespace std;

class UnionFindTree {
public:
  vector<int> per, rank;
  void init(int n) {
    per.resize(n,0);
    rank.resize(n,0);
    for (int i=0; i<n; i++) {
      per[i]=i;
      rank[i]=0;
    }
  }
  int find(int x) {
    if (x==per[x]) {
      return x;
    } else {
      per[x]=find(per[x]);
      return per[x];
    }
  }
  void unite(int x,int y) {
    x=find(per[x]);
    y=find(per[y]);
    if (x==y) {
      return ;
    }
    if (rank[x]<rank[y]) {
      per[x]=y;
    } else {
      per[y]=x;
      if (rank[x]==rank[y]) {
        rank[x]++;
      }
    }
  }
  bool same(int x,int y) {
    x=find(x);
    y=find(y);
    return x==y;
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