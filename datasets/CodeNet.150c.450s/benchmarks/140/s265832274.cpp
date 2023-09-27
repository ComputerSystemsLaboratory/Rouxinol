#include "bits/stdc++.h"
using namespace std;
typedef int64_t ll;
typedef vector<int64_t> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define SIZE(a) int((a).size())
const int inf=100000;

vll par(inf),myrank(inf);
struct edge{
  ll cost;
  ll v;
  ll u;
};
vector<edge> es(inf);
ll v,e;
//par[i]=iならiは根（はじめは全て根）
void init(ll n){
  REP(i,n){
    par[i]=i;myrank[i]=0;
  }
  return;
}
//xの根
ll root(ll x){
  return (par[x]==x)?x:par[x]=root(par[x]);
}
//xが根の木とyが根の木を繋げる
void unite(ll x,ll y){
  x=root(x);y=root(y);
  if(x==y){return;}
  if(myrank[x]<myrank[y]){par[x]=y;}
  else{par[y]=x;}
  if(myrank[x]==myrank[y]){myrank[x]++;}
}
//根が同じかどうか
bool same(ll x,ll y){
  return root(x)==root(y);
}
//クラスカル法
bool comp(const edge &e1,const edge &e2){
  return e1.cost<e2.cost;
}
ll kruskal(vector<edge> es){
  sort(es.begin(),es.end(),comp);
  init(v);
  ll ans=0;
  REP(i,e){
    edge &g=es[i];
    if(!same(g.u,g.v)){
      unite(g.u,g.v);
      ans+=g.cost;
    }
  }
  return ans;
}
int main(){
  cin>>v>>e;
  
  vector<edge> es(e);
  REP(i,e){
    cin>>es[i].u>>es[i].v>>es[i].cost;
  }
  
  cout<<kruskal(es)<<endl;
}

