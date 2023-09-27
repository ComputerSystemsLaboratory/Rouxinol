#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;

static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, Adj_Marix[MAX][MAX];

void dijkstra(){
  int minv;
  int distance[MAX], color[MAX];
  //init
  for(int i=0;i<n; i++){
    distance[i] = INF;
    color[i] = WHITE;
  }
  distance[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INF;
    int u  = -1;
    // Find next point
    for(int i =0; i<n; i++){
      if( minv > distance[i] && color[i] != BLACK){
        u = i;
        minv = distance[i];
      }
    }
    //if cant find next point
    if(u == -1) break;
    // Refresh dictance for adj points
    color[u] = BLACK;
    for(int v=0; v<n; v++){
      if(color[v] != BLACK && Adj_Marix[u][v] != INF){
        if(distance[v] > distance[u] + Adj_Marix[u][v]){
          distance[v] = distance[u] + Adj_Marix[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
  for(int i =0; i<n; i++){
    cout << i << " " << (distance[i] == INF ? -1: distance[i] ) << endl;
  }
}

int main(){

  cin >> n;
  rep(i,n){
    rep(j,n){
      Adj_Marix[i][j] = INF;
    }
  }

  int k, c, u, v;
  rep(i,n){
    cin >> u >> k;
    rep(j,k){
      cin >> v >> c;
      Adj_Marix[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}
