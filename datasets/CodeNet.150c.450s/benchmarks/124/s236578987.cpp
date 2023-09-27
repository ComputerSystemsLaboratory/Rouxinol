#include<bits/stdc++.h>
using namespace std;

#define INF 100000000

#define White 0
#define Gray 1
#define Black 2

//重み付き隣接行列
int Tree[100][100];

//ダイクストラ

void dijkstra(int n){
  int u,minv; 

  //d = 最短コスト
  //p = 頂点vの親
  int d[100], p[100], color[100];

  //初期化

  for(int i = 0 ; i < n ; i++){
    d[i] = INF;
    color[i] = White;
  }

  d[0] = 0;
  p[0] = -1;
  color[0] = Gray;

  while(1){
    u = -1;
    minv = INF;

    for(int i = 0 ; i < n ; i++){
      if(minv > d[i] && color[i] != Black){
	u = i;
	minv = d[i];
      }
    }

    if(u == -1){
      break;
    }

    color[u] = Black;

    //地点の更新

    for(int v = 0 ; v < n ; v++){
      if(color[v] != Black && Tree[u][v] != INF){
	if(d[v] > d[u] + Tree[u][v]){
	  d[v] = d[u] + Tree[u][v];
	  color[v] = Gray;
	}
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    cout << i << " ";
    if(d[i] == INF){
      cout << -1;
    }else{
      cout << d[i];
    }

    cout << endl;
  }
}

int main(){
  int n;
  int k, c, u, v;
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      Tree[i][j] = INF;
    }
  }

  for(int i = 0 ; i < n ; i++){
    cin >> u >> k;
    for(int j = 0 ; j < k ; j++){
      cin >> v >> c;
      Tree[u][v] =c;
    }
  }

  dijkstra(n);

  return 0;
}