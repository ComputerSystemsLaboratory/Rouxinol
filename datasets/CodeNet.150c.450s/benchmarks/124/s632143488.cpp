#include<iostream>
#include<algorithm>
using namespace std;

#define INF 1000000

int n;
int cost[110][110], d[110];
bool used[110];

void dijkstra(int s){

  for(int i = 0;i < n;i++) d[i] = INF;
  for(int i = 0;i < n;i++) used[i] = false;
  
  d[s] = 0;
  
  while(true){
    int v = -1;
    
    for(int u = 0;u < n;u++){
      if(!used[u] && (v == -1 || d[u] < d[v])) v = u;
    }
    
    if(v == -1) break;
    used[v] = true;
    
    for(int u = 0;u < n;u++){
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }
}

int main(){
  
  int u, k, v, c;
  
  cin >> n;
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      cost[i][j] = INF;
    }
  }
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> v >> c;
      cost[u][v] = min(cost[u][v], c);
    }
  }
  
  dijkstra(0);
  
  for(int i = 0;i < n;i++) cout << i << " " << d[i] << endl;
  
  return 0;
}
