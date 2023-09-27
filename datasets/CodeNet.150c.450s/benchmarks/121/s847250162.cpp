#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)n;++i)

using namespace std;

struct UnionFind {
  vector<int> p;
  UnionFind (int n) : p(n, -1) {}
  int root(int x) { return p[x] < 0 ? x : p[x] = root(p[x]); }
  void merge(int x, int y) { if (root(x) != root(y)) p[root(y)] = x; }
};

int main() {
  while(1){
    int h,w;
    cin>>h>>w;
    if(!h)break;
    vector<string> m(h);
    REP(i,h){
      cin>>m[i];
    }
    UnionFind uf(h*w);
    REP(i,h)REP(j,w-1){
      if(m[i][j] == m[i][j+1])
        uf.merge(i*w+j, i*w+j+1);
    }
    REP(i,h-1)REP(j,w){
      if(m[i][j] == m[i+1][j])
        uf.merge(i*w+j,(i+1)*w+j);
    }
    set<int> roots;
    REP(i,h)REP(j,w)
      roots.insert(uf.root(i*w+j));
    cout << roots.size() << endl;
  }
  return 0;
}