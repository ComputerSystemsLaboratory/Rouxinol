#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct edge{ll from;ll to;ll cost;};
const ll inf = 100100100100100100;
const ll MAX_V = 1000;
const ll MAX_E = 2000;
ll V,E,D[MAX_V];edge G[MAX_E];
bool BellmanFord(ll s){
    ll i,j;fill(D,D+V,inf);bool update;D[s] = 0;
    for(i=0;i<V;i++){
        update = false;
        for(j=0;j<E;j++){
            if(D[G[j].from] != inf && D[G[j].to] > D[G[j].from]+G[j].cost){
                D[G[j].to] = D[G[j].from]+G[j].cost;
                update = true;
            }
        }
        if(!update) return false;
    }
    return true;
}
int main(){
  ll r,i;scanf("%lld%lld%lld",&V,&E,&r);
  for(i=0;i<E;i++) scanf("%lld%lld%lld",&G[i].from,&G[i].to,&G[i].cost);
  if(BellmanFord(r)){
    printf("NEGATIVE CYCLE\n");return 0;
  }
  for(i=0;i<V;i++){
    if(D[i]==inf) printf("INF\n");
    else printf("%lld\n",D[i]);
  }
  return 0;
}
