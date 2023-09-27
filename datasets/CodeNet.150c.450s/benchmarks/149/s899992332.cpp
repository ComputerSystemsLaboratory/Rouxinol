#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 10000;

struct UnionFind
{
  int par[MAX_N];
  int rank[MAX_N];

  void init(int n){
    for(int i = 0; i < n; i++){
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
  }

  void unite(int x, int y){
    x = find(x);
    y = find(y);
    
    if(x == y) return;

    if(rank[x] < rank[y]) par[x] = y;
    else{
      par[y] = x;
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y){
    return find(x) == find(y);
  }
};

int main()
{
  int n, q;
  cin >> n >> q;
  UnionFind uf;
  uf.init(n);

  for(int i = 0; i < q; i++){
    int c, x, y;
    cin >> c >> x >> y;

    if(c == 0) uf.unite(x, y);
    if(c == 1){
      if(uf.same(x, y))
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
  }
}