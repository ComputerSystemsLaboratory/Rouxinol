#include <bits/stdc++.h>
using namespace std;
#define MAX 101
#define INF 100100

static const int WHITE = 0; //not visited
static const int GRAY = 1; //visited
static const int BLACK = 2;

int n, M[MAX][MAX];
int color[MAX];
int dist_from_start[MAX];
int parent_node[MAX];

void dijkstra(int start) {
  //initialize
  for (int i = 1; i <= n; i++) {
    color[i] = WHITE;
    dist_from_start[i] = INF;
    parent_node[i] = -1;
  }

  dist_from_start[start] = 0;
  color[start] = GRAY;

  while (true) {
    int mincost = INF;
    int now = -1;

    //初回はmincost = 0になる(始点)
    for (int i = 1; i <= n; i++) {
      if (color[i] != BLACK && dist_from_start[i] < mincost) {
        mincost = dist_from_start[i];
        now = i;
      }
    }

    if (now == -1) break;

    color[now] = BLACK;

    for (int v = 1; v <= n; v++) {
      if (color[v] != BLACK && M[now][v] != INF) {
        if (dist_from_start[now] + M[now][v] < dist_from_start[v]) {
          dist_from_start[v] = dist_from_start[now] + M[now][v];
          parent_node[v] = now;
          color[v] = GRAY;
        }
      }
    }
  }

  for (int i = 1; i <= n; i++) cout << i-1 << " " << (dist_from_start[i] == INF ? -1 : dist_from_start[i]) << endl;
}

int main() {
  cin >> n;

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      M[i][j] = INF;
    }
  }

  int u, k;
  for (int i = 1; i <= n; i++) {
    cin >> u >> k;
    for (int j = 1; j <= k; j++) {
      int v, t;
      cin >> v >> t;
      M[u+1][v+1] = t;
    }
  }

  dijkstra(1);

  return 0;
}

