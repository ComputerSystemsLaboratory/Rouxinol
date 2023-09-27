#include <bits/stdc++.h>
using namespace std;
int64_t INF = (1 << 20);
int64_t N, MAXN = 10010;
vector< vector < pair<int64_t, int64_t> > > Edges(MAXN);

void dijkstra()
{
  priority_queue<pair<int64_t, int64_t>, vector<pair<int64_t, int64_t> >, greater<pair<int64_t, int64_t > > > PQ;
  vector<int64_t> Color(MAXN, 0), D(MAXN, INF); // 各点を無限大にする。

  D.at(0) = 0; // 始点を0とする。
  PQ.push(make_pair(0, 0));
  Color.at(0) = 1; // グレーの状態に

  while (!PQ.empty())
  {
    pair<int64_t, int64_t> f = PQ.top();
    PQ.pop();
    int64_t u = f.second; // 未決定の中で、最短経路の頂点
    Color.at(u) = 2;      // 決定済とする
    if (D.at(u) < f.first)
      continue;
    for (int i = 0; i < Edges.at(u).size(); i++)
    {
      int64_t v = Edges.at(u).at(i).first; // uからの辺の終点
      if (Color.at(v) == 2)
        continue;
      if (D.at(v) > D.at(u) + Edges.at(u).at(i).second) // uを経由した場合の距離
      {
        D.at(v) = D.at(u) + Edges.at(u).at(i).second;
        PQ.push(make_pair(D.at(v), v)); // 頂点vの暫定での距離、頂点vをペアにする
        Color.at(v) = 1;                // グレーにする
      }
    }
  }
  for (int i = 0; i < N; i++)
    cout << i << ' ' << (D.at(i) == INF ? -1 : D.at(i)) << endl;
}

int main()
{
  cin >> N;
  int k, u, v, c;
  for (int i = 0; i < N; i++)
  {
    cin >> u >> k;
    for (int j = 0; j < k; j++)
    {
      cin >> v >> c;
      Edges.at(u).push_back(make_pair(v, c));
    }
  }

  dijkstra();
}

