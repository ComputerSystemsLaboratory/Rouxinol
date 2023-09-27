// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
#include <iostream>
#include <cstdio>
#include <queue> // 入れた順番に出していく玉突き構造。
using namespace std;

int G[110][110];
int n;
int u, k, v;

void print_matrix(int N) {
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      printf("%d", G[i][j]);
      if (j < N-1) {
	printf(" ");
      }
    }
      printf("\n");
  }
}

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

void bfs(int src) {
  // cerr << "bfs root is " << src << endl;
  queue<int> Q; // 整数管理用(ナマの番地に入れる(-1しない))
  int D[110]; // 距離管理用(ナマの番地に入れる)
  fill(D, D+110, -1);
  D[src] = 0;
  Q.push(src); // rootだけは入れる。
  while (! Q.empty()) {
    int cur = Q.front(); // 先頭要素を取り出す。
    Q.pop(); // 先頭要素を消す。
    // cerr << "visiting " << cur << " whose dist is " << D[cur] << endl;
    for (int i=1; i<=n; i++) { // i:訪問先
      if (G[cur-1][i-1] == 1 && D[i] == -1) {
	D[i] = D[cur] + 1;
	Q.push(i);
      }
    }
  }
  for (int i=1; i<=n; i++) {
    printf("%d %d\n", i, D[i]);
  }
}

int main() {
  make_matrix();
  bfs(1);
}