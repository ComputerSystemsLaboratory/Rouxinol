//幅優先探索 BFS bfs

#include <bits/stdc++.h>
#define rep(i,N) for (int i = 0; i < (N); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int inf{int(1e9)};

vector <int> to[100100];  //グラフを格納（頂点数 x 0の二次元配列）

int main(void){
  int N, M;
  cin >> N >> M;
  rep(i,M){
    int a, b;
    cin >> a >> b;
    a --; b --;
    //to[i]にはiにつながっている頂点のリストが入る
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue <int> q;
  vector <int> dist(N, inf);  //入口からの距離（本当はこの問題では不要）
  vector <int> pre(N, -1);  //前の頂点

  //初期条件
  dist[0] = 0;
  q.push(0);

  while (!q.empty()){
    int v = q.front();  //queueから先頭頂点を取り出す
    q.pop();

    // vから辿れる頂点をすべて調べる
    for (int u : to[v]){
      if (dist[u] != inf) continue;  //すでに発見済みの頂点は探索しない
      dist[u] = dist[v] + 1;
      pre[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i,N){
    if (i == 0) continue;
    int ans = pre[i];
    ans++;
    cout << ans << endl;
  }
  return 0;
}
