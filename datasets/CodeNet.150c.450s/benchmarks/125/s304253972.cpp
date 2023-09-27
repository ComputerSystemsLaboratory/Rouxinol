#include<stdio.h>
#include<algorithm>
#include<stack>
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
int d[MAX][2];
stack<int> depth;


void dfs() {
  int time = 1;
  for ( int i = 0; i < n; i++ ) {
    color[i] = WHITE;
  }
  depth.push(0);
  color[0] = GRAY;
  d[0][0] = time++;

  while (!depth.empty()) {
    int top = depth.top();

    int next = NIL;
    for (int i = 0; i < n; i++) {
      if (adm[top][i] == 1 && color[i] == WHITE) {
        next = i;
        depth.push(i);
        color[i] = GRAY;
        d[i][0] = time++;
        break;
      }
    }

    if (next == NIL) {
      color[top] = BLACK;
      d[top][1] = time++;
      depth.pop();
    }
    // WHITEになっている島を探す
    if (depth.empty()) {
      for (int i = 0; i < n; i++) {
        if (color[i] == WHITE) {
          depth.push(i);
          color[i] = GRAY;
          d[i][0] = time++;
          break;
        }
      }
    }

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

  dfs();

  for ( int i = 0; i < n; i++ ) {
    printf("%d %d %d\n", i+1, d[i][0], d[i][1]);
  }



  return 0;
}

