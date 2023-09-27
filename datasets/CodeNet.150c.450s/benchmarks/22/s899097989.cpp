#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using P = pair<int, int>;
constexpr int INF = numeric_limits<int>::max() / 2;

struct Edge
{
    int from, to, cost;
    Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;

// 単一始点最短経路 最悪O(EV) だが bellmann-ford より速い
// O(E) になったりならなかったりする. 負閉路もok
std::vector<int> spfa(const Graph &g, int s)
{
    int n = g.size();
    std::vector<int> d(n, INF);
    std::vector<int> in_q(n, 0), count(n, 0);
    std::queue<int> que;
    d[s] = 0;
    que.push(s);
    in_q[s] = 1;
    count[s]++;
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        in_q[v] = 0;
        for (const auto &e : g[v])
        {
            if (d[v] != INF && d[e.to] > d[v] + e.cost)
            {
                d[e.to] = d[v] + e.cost;
                if (!in_q[e.to])
                {
                    que.push(e.to);
                    in_q[e.to] = 1;
                    if (++count[e.to] >= n)
                    {
                        return std::vector<int>();
                    }
                }
            }
        }
    }
    return d;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        g[s].push_back(Edge{s, t, d});
    }
    vector<int> d = spfa(g, r);
    if (d.size() == 0)
        cout << "NEGATIVE CYCLE" << endl;
    else
    {
        for (int i = 0; i < V; i++)
        {
            cout << (d[i] == INF ? "INF" : to_string(d[i])) << endl;
        }
    }
}
