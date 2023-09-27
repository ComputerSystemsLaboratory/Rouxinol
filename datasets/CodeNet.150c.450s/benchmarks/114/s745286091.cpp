#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;
#define NIL -2000000001
#define INFTY 2000000001
#define MAX 101
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n = 0;
int adm[MAX][MAX];
int color[MAX];
int d[MAX], p[MAX];
queue<int> queueBfs;


int mst() {
  int sum = 0;
  for ( int i = 0; i < n; i++ ) {
    color[i] = WHITE;
    d[i] = INFTY;
    p[i] = -1;
  }
  d[0] = 0;

  while (true) {
    int mincost = INFTY;
    int u; //訪問する頂点

    for (int i = 0; i < n; i++) {
      if (color[i] != BLACK && d[i] < mincost) {
        mincost = d[i];
        u = i;
      }
    }
    if (mincost == INFTY) break;
    sum += mincost;
    color[u] = BLACK;

    // u周りの頂点vの情報を入れる
    for (int v = 0; v < n; v++) {
      if (color[v] != BLACK && adm[u][v] != -1 && adm[u][v] < d[v]) {
        d[v] = adm[u][v];
        p[v] = u;
        color[v] = GRAY;
      }
    }
  }

  return sum;
}

int main() {
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++) {
      scanf("%d", &adm[i][j]);
    }
  }

  printf("%d\n", mst());
  
  return 0;
}

