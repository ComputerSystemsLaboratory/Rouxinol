#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct unionfind{
  int par[100010]; // 親ノード  必要に応じて要素数を変えよう
  int rank[100010]; // ランク　必要に応じて要素数を変えよう
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
    edge(int f,int t, int w) :from(f), to(t), cost(w) { }
};
bool comp(const edge& e1,const edge& es){
  return e1.cost<es.cost;
}
int main(){
  int i,s,t,w,v,e,ans=0;
  scanf("%d %d\n",&v,&e);
  vector<edge> g;
  unionfind tree(v);
  for(i=0;i<e;i++){
    scanf("%d %d %d\n",&s,&t,&w);
    g.push_back(edge(s,t,w));
  }
  sort(g.begin(),g.end(),comp);
  for(i=0;i<e;i++){
    if(tree.same(g[i].to,g[i].from)==0){
      ans=ans+g[i].cost;
      tree.unite(g[i].to,g[i].from);
    }
  }
  printf("%d\n",ans);
  return 0;
}
