#include<queue>
#include<stack>
#include<math.h>
#include<cmath>
#include<bitset>
#include<stdio.h>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
struct unionfind{
  int par[100010];
  int rank[100010];
  unionfind(int n){
    init(n);
  }
  void init(int n){
    for(int i=0;i<=n;i++){
      par[i]=i;
      rank[i]=1;
    }
  }
  int root(int x) {
    if (par[x] == x) {
      return x;
    }
    else {
      return par[x] = root(par[x]);
    }
  }
  int size(int x){
    return rank[root(x)];
  }
  bool same(int x,int y) {
    return root(x) == root(y);
  }
  void unite(int x,int y) {
    x=root(x);
    y=root(y);
    if(x==y){
      return;
    }
    if(rank[x]<rank[y]){
      swap(x,y);
    }
    rank[x]=rank[x]+rank[y];
    par[y]=x;
  }
};
struct edge{
  int from;
  int to;
  int cost;
  edge(ll f,ll t,ll w) : from(f),to(t),cost(w){}
};
bool comp(const edge& e1,const edge& e2){
  return e1.cost < e2.cost;
}
int main(){
  unionfind tree(10010);
  int i,v,e,s,t,w;
  vector<edge> g;
  scanf("%d %d\n",&v,&e);
  for(i=0;i<e;i++){
    scanf("%d %d %d\n",&s,&t,&w);
    g.push_back(edge(s,t,w));
  }
  sort(g.begin(),g.end(),comp);
  int ans=0;
  for(i=0;i<e;i++){
    if(!tree.same(g[i].from,g[i].to)){
      tree.unite(g[i].from,g[i].to);
      ans+=g[i].cost;
    }
  }
  printf("%d\n",ans);
  return 0;
}
