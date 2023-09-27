#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;
static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, Adjacency_Matrix[MAX][MAX];

int prim(){
  int u, minv;
  int d[MAX], p[MAX], color[MAX];
  // init
  for(int i = 0;i < n; i++){
    d[i] = INF;
    p[i]= -1;
    color[i] = WHITE;
  }

  d[0] = 0;
  while(1){
    minv = INF;
    u = -1;
    for(int i = 0; i<n;i++){
      if(minv > d[i] && color[i] != BLACK){
        u = i;
        minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(int v = 0; v < n; v++){
      if(color[v] != BLACK && Adjacency_Matrix[u][v] != INF){
        if(d[v] > Adjacency_Matrix[u][v]){
          d[v] = Adjacency_Matrix[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
    int sum = 0;
    for(int i = 0;i<n; i++){
      if(p[i] != -1) sum += Adjacency_Matrix[i][p[i]];
    } 
    return sum;
}


int main(){
  cin >> n;

  for(int i =0; i<n; i++){
    for(int j=0; j<n; j++){
      int e;
      cin >> e;
      Adjacency_Matrix[i][j] = (e== -1) ? INF : e;
    }
  }

  cout << prim() << endl;

  return 0;
}
