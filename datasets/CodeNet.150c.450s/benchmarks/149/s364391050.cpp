#include<bits/stdc++.h>
using namespace std;
struct UnionFind{
  vector<int>parent,sizes;
  UnionFind(int n):parent(n),sizes(n,1){
    for(int i=0;i<n;++i)parent[i]=i;
  }
  int find(int x){
    return x==parent[x]?x:parent[x]=find(parent[x]);
  }
  void unite(int x,int y){
    if((x=find(x))==(y=find(y)))return;
    if(sizes[x]>sizes[y])swap(x,y);
    parent[y]=x;
    sizes[x]+=sizes[y];
    sizes[y]=0;
  }
  bool same(int x,int y){
    return find(x)==find(y);
  }
  int size(int x){
    return sizes[find(x)];
  }
};
int main(){
  int N,Q;
  cin>>N>>Q;
  UnionFind UF(N);
  for(int i=0;i<Q;++i){
      int c,x,y;
      cin>>c>>x>>y;
      if(c) cout<<UF.same(x,y)<<endl;
      else UF.unite(x,y);
  }
}