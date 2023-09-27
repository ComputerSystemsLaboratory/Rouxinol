#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

const long long INF = numeric_limits<long long>::max() / 2;
long long G[100][100];

int main() {
  int V, E; cin >> V >> E;
  for(int i = 0; i < V; i++)
    for(int j = 0; j < V; j++)
      G[i][j] = INF;
  for(int v = 0; v < V; v++)
    G[v][v] = 0;
  for(int i = 0; i < E; i++) {
    long long from, to, d;
    cin >> from >> to >> d;
    G[from][to] = min(G[from][to], d);
  }
  for(int k = 0; k < V; k++)
    for(int i = 0; i < V; i++)
      for(int j = 0; j < V; j++)
        if(G[i][k] != INF && G[k][j] != INF)
          G[i][j] = min<long long>(G[i][j], G[i][k] + G[k][j]);

  bool negative_loop = false;
  for(int v = 0; v < V; v++)
    if(G[v][v] < 0) negative_loop = true;
  if(negative_loop) {
    cout << "NEGATIVE CYCLE" << endl;
  }
  else {
    for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
        if(G[i][j] == INF) cout << "INF";
        else cout << G[i][j];

        if(j + 1 != V) cout << " ";
      }
      cout << endl;
    }
  }
}