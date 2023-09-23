#include <iostream>
#include <algorithm>
using namespace std;

#define INF 1<<20
#define MAX_V 10

bool done[MAX_V];
int d[MAX_V];
int V;
int cost[MAX_V+1][MAX_V+1];

int dijkstra(int s) {
  int total = 0;
  
  fill(done, done+V, false);
  fill(d, d+V, INF);
  
  d[s] = 0;

  while(1) {
    int v = -1;
    for(int u = 0; u < V; u++) {
      if(!done[u] && ( v == -1 || d[u]<d[v] )) {
	v = u;
      }
    }
    if(v == -1) break;

    done[v] = true;

    for(int u = 0; u < V; u++) {
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }

  for(int i=0; i<V; i++) {
    total += d[i];
  }
  
  return total;
}

int main() {
  
  int m;

  while(cin >> m, m) {
    int a, b, c;
    V = 0;
    fill(cost[0], cost[MAX_V], INF);
    
    for(int i=0; i<m; i++) {
      cin >> a >> b >> c;
      cost[a][b] = cost[b][a] = c;
      V = max(V, max(a, b));
    }
    V++;
    //    cout << V << endl << endl;
    
    int res = INF, num;
    for(int i=0; i<V; i++) {
      int temp = res;
      res = min(dijkstra(i), res);

      if(temp>res) {
	num = i;
      }
    }
    
    cout << num << " " << res << endl;
  }
  return 0;
}