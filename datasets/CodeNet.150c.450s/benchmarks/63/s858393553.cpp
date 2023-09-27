// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
// Dijkstra法を用いた解法

// priority_queueに詰め込んでいき、重複したものを取り出したら捨てればいいという考えは思いつかなかった。priority_queueは「上澄みを取るだけの装置」と割りきっておくのが大事だった。
// また vector の使い方がわかっていなかったので、この機会に参考書で調べた。隣接リストを配列で作るとメモリが足りなくなりそうだが vector なら問題ない…ということも納得した。

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int V, E, r, s, t, d;

vector<pair<int,int>> edges[100010]; // 隣接リスト(コスト付き)

long long infty = 10000*100000+100; // C[]はlong longを入れる。
priority_queue<pair<long long,int>> Q; // firstは上限の-1倍。secondは都市。
long long C[100010]; // 最小距離の上限を動的に入れる。
bool S[100010]; // 最小距離が確定したか？

int main() {
  // 初期化
  for (int i=0; i<100010; i++) {
    C[i] = infty;
    S[i] = false;
  }
  // 入力
  scanf("%d%d%d", &V, &E, &r);
  for (int i=0; i<E; i++) {
    scanf("%d%d%d", &s, &t, &d);
    edges[s].push_back(make_pair(t, d));
    // cerr << "edges[" << s << "][" << t << "] = " <<  edges[s][t] << endl;
  }
  // 優先度付きキューに初期状態を入れる。
  Q.push(make_pair(0, r));
  // Dijkstra法。
  while (!Q.empty()) {
    int u = Q.top().second;
    int tempC = -1 * Q.top().first;
    Q.pop();
    if (!S[u]) { // すでに最小距離確定した点は捨てる。
      C[u] = tempC;
      S[u] = true;
      // ここから緩和
      for (vector<pair<int,int>>::size_type i=0; i<edges[u].size(); i++) {
	int v = edges[u][i].first;
	int tempD = edges[u][i].second;
	if (!S[v] && C[v] > C[u] + tempD) {
	  C[v] = C[u] + tempD;
	  Q.push(make_pair(-1 * C[v], v)); // 緩和したものだけ入れれば十分。
	}
      }
    }
  }
  // 答えの出力。
  for (int i=0; i<V; i++) {
    if (C[i] < infty) {
      printf("%lld\n", C[i]);
    } else {
      printf("INF\n");
    }
  }
}