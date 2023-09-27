// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
#include <iostream>
#include <cstdio>
#include <queue> // 入れた順番に出していく玉突き構造。
using namespace std;

int G[110][110];
int n;
int u, k, v;

/* void print_matrix(int N) {
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      printf("%d", G[i][j]);
      if (j < N-1) {
	printf(" ");
      }
    }
      printf("\n");
  }
} */

void make_matrix() {
  fill(&G[0][0], &G[0][0]+110*110, 0);
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d%d", &u, &k);
    u--;
    for (int j=0; j<k; j++) {
      scanf("%d", &v);
      v--;
      G[u][v] = 1;
    }
  }
}

int timer = 1; // timeだとエラーが出たので。
int d[110]; // 訪問時刻。ナマの数字を入れる。
int f[110]; // 終了時刻。ナマの数字を入れる。

void init() {
  fill(d, d+110, -1);
  fill(f, f+110, -1);
}

void dfs(int cur) { // curを訪問。
  d[cur] = timer;
  timer++;
  // cerr << "visiting " << cur << " at the time " << timer << endl;
  for (int i=1; i<=n; i++) { // 節点i
    if (G[cur-1][i-1] == 1 && d[i] == -1) {
      dfs(i);
    }
  }
  f[cur] = timer;
  timer++;
}

int main() {
  make_matrix();
  init();
  for (int i=1; i<=n; i++) {
    if (d[i] == -1) {
      dfs(i);
    }
  }
  for (int i=1; i<=n; i++) {
    printf("%d %d %d\n", i, d[i], f[i]);
  }
}