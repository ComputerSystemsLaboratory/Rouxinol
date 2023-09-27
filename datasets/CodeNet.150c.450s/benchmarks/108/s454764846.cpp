#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;
#define NIL -2000000001
#define MAX 101
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n = 0;
int adl[MAX][MAX], deg[MAX];
int adm[MAX][MAX];
int color[MAX];
int d[MAX];
queue<int> queueBfs;


void bfs() {
  for ( int i = 0; i < n; i++ ) {
    color[i] = WHITE;
    d[i] = -1;
  }
  queueBfs.push(0);
  color[0] = GRAY;
  d[0] = 0;

  while (!queueBfs.empty()) {
    int top = queueBfs.front();

    for (int i = 0; i < n; i++) {
      if (adm[top][i] == 1 && color[i] == WHITE) {
        queueBfs.push(i);
        color[i] = GRAY;
        d[i] = d[top]+1;
      }
    }

    queueBfs.pop();
  }
}

int main() {
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      adm[i][j] = 0;
    }
  }
  for ( int i = 0; i < n; i++ ) {
    int num;
    scanf("%d", &num);
    num--;
    scanf("%d", &deg[num]);
    for ( int j = 0; j < deg[num]; j++) {
      scanf("%d", &adl[num][j]);
      adl[num][j]--;
      adm[num][adl[num][j]] = 1;
    }
  }

  bfs();

  for ( int i = 0; i < n; i++ ) {
    printf("%d %d\n", i+1, d[i]);
  }



  return 0;
}

