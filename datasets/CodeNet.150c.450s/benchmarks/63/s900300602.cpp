#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    long long to;
    long long cost;
};
using Graph = vector<vector<Edge>>;
using P = pair<long, int>;
const long long INF = 1LL <<60;

void dijkstra(const Graph &G, int s, vector<long long> &dis)
{
    int N = G.size();
    dis.resize(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq; //「仮の最短距離，頂点」が小さい順に並ぶ
    dis[s] = 0;
    pq.emplace(dis[s], s); // priority_queueの要素型のコンストラクタ引数をとり直接構築でpriority_queueに要素を追加する
    while (!pq.empty())
    {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (dis[v] < p.first) continue;
        for (auto &e : G[v])
        {
            if (dis[e.to] > dis[v] + e.cost)
            {
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }

}

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    // 入力よりグラフの作成
    Graph g(v);
    for (int i=0; i<e; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        Edge edge;
        edge.cost = d;
        edge.to = t;
        g[s].push_back(edge);
    }
    vector<long long> dis(v, INF);
    dijkstra(g, r, dis);
    for (int i=0; i<v; i++)
    {
        if (dis[i]<INF) cout << dis[i] << endl;
        else cout << "INF" << endl;
    }
}
