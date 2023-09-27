#include<iostream>
#include<vector>
using namespace std;

struct UF{
    vector<int> d;
    UF(int n):d(n,-1){}
    bool set(int x,int y){
        x=root(x),y=root(y);
        if(x!=y){if(d[y]<d[x])swap(x,y);d[x]+=d[y];d[y]=x;}
        return x!=y;
    }
    bool find(int x,int y){return root(x)==root(y);}
    int root(int x){
        while(d[x]>=0){if(d[d[x]]>=0)d[x]=d[d[x]];x=d[x];}
        return x;
    }
    int size(int x){return -d[root(x)];}
};

int main () {
  int i,n,q;cin>>n>>q;
  UF uf(10000);
  for(i = 0;i < q; ++i) {
    int a,x,y;cin>>a>>x>>y;
    if(a == 0) {
      uf.set(x,y);
    }else {
      cout<<(uf.find(x,y)?1:0)<<endl;
    }
  }
}