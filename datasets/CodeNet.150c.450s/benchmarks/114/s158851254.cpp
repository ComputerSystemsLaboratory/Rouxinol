#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define REP2(i,x,n) for (int i = x; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);
static const int INF = 1e9+7;

/*
  最小全域木

  重み付きグラフの最小全域木の辺の重みの総和を計算する．
  最小全域木とは？：グラフで，すべての頂点に到達できるものの中で，　辺の重みが最小のもの
  プリムのアルゴリズム

*/

static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY= 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim(){
  int u, minv;
  int d[MAX], p[MAX], color[MAX];
  //d: MSTに属する頂点とそれ以外の頂点の中で，重みが最小の辺の重み
  //p: p[v]  MSTにおける頂点vの親
  //color 訪問状態

  //初期化
  for(int i = 0; i < n; i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while( true ){
    minv = INFTY;
    u = -1;
    for(int i = 0; i < n; i++){
      if(minv > d[i] && color[i] != BLACK){
        u = i;
        minv = d[i];
      }
    }
    if( u == -1 ) break;
    color[u] =  BLACK;
    for(int v = 0; v < n; v++){
      if( color[v] != BLACK && M[u][v] != INFTY){
        if( d[v] > M[u][v] ){
          d[v] = M[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
  int sum = 0;
  for( int i = 0; i < n; ++i ){
    if( p[i] != -1 ) sum += M[i][p[i]];
  }
  return sum;
}


int main(){
  cin >> n;

  //入力
  REP(i,n)REP(j,n){
    int e;
    cin >> e;
    if(e == -1) M[i][j] = INFTY;
    else M[i][j] = e;
  }

  cout << prim() << endl;

  return 0;
}

