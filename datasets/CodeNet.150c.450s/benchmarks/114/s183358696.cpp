#include <bits/stdc++.h>
using namespace std;

#define INF (1<<29)

int G[100][100], n;

int prim(){
  int p[100], d[100], c[100];
  int u;

  for(int i = 0; i < n; i++){
    d[i] = INF;
    p[i] = -1;
    c[i] = 0;
  }

  d[0] = 0;

  while(1){
    int minv = INF;
    u = -1;
    for(int i = 0; i < n; i++){
      if(minv > d[i] && c[i] != 2){
        u = i;
        // cout << u << endl;
        minv = d[i];
      }
    }

    if(u == -1) break;
    c[u] = 2;
    for(int v = 0; v < n; v++){
      if(c[v] != 2 && G[u][v] != INF){
        if(d[v] > G[u][v]){
          d[v] = G[u][v];
          p[v] = u;
          c[v] = 1;
        }
      }
    }
  }

  int sum = 0;
  for(int i = 0; i < n; i++){
    if(p[i] != -1) sum+=G[i][p[i]];
    // cout << p[i] << endl;
  }
  return sum;
}


  int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        int v;
        cin >> v;
        G[i][j] = v;
        if(v == -1) G[i][j] = INF;
      }
      // cout << endl;
    }

    cout << prim() << endl;

  }