#include<bits/stdc++.h>
using namespace std;

class uf{
  int n;
  vector<int> rank, parent;
public:
  uf();
  uf(int _n){
    init(_n);
  }
  void init(int _n){
    n = _n;
    rank.resize(n);
    parent.resize(n);
    for (int i = 0; i < n; i++) {
      rank[i] = 0;
      parent[i] = i;
    }
  }
  int find(int x){
    if(x == parent[x])return x;
    else return parent[x] = find(parent[x]);
  }
  
  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y)return;
    if(rank[x] < rank[y]){
      parent[x] = y;
    }else{
      parent[y] = x;
      if(rank[x] == rank[y])rank[x]++;
    }
  }
  bool same(int x, int y){
    return find(x) == find(y);
  }
};


int main(){
  int n, q;
  std::cin >> n >> q;
  uf u(n);
  for (int i = 0; i < q; i++) {
    int com, x, y;
    std::cin >> com >> x >> y;
    if(com){
      std::cout << u.same(x, y) << std::endl;
    }else{
      u.unite(x, y);
    }
  }
  return 0;
}