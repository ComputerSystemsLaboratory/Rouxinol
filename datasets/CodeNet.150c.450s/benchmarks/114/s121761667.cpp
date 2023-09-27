#include <iostream>
using namespace std;

int n;
int M[100][100];

int prim(){
  int d[100]; //最小コスト
  int color[100];
  int p[100];
  for(int i=0;i<n;i++){
    d[i] = (1 << 21);
    color[i] = 0;
    p[i] = -1;
  }
  d[0] = 0;
  p[0] = 0;

  int mincost;
  int u;
  int cost = 0;

  while(true){
    mincost = (1 << 21);
    for(int i=0;i<n;i++){
      if(color[i] != 2 && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }

    if(mincost == (1 << 21)) break;

    color[u] = 2;
    cost += mincost;

    // uと隣接する頂点についてdの更新
    for(int i=0;i<n;i++){
      if(M[u][i] != -1 && color[i] != 2 && M[u][i] < d[i]){
        d[i] = M[u][i];
        p[i] = u;
        color[i] = 1;
      }
    }
  }
  return cost;
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> M[i][j];
    }
  }
  cout << prim() << endl;
  return 0;
}

