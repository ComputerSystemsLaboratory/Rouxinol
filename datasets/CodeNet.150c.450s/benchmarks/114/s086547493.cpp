#include<bits/stdc++.h>
using namespace std;

#define INF 100000000

//訪問状態
#define White 0
#define Gray 1
#define Black 2

//Treeの状態を表した隣接行列
int Tree[100][100];
int sum = 0;

int prim(int n){
  int u, minv;
  //d = 見て来たノードの中から出る最小の辺を記録
  //p = MSTにおける頂点の親を記録
  int d[100], p[100], color[100];

  for(int i = 0 ; i < n ; i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = White;
  }

  d[0] = 0;

  while(1){
    minv = INF;
    u = -1;

    for(int i = 0 ; i < n ; i++){
      if(minv > d[i] && color[i] != Black){
	u = i ;
	minv = d[i];
      }
    }

    if(u == -1){
      break;
    }

    color[u] = Black;
    for(int v = 0 ; v < n ; v++){
      if(color[v] != Black && Tree[u][v] != INF){
	if(d[v] > Tree[u][v]){
	  d[v] = Tree[u][v];
	  p[v] = u;
	  color[v] = Gray;
	}
      }
    }
  }

  for(int i = 0 ; i < n ; i++){
    if(p[i] != -1) sum += Tree[i][p[i]];
  }

  return sum;

}

int main(){
  int n, status;

  cin >> n;

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      cin >> status;

      if(status == -1){
	Tree[i][j] = INF;
      }else{
	Tree[i][j] = status;
      }
    }
  }

  cout << prim(n) << endl;

  return 0;
}