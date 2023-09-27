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
  vector< vector< pair<ll,ll> > > edges(V);
  ll dist[V];
  for(ll i = 0; i < V; i++){
    dist[i] = INF;
  }
  for(ll i = 0; i < E; i++){
    ll s,t,d;
    cin >> s >> t >> d;
    edges[s].push_back(make_pair(t,d));
  }

  dist[r] = 0;

  for(ll i = 0; i < V; i++){
    for(ll k = 0; k < V; k++){
      if(dist[k] != INF){
	for(pair<ll,ll> edge: edges[k]){
	  if(dist[edge.first] > dist[k] + edge.second){
	    if(i == V - 1){
	      cout << "NEGATIVE CYCLE" << endl;
	      return 0;
	    }
	    dist[edge.first] = dist[k] + edge.second;
	  }
	}
      }
    }
  }
  for(ll i = 0; i < V; i++){
    if(dist[i] == INF)
      cout << "INF" << endl;
    else
      cout << dist[i] << endl;
  }
}