#include<bits/stdc++.h>

using namespace std;

class UnionFind{
public:
  vector<int> par;

  void init(int n)
  {
    par.clear();
    par.resize(n);
    for (size_t i = 0; i < n; i++) {
      par[i] = i;
    }
  }

  int find(int x)
  {
    if(x == par[x]){
      return x;
    }
    else{
      return par[x] = find(par[x]);
    }
  }

  void unite(int x, int y)
  {
    x = find(x); y = find(y);
    if(x == y){
      return;
    }
    par[x] = y;
  }

  bool same(int x, int y)
  {
    return find(x) == find(y);
  }
};

int main()
{
  int N; cin >> N;
  UnionFind uf; uf.init(N);
  int Q; cin >> Q;
  for (size_t q = 0; q < Q; q++) {
    int com, x, y; cin >> com >> x >> y;
    if(com == 0){
      uf.unite(x, y);
    }
    else{
      if(uf.same(x, y)){
        cout << 1 << endl;
      }
      else{
        cout << 0 << endl;
      }
    }
  }


  return 0;
}