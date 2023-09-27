#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1000000
int cost[1000][1000];
int d[1000];
bool used[1000];
int V;

void dijkstra(int s){
 
  d[s] = 0;
  while(true){
    int v = -1;
    for(int u = 0 ; u <= V ; u++){
      if(!used[u] && (v == -1 || d[u] < d[v]))v = u;
    }

    if(v == -1) break;

    used[v] = true;

    for(int u = 0 ; u <= V ; u++ ){
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }
}

int main(){
  int u,v,c;
  int ans,ansi;
  int j;
  while( cin >> V, V) {
    int min = 100000000;

    for(int i = 0 ; i <= V ; i++ ){
      for(int j = 0 ; j <= V ; j++ ){
	cost[i][j] = INF;
      }
    }

    for(int i = 0 ; i < V ; i++){
      cin >> v >> u >> c;
      cost[v][u] = c;
      cost[u][v] = c;
    }
    for( j = 0; j < V ; j++){
      fill(d,d + (V+1) , INF);
      fill(used,used + (V+1),false);

      dijkstra(j);
      ans = 0;	
      for(int i = 0 ; i <= V ; i++){
	if(d[i] < INF)ans +=  d[i];
      }
      for(int i = 0 ; i <= V ; i++){

      }
      if(min > ans && ans != 0 ){
	min = ans;
	ansi = j;
      }
    }
    cout << ansi<<" "<< min << endl;
  }

}