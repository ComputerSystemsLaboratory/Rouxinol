#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct UnionFind{
  vector<int> par;
  vector<int> sizes;
  UnionFind(int n) : par(n), sizes(n, 1) {
    for(int i=0;i<n;i++) par[i] = i;
  }

  int find(int x) {
    if (x == par[x]) return x;
    return par[x] = find(par[x]);  // 根を張り替えながら再帰的に根ノードを探す
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (sizes[x] < sizes[y]) swap(x, y);
    par[y] = x;
    sizes[x] += sizes[y];
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }

  long long int size(int x) {
    return sizes[find(x)];
  }
};

int main(){

  int v,e;
  cin >> v >> e;

  vector<vector<long long>> G(e);
  for(int i=0;i<e;i++){
    int a,b,c;
    cin >> a >> b >> c;
    G[i].push_back(c);
    G[i].push_back(a);
    G[i].push_back(b);
  }

  sort(G.begin(),G.end());

  UnionFind tree(v);
  long long int s=0;

  for(int i=0;i<e;i++){
    if(tree.same(G[i][1],G[i][2]));
    else{
      tree.unite(G[i][1],G[i][2]);
      s+=G[i][0];
    }
  }

  cout << s << endl;

}
