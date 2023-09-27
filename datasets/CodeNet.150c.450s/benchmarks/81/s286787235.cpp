#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_V 11
#define INF (INT_MAX/2)
void floydwarshall(int V, vector< vector<int> > &dist){
  for(int k = 0; k < V; k++){
    for(int i = 0; i < V; i++){
      for(int j = 0; j < V; j++) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    }
  }
}

int main(void){
  int E;
  while(cin >> E && E != 0){
    int V, s, d, c;
    vector< vector<int> > dist(MAX_V, vector<int>(MAX_V, INF));
    V = -INF;

    while(E--){
      cin >> s >> d >> c;
      dist[s][d] = c;
      dist[d][s] = c;
      V = max(V, max(s, d));
    }
    V += 1;

    for(int i = 0; i < MAX_V; i++) dist[i][i] = 0;
    floydwarshall(V, dist);

    int ans, min_cost = INF;
    for(int i = 0; i < V; i++){
      int cost = 0;
      for(int j = 0; j < V; j++){
        cost += dist[i][j];
      }
      if(min_cost <= cost) continue;
      min_cost = cost;
      ans = i;
    }

    cout << ans << " " << min_cost << endl;
  }
  return 0;
}