#include <bits/stdc++.h>
const int INF = 500000;
using namespace std;

int main(void){
  bool used[100];
  int n, G[100][100], p[100];
  cin >> n;
  for(int i=0; i < 100; i++){
    used[i] = false;
    for(int j=0; j < 100; j++){
      G[i][j] = INF;
    }
  }
  for(int i=0; i < n; i++){
    int vtmp, k;cin >> vtmp >> k;
    for(int j=0; j < k; j++){
      int v, c; cin >> v >> c;
      G[vtmp][v] = c;   
    }
  }

  int d[100];
  for(int i=0; i < n; i++){
    d[i] = INF;
  }
  d[0] = 0;

  while(1){
    int mind = INF;
    int minind = -1;
    for(int j=0; j < n; j++){
      if(used[j] == false && d[j] < mind){
        mind = d[j]; minind = j;
      }
    }
    if(minind == -1) break;
    used[minind] = true;
    for(int j=0; j < n; j++){
      if(used[j] == false && G[minind][j] != INF){
        if(d[minind] + G[minind][j] < d[j]){
          d[j] = d[minind] + G[minind][j];
          p[j] = minind;
        }
      }
    }
  }
  for(int i=0; i < n; i++){
    cout << i << " " << d[i] << endl;
  }

  return 0;
}