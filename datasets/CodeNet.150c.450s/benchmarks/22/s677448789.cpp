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
  for(ll i = 0; i < E; i++){
    for(ll k = 0; k < V; k++){
      for(pair<ll,ll> edge: edges[k]){
	if(dist[k] != INF && dist[edge.first] > dist[k] + edge.second){
	  if(i == E-1){
	    cout << "NEGATIVE CYCLE" << endl;
	    return 0;
	  }
	  dist[edge.first] = dist[k] + edge.second;
	}
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