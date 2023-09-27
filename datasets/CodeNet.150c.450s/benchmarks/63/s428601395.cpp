// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A

#include <iostream>
#include <cstdio>
using namespace std;

int V, E, r, s, t, d;
// int K[100010][100010]; 隣接行列を使おうと思ったがメモリが怖い。
// ので、structの配列で、隣接配列を使ってみようと思う。

struct Edge {
  int cur;
  int dst;
  int cost;
};

Edge edges[500010];

long long infty = 10000*100000+100; // ゆえにC[]はlong longを入れる。
long long C[100010]; // 最短コストの「上限」。最終的には答えが入る。

int main() {
  // 初期化
  for (int i=0; i<100010; i++) {
    C[i] = infty;
  }
  // 入力
  scanf("%d%d%d", &V, &E, &r);
  for (int i=0; i<E; i++) {
    scanf("%d%d%d", &s, &t, &d);
    edges[i] = { s, t, d };
  }
  // Bellman-Ford
  C[r] = 0; // 始点はコスト0。
  for (int i=0; i<V-1; i++) { // V-1回繰り返す。iには「特別な」意味はない。
    int change = 0; // 最短経路がV-1個の頂点をつないでいる確率は低い。更新しなくてよくなったらもう繰り返さない。
    for (int j=0; j<E; j++) { // すべての頂点に対し
      if (C[edges[j].dst] > C[edges[j].cur] + edges[j].cost) {
	C[edges[j].dst] = C[edges[j].cur] + edges[j].cost;
	change++;
      }
    }
    if (change == 0) {
      break;
    }
  }
  for (int i=0; i<V; i++) {
    if (C[i] < infty) {
      printf("%lld\n", C[i]);
    } else {
      printf("INF\n");
    }
  }
}