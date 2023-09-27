#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_V = 10000;
const ll MAX_E = 100000;
struct edge{
  ll u,v,cost;
  bool operator<(const edge &o) const {return cost < o.cost;}
  bool operator>(const edge &o) const {return cost > o.cost;}
};
ll V,E,Par[MAX_V],Rank[MAX_V] = {};edge G[MAX_E];
void init(ll n){
  for(ll i=0;i<n;i++) Par[i] = i;
}
ll find(ll x){
  if(x == Par[x]) return x;
  else return Par[x] = find(Par[x]);
}
void unite(ll x,ll y){
  x = find(x);y = find(y);
  if(x == y) return;
  if(Rank[x] < Rank[y]) swap(x,y);
  Par[y] = x;
  if(Rank[x] == Rank[y]) Rank[x]++;
}
bool same(ll x,ll y){
  return find(x) == find(y);
}
ll Kruskal(){
  sort(G,G+E);ll ans = 0,i;edge e;
  init(V);
  for(i=0;i<E;i++){
    e = G[i];
    if(!same(e.u,e.v)){
      ans += e.cost;
      unite(e.u,e.v);
    }
  }
  return ans;
}
int main(){
  ll i;scanf("%lld%lld",&V,&E);
  for(i=0;i<E;i++) scanf("%lld%lld%lld",&G[i].u,&G[i].v,&G[i].cost);
  printf("%lld\n",Kruskal());
}
