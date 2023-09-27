#include <queue>
#include <iostream>
#include <algorithm>
#define ll long long
#define INF 100000000000000
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  ll V, E, r;
  cin >> V >> E >> r;
  vector< vector< pair<ll, ll> > > edges(V);
  vector<ll> dist(V, INF);
  for(ll i = 0; i < E; i++){
    ll s, t, d;
    cin >> s >> t >> d;
    edges[s].push_back(make_pair(t,d));
  }
  dist[r] = 0;
  priority_queue< pair<ll, ll>, vector< pair<ll,ll> >, greater< pair<ll,ll> > > pq;
  pq.push(make_pair(0, r));
  while(!pq.empty()){
    ll source = pq.top().second;
    pq.pop();
    for(auto i : edges[source]){
      if(dist[i.first] == INF || dist[source] + i.second < dist[i.first]){
	dist[i.first] = dist[source] + i.second;
	pq.push(make_pair(dist[i.first], i.first));
      }
    }
  }
  for(ll i = 0; i < V; i++){
    if(dist[i] == INF)
      cout << "INF" <<endl;
    else
      cout << dist[i] << endl;
  }
} 