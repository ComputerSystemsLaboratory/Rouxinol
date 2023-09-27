#include<bits/stdc++.h>
using namespace std;
#define int long long
struct UnionFind{
  int n;
  vector<int> p,r;
  UnionFind(){}
  UnionFind(int n):n(n){init();}
  void init(){
    p.clear();
    r.clear();
    p.resize(n);
    r.resize(n,1);
    for(int i=0;i<n;i++) p[i]=i;
  }
  int find(int x){
    return (p[x]==x?x:p[x]=find(p[x]));
  }
  bool same(int x,int y){
    x=find(x);y=find(y);
    return x==y;
  }
  void unite(int x,int y){
    x=find(x);y=find(y);
    if(x==y) return;
    if(r[x]<r[y]) swap(x,y);
    p[y]=x;
    r[x]+=r[y];
  }
};
signed main(){
  int n,m;
  cin>>n>>m;
  UnionFind uf(n);
  for(int i=0;i<m;i++){
    int s,t;
    cin>>s>>t;
    uf.unite(s,t);
  }
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int s,t;
    cin>>s>>t;
    cout<<(uf.same(s,t)?"yes":"no")<<endl;
  } 
  return 0;
}