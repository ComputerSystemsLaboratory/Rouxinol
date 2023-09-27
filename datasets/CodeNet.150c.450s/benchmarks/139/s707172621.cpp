#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  // 頂点数と辺数
  int N, M;
  cin >> N >> M;

  // グラフ入力受取 (ここでは無向グラフを想定)
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // sign[i]: 部屋iの道しるべが指す部屋の番号
  vector<int> sign(N, -1);

  // BFS のためのデータ構造
  vector<int> dist(N, -1);  // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0);  // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v =
        que.front();  // キューから先頭頂点を取り出す(front()では削除されない)
    que.pop();  // 先頭を削除

    // v から辿れる頂点をすべて調べる
    for (int nv : G[v]) {
      if (dist[nv] != -1) continue;  // すでに発見済みの頂点は探索しない

      // signを追加
      sign[nv] = v;

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  for (int i = 1; i < N; i++) {
    if (sign[i] == -1) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  for (int i = 1; i < N; i++) {
    cout << ++sign[i] << endl;
  }
}