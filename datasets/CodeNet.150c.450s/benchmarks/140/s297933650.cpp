#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#define INF 100000000
#define ll long long
using namespace std;

class Bit{
private:
  ll *par, *rk, size;
public:
  Bit(ll size){
    par = new ll[size];
    rk = new ll[size];
    for(ll i = 0; i < size; i++){
      par[i] = i;
      rk[i] = 0;
    }
  }
  ll find(ll x){
    if(x == par[x])
      return x;
    else
      return par[x] = find(par[x]);
  }
  void merge(ll x,ll y){
    x = find(x);
    y = find(y);
    if(rk[x] > rk[y]){
      par[y] = x;
    }else if(rk[x] < rk[y]){
      par[x] = y;
    }else{
      par[y] = x;
      rk[x]++;
    }
  }
  bool same(ll x, ll y){
    return find(x) == find(y);
  }
};
int main(){
  ll V, E;
  cin >> V >> E;
  Bit bit(V);
  priority_queue< pair<ll, pair<ll,ll> >, vector< pair<ll, pair<ll,ll> > >, greater< pair<ll, pair<ll,ll> > > > pq;
  for(ll i = 0; i < E; i++){
    ll s,t,w;
    cin >> s >> t >> w;
    pq.push(make_pair(w, make_pair(s,t)));
  }
  ll cost = 0;
  for(ll i = 0; i < V - 1; i++){
    while(1){
      if(bit.same(pq.top().second.first, pq.top().second.second)){
	pq.pop();
      }else{
	break;
      }
    }
    bit.merge(pq.top().second.first, pq.top().second.second);
    cost += pq.top().first;
  }
  cout << cost << endl;
  return 0;
}