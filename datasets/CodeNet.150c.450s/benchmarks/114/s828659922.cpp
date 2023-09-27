#include<iostream>
using namespace std;

static const int MAX = 100;
static const int INF = (1<<30);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n,M[MAX][MAX];

int prim(){
  int u,minv,ii,vv;
  int d[MAX],p[MAX],color[MAX];

  //cout << "prim" << endl;
  //条件初期化
  for(ii=0;ii<n;ii++){
    d[ii] = INF;
    p[ii] = -1;
    color[ii] = WHITE;
  }

  d[0] = 0;

  while(1){

    minv = INF;
    u = -1;

    //起点の決定
    for(ii=0;ii<n;ii++){
      if(minv > d[ii] && color[ii] != BLACK){
        //cout << "ii:" << ii << endl;
        u = ii;
        minv = d[ii];
      }
    }

    if(u == -1){
      break;
    }

    //起点を探索済みに
    color[u] = BLACK;

    for(vv=0;vv<n;vv++){
      //未探索かつパスの繋っている位置
      if(color[vv] != BLACK && M[u][vv] != INF){
        if( d[vv] > M[u][vv]){
          d[vv] = M[u][vv];
          p[vv] = u;
          color[vv] = GRAY;
        }
      }
    }
  }

  int sum = 0;
  for(ii=0;ii<n;ii++){
    if(p[ii] != -1){
      sum += M[ii][p[ii]];
    }
  }
  
  return sum;
  
}

int main(){
  cin >> n;
  int ii,jj;

  for(ii=0;ii<n;ii++){
    for(jj=0;jj<n;jj++){
      int cost;
      cin >> cost;

      if(cost == -1){
        M[ii][jj] = INF;
      }
      else{
        M[ii][jj] = cost;
      }
    }
  }

  cout << prim() << endl;
  
}

