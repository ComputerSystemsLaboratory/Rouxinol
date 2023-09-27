#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define INF 10000000000000000
#define ll long long

using namespace std;

int main(){
  ll V, E, r;
  cin >> V >> E >> r;
  vector< vector< pair<ll,ll> > > edges(V);
  for(ll i = 0; i < E; i++){
    ll s,t,d;
    cin >> s >> t >> d;
    edges[s].push_back(make_pair(t,d));
  }
  vector<ll> dist(V, INF);
  dist[r] = 0;
  priority_queue< pair<ll,ll> , vector< pair<ll,ll> >, greater< pair<ll,ll> > > pq;
  pq.push(make_pair(0,r));

  while(!pq.empty()){
    ll source = pq.top().second;
    pq.pop();
    for(pair<ll,ll> edge: edges[source]){
      if(dist[edge.first] > dist[source] + edge.second){
	dist[edge.first] = dist[source] + edge.second;
	pq.push(make_pair(dist[edge.first], edge.first));
      }
    }
  }

  for(ll i = 0; i < V; i++){
    if(dist[i] == INF){
      cout << "INF" << endl;
    }else{
      cout << dist[i] << endl;
    }
  }


}