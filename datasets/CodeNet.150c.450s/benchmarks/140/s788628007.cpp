#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1000000007;
const long double PI=3.14159265358979;

struct UnionFind{
  vector<int> par;
  
  UnionFind(int N){
    vector<int> a(N);
    par=a;
    for(int i=0;i<N;i++){
      par[i]=i;
    }
  }
  
  int root(int x){
    if(x==par[x]){
      return x;
    }
    return root(par[x]);
  }
  
  void unite(int x,int y){
    if(root(x)==root(y)){
      return;
    }
    par[root(x)]=root(y);
    return;
  }
  
  bool same(int x,int y){
    return root(x)==root(y);
  }
};


int main(){
  ll V,E;
  cin>>V>>E;
  //vector<tuple<ll,ll,ll>> e(E);
  priority_queue<tuple<ll,ll,ll>, vector<tuple<ll,ll,ll>>, greater<tuple<ll,ll,ll>>> q;

  for(int i=0;i<E;i++){
    ll a,b,c;
    cin>>a>>b>>c;
    tuple<ll,ll,ll> e(c,b,a);
    q.push(e);
  }
  UnionFind tree(V);
  ll ans=0;
  while(!q.empty()){
    tuple<ll,ll,ll> e1=q.top();
    int a=get<2>(e1),b=get<1>(e1);
    if(!tree.same(a,b)){
      ans+=get<0>(e1);
      tree.unite(a,b);
    }
    q.pop();
  }
  cout<<ans<<endl;
    
    
}
