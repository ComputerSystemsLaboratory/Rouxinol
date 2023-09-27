#include <bits/stdc++.h>

using namespace std;

int const MAX_E = 100;
int const INF = INT_MAX;

int edge[MAX_E][MAX_E];

int main() {
  
  int V, E;  cin >> V >> E;
  
  fill(edge[0], edge[MAX_E], INF);
  
  for(int i=0; i<V; i++) edge[i][i] = 0;
  
  for(int i=0; i<E; i++) {
    int s, t, d; cin >> s >> t >> d;
    edge[s][t] = d;
  }
  
  for(int k=0; k<V; k++) {
    for(int i=0; i<V; i++) {
      for(int j=0; j<V; j++) {
	if(edge[i][k] != INF && edge[k][j] != INF) {
	  edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);
	}
      }
    }
  }
  
  for(int i=0; i<V; i++) {
    if(edge[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      exit(0);
    }
  }
  
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      if(j) cout << " ";
      if(edge[i][j] == INF) cout << "INF";
      else cout << edge[i][j];
    }
    cout << endl;
  }

  return 0;
}