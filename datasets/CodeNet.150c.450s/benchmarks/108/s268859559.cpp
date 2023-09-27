#include<bits/stdc++.h>
using namespace std;

#define INF 100000000
int n;
int Graph[100][100] = {};

int color[100] = {}, d[100];

void bfs(int x){
  int u;
  queue<int> Q; //queueを生成
  Q.push(x); //始点をキューに積む
  for(int i = 0 ; i < n ; i++){
    d[i] = INF;
  }

  d[x] = 0; //始点を0にする
  
  while(!Q.empty()){
    u = Q.front(); //取り出して削除
    Q.pop();
    for(int v = 0 ; v < n ; v++){
      if(Graph[u][v] == 0) continue;
      if(d[v] != INF) continue;
      d[v] = d[u] + 1;
      Q.push(v); //次点を積む
    }
  }

  for(int i = 0 ; i < n ; i++){
    cout << i + 1 << " ";
    if(d[i] == INF){
      cout << -1 <<endl;
    }else{
      cout << d[i] << endl;
    }
  }
}


int main(){
  int u, k, v; //u = 頂点番号 k = 出次数 v = u に隣接する頂点番号

  cin >> n;
     
  for(int i = 0 ; i < n ; i++){
    cin >> u >> k; 
    u--;
    for(int j = 0 ; j < k ; j++){
      cin >> v; 
      v--;
      Graph[u][v] = 1;
    }
  }

  bfs(0);
     
  return 0;
}