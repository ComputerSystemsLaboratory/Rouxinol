#include<iostream>
#include<vector>
using namespace std;
class dj{
public:
  vector<int>rank,p;
  dj(){}
  dj(int size){
    rank.resize(size,0);
    p.resize(size,0);
    for(int i=0;i<size;++i){ p[i]=i; rank[i]=0;}
  }
  bool same(int x,int y){
    return findset(x)==findset(y);
  }
  void unite(int x,int y){
    link(findset(x),findset(y));
  }
  void link(int x,int y){
    if(rank[x]>rank[y]){
      p[y]=x;
    }else{
      p[x]=y;
      if(rank[x]==rank[y]) rank[y]++;
    }
  }
  int findset(int x){
    if(x!=p[x]) p[x]=findset(p[x]);
    return p[x];
  }
};

int main(){
  int n,a,b,q;
  int t;

  cin>>n>>q;
  dj ds=dj(n);

  for(int i=0;i<q;++i){
    cin>>t>>a>>b;
    if(t==0) ds.unite(a,b);
    else if(t==1){
      if(ds.same(a,b)) cout<<1<<endl;
      else cout<<0<<endl;
    }
  }

  return 0;
}

