//#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
int INF = (1<<21);

void dijkstra(void);

int n;
int M[MAX][MAX];

int main(){
  int i,j;
  int c,k,u,v;
  cin >> n;
  for( i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      //M[i][j] = INFINITY;
      M[i][j] = INF;
    }
  }
  for(i = 0; i < n; i++){
    cin >> u;
    cin >> k;
    for(j = 0; j < k; j++){
      cin >> v;
      cin >> c;
      M[u][v] = c;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int minV;
  int d[MAX],color[MAX];
  int u,v;
  int i;
  for(i = 0; i < n; i++){
    //d[i] = INFINITY;
    d[i] = INF;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    //minV = INFINITY;
    minV = INF;
    u = -1;
    for(i = 0; i < n; i++){
      if(minV > d[i] && color[i] != BLACK){
        u = i;
        minV = d[i];
      }
    }
    if(u == -1){
      break;
    }
    color[u] = BLACK;
    for(v = 0; v < n; v++){
      //if(color[v] != BLACK && M[u][v] != INFINITY){
      if(color[v] != BLACK && M[u][v] != INF){
        if(d[v] > d[u] + M[u][v]){
          d[v] = d[u] + M[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
  for(i = 0; i < n; i++){
    //cout << i << " " << (d[i] == INFINITY ? -1 : d[i]) << endl;
    cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
  }
}