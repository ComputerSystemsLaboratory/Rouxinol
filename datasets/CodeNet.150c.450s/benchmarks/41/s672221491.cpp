#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define INF (1000000000000)
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  ll V, E;
  cin >> V >> E;
  vector< vector< ll > > dist(V, vector<ll> (V, INF));
  for(ll i = 0; i< V; i++)
    dist[i][i] = 0;
  for(ll i = 0; i < E; i++){
    ll s,t,d;
    cin >> s >> t >> d;
    dist[s][t] = d;
  }
  for(ll i = 0; i < V; i++)
    for(ll j = 0; j < V; j++)
      for(ll k = 0; k < V; k++){
	dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
      }

  bool negative = false;
  for(ll i = 0; i < V; i++)
    if(dist[i][i] < 0)
      negative = true;

  if(negative == true){
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for(ll i = 0; i < V; i++){
    for(ll k = 0; k < V; k++){
      if(k != 0)
	cout << ' ';
      if(dist[i][k] >= INF / 10)
	cout << "INF";
      else
	cout << dist[i][k];
    }
    cout << endl;
  }

    

}