#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100
#define INF 1e9

int cost[MAX_N][MAX_N];
int d[MAX_N];
bool used[MAX_N];
int n, u, k, c, v;

void dijkstra(int s){
  fill(d, d + n, INF);
  fill(used, used + n, false);
  d[s] = 0;

  while(true){
    int v = -1;

    for(int u = 0; u < n; u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
    }

    if(v == -1) break;
    used[v] = true;

    for(int u = 0; u < n; u++){
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }
}

int main(void){
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cost[i][j] = INF;
    }
  }
  for(int i = 0; i < n; i++){
    cin >> u >> k;
    for(int j = 0; j < k; j++){
      cin >> v >> c;
      cost[u][v] = c;
    }
  }
  dijkstra(0);
  for(int i = 0; i < n; i++){
    cout << i << " " << d[i] << endl;
  }
  return 0;
}