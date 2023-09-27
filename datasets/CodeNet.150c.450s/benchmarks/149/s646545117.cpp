#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define fi first
#define se second

#define INF 2147483600

class UnionFind {
public:
  vector<int> par, rank, sizes; // parent, depth, size(only for root)
  UnionFind(int sz) : par(sz), rank(sz, 0), sizes(sz, 1){
    rep(i,sz) par[i]=i; // initial tree is independent each other
  }
  int find(int x){
    if(par[x]==x) return x;
    else return par[x] = find(par[x]);
  }
  void unite(int x, int y){
    x=find(x);
    y=find(y);
    if(x==y) return;  // already belong to same tree
    if(rank[x] < rank[y]){  // y becomes parent node
      par[x] = y;
      sizes[y] += sizes[x];
    } else {  // x becomes parent node
      par[y]=x;
      if(rank[x]==rank[y]) rank[x]++;
      sizes[x] += sizes[y];
    }
  }
  bool same(int x, int y){
    return find(x) == find(y);
  }
  int size(int x){
    return sizes[find(x)];
  }
}; // END class UnionFind

int main(){
  int n,q;
  cin>>n>>q;
  UnionFind uf(n);

  rep(i,q){
    int c,x,y;
    scanf("%d %d %d", &c, &x, &y);
    if(c==0) uf.unite(x,y);
    else {
      if(uf.same(x,y)) printf("1\n");
      else printf("0\n");
    }
  }

  return 0;
}