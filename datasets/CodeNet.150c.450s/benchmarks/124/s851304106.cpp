#include <iostream>

using namespace std;

int n;
int a[124][124] = {{}};
static const int INFTY = 1000000;

void dijkstra(){
  int flag[124] = {};
  int d[124] = {};
  int p[124] = {};
  int minv;
  int u;

  for (int i = 0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
  }
  d[0] = 0;
  while(1){
    minv = INFTY;
    u = -1;

    for(int i = 0;i < n;i++){
      if(flag[i] == 0 && minv > d[i]){
        minv = d[i];
        u = i;
      }
    }
  //  cout << "u = " << u << endl;
  //  cout << "minv = " << minv << endl;
    if(u == -1) break;
    flag[u] = 1;

    for(int i = 0;i < n;i++){
      if(d[i] > d[u] + a[u][i] && a[u][i] != INFTY && flag[i] == 0){
        d[i] = d[u] + a[u][i];
        p[i] = u;
      }
    }
  }

  for(int i = 0;i < n;i++){
    if(d[i] != -1){
      cout << i <<  " " << d[i] << endl;
    }
    else cout << i << " " << -1 << endl;
  }
}



int main(){

  cin >> n;

  for (int i = 0 ;i < n;i++){
    for(int j = 0;j < n;j++){
      a[i][j] = INFTY;
    }
  }


  int u;
  int k;
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for (int j = 0;j < k;j++){
      int v;
      cin >> v;
      cin >> a[u][v];
    }
  }
  dijkstra();
}