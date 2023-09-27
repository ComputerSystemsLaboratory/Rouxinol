#include <iostream>
#include <queue>

using namespace std;

#define MAX 100
#define INF -1

int n;
int G[MAX][MAX];
int dist[MAX];

void bfs(){
  bool used[MAX];
  fill(dist,dist+n,INF);
  fill(used,used+n,false);
  dist[0] = 0;
  used[0] = true;

  queue<int> Q;
  Q.push(0);

  while(!Q.empty()){
    int v = Q.front(); Q.pop();

    for(int i = 0 ; i < n ; i++){
      if(!used[i] && G[v][i]){
	used[i] = true;
	dist[i] = dist[v] + 1;
	Q.push(i);
      }
    }
  }
}

int main(){
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    int u,k,v;
    cin >> u >> k;
    for(int j = 0 ; j < k ; j++){
      cin >> v;
      G[u-1][v-1] = 1;
    }
  }

  bfs();

  for(int i = 0 ; i < n ; i++){
    cout << i+1 << " " << dist[i] << endl;
  }

  return 0;
}