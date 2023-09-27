#include<iostream>
using namespace std;
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[N][N];
int color[N],d[N],f[N],t;

void visit(int r){
  color[r] = GRAY;
  d[r] = ++t;
  for(int v=0;v<n;v++){
    if(M[r][v] == 0) continue;
    if(color[v] == WHITE) visit(v);
  }
  color[r] = BLACK;
  f[r] = ++t;
}


void dfs(){
  for(int u=0;u<n;u++) color[u] = WHITE;
  t = 0;

  for(int u=0;u<n;u++){
    if(color[u] == WHITE) visit(u);
  }

  for(int u=0;u<n;u++){
    cout << u+1 << " " << d[u] << " " << f[u] << endl;
  }
}

int main(){
  int u,v,k;

  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) M[i][j] = 0;
  }

  for(int i=0;i<n;i++){
    cin >> u >> k;
    u--;
    for(int j =0;j<k;j++){
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }

  dfs();
  
  return 0;
}

