#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

struct UnionFind{
  int par[10005];
  int rank[10005];
  UnionFind(int n){ init(n);}
  void init(int n){
    for(int i=0;i<n;i++){
      par[i] = i;
      rank[i] = 0;
    }
  }
  int find(int x){
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
  }
  int same(int x, int y){
    return find(x) == find(y);
  }
  void unite(int x, int y){
    x = find(x); y = find(y);
    if(x==y) return;
    if(rank[x] < rank[y]){
      par[x] = y;
    }else{
      par[y] = x;
      if(rank[x] == rank[y]) rank[x]++;
    }
  }
};

int main(){
  int n,q;
  scanf("%d%d",&n,&q);
  UnionFind uf(n);
  while(q--){
    int com, x,y;
    scanf("%d%d%d",&com,&x,&y);
    if(com) printf("%d\n", uf.same(x,y));
    else uf.unite(x,y);
  }
  return 0;
}