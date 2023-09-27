#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define WHITE 0
#define BLACK 1
#define INFTY 100000001

// グラフの頂点数
int n;
// 隣接行列
vector<vector<int> > M(MAX, vector<int>(MAX, -1));
// 頂点の状態を表す配列
vector<int> color(MAX, WHITE);
// d[v]は始点sからS内の点のみを通ってvに行く経路の最小コスト
vector<int> d(MAX, INFTY);

void dijkstra()
{
  // 初期化
  d.at(0) = 0;

  // 初期状態でSの頂点数は0
  while (1)
  {
    // uはV-Sの頂点でd[u]が最小となるもの
    int u;
    int m = INFTY;
    for (int i = 0; i < n; i++)
    {
      // dが未設定の頂点については条件式の右の条件ではじかれる
      if (color.at(i) == WHITE && d.at(i) < m)
      {
        m = d.at(i);
        u = i;
      }
    }

    if (m == INFTY)
    {
      // V=Sとなったとき
      break;
    }

    // uをSに追加する
    color.at(u) = BLACK;

    // uに隣接するV-Sの頂点のdを更新する
    for (int i = 0; i < n; i++)
    {
      if (M.at(u).at(i) != -1 && color.at(i) == WHITE)
      {
        // iはuと隣接しているV-Sの頂点
        d.at(i) = min(d.at(i), d.at(u) + M.at(u).at(i));
      }
    }
  }
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int u, m;
    cin >> u >> m;
    for (int j = 0; j < m; j++)
    {
      int v, c;
      cin >> v >> c;
      M.at(u).at(v) = c;
    }
  }

  dijkstra();

  for (int i = 0; i < n; i++)
  {
    cout << i << " " << d.at(i) << endl;
  }
}
