#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
#define NIL -2000000001
#define MAX 100000

int n, m;
int color[MAX];
int d[MAX];
int colorId = 0;
vector<int> G[MAX];
queue<int> queueBfs;


void assignColor() {
  queueBfs.push(0);
  color[0] = colorId;

  while (!queueBfs.empty()) {
    int front = queueBfs.front();

    int next = NIL;
    for (int i = 0; i < G[front].size(); i++) {
      if (color[G[front][i]] == NIL) {
        next = G[front][i];
        queueBfs.push(G[front][i]);
        color[G[front][i]] = colorId;
      }
    }
    queueBfs.pop();

    // NILになっている島を探す
    if (queueBfs.empty()) {
      for (int i = 0; i < n; i++) {
        if (color[i] == NIL) {
          queueBfs.push(i);
          colorId++;
          color[i] = colorId;
          break;
        }
      }
    }

  }
}

int main() {
  scanf("%d %d", &n, &m);
  for ( int i = 0; i < n; i++ ) color[i] = NIL;
  for ( int i = 0; i < m; i++ ) {
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    G[v1].push_back(v2);
    G[v2].push_back(v1);
  }

  // for ( int i = 0; i < n; i++ ) {
  //   for ( int j = 0; j < G[i].size(); j++ ) printf("%d ", G[i][j]);
  //   printf("\n");
  // }

  assignColor();

  int q;
  scanf("%d", &q);
  int v1[q], v2[q];
  for ( int i = 0; i < q; i++ ) {
    scanf("%d %d", &v1[i], &v2[i]);
  }

  for ( int i = 0; i < q; i++ ) {
    if (color[v1[i]] == color[v2[i]]) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}

