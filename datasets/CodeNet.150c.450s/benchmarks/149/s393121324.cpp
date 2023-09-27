#include <bits/stdc++.h>
using namespace std;

class UnionFindTree {
private:
  int S[10000];
  int h[10000];
public:
  void init(int N) {
    for (int i=0; i<N; i++) {
      S[i]=i;
      h[i]=0;
    }
  }
  int root(int c) {
    if (c==S[c]) {
      return c;
    } else {
      return (S[c]=root(S[c]));
    }
  }
  void unite(int a,int b) {
    a=root(S[a]);
    b=root(S[b]);
    if (a==b) {
      return ;
    }
    if (h[a]<h[b]) {
      S[a]=b;
    } else {
      S[a]=b;
      if (h[a]==h[b]) {
        h[a]++;
      }
    }
  }
  bool same(int a,int b) {
    return (root(a)==root(b));
  }
};
int main() {
  int n, q;
  cin >> n >> q;
  UnionFindTree f;
  f.init(n);
  while (q--) {
    int com, x, y;
    cin >> com >> x >> y;
    if (!com) {
      f.unite(x,y);
    } else {
      printf("%d\n",f.same(x,y));
    }
  }
  return 0;
}