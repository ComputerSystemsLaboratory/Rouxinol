#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
  int n;
  vector<int> r,p;
  UnionFind(){}
  UnionFind(int sz):n(sz),r(sz,1),p(sz,0){iota(p.begin(),p.end(),0);}
  int find(int x){
    return (x==p[x]?x:p[x]=find(p[x]));
  }
  bool same(int x,int y){
    return find(x)==find(y);
  }
  void unite(int x,int y){
    x=find(x);y=find(y);
    if(x==y) return;
    if(r[x]<r[y]) swap(x,y);
    r[x]+=r[y];
    p[y]=x;
  }
};

int main(){
  int V,E;
  cin>>V>>E;
  std::vector<int> s(E),t(E),w(E);
  for(int i=0;i<E;i++)cin>>s[i]>>t[i]>>w[i];
  typedef tuple<int,int,int> X;
  std::vector<X> x(E);
  for(int i=0;i<E;i++)x[i]=X(w[i],s[i],t[i]);
  sort(x.begin(),x.end());
  int ans=0;
  UnionFind uf(V);
  for(int i=0;i<E;i++){
    int& ww=std::get<0>(x[i]);
    int& ss=std::get<1>(x[i]);
    int& tt=std::get<2>(x[i]);
    if(!uf.same(ss,tt)){
      ans+=ww;
      uf.unite(ss,tt);
    }
  }
  cout<<ans<<endl;
}

