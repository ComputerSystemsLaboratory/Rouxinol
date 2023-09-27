#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define WHITE 0
#define BLACK 1
#define INFTY 2001

// グラフの頂点数
int n;
// 隣接行列
vector<vector<int> > M(MAX, vector<int>(MAX));
// 頂点の状態を表す配列
vector<int> color(MAX, WHITE);
// d[v]はvとTの頂点を結ぶ辺の重みの最小値
vector<int> d(MAX, INFTY);
// p[v]はd[v]の重みを持つ辺のvでない方の頂点
vector<int> p(MAX, -1);

int mst()
{
  // 初期化
  int ans = 0;
  d.at(0) = 0;

  while (1)
  {
    // d[u]が最小であるようなV-Tの頂点uを選ぶ
    int u;
    int m = INFTY;
    for (int i = 0; i < n; i++)
    {
      if (color.at(i) != BLACK && d.at(i) < m)
      {
        m = d.at(i);
        u = i;
      }
    }

    if (m == INFTY)
    {
      // MNTが完成したとき
      break;
    }

    // uをTに追加する
    color.at(u) = BLACK;
    // uをTに追加したときの辺の重みをansに足す
    if (p.at(u) != -1)
    {
      ans += M.at(p.at(u)).at(u);
    }

    // uと隣接しているV-Tの各頂点iのd[i]を更新する
    for (int i = 0; i < n; i++)
    {
      if (color.at(i) != BLACK && M.at(u).at(i) != -1 && M.at(u).at(i) < d.at(i))
      {
        d.at(i) = M.at(u).at(i);
        p.at(i) = u;
      }
    }
  }

  return ans;
}

int main()
{
  // 入力
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> M.at(i).at(j);
    }
  }

  // 処理と出力
  cout << mst() << endl;
}
