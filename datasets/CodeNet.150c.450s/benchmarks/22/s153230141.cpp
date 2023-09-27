#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

template <typename T>
struct edge
{
    int src, to;
    T cost;
    edge(int to, T cost) : src(-1), to(to), cost(cost) {}
    edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}
    edge &operator=(const int &x)
    {
        to = x;
        return *this;
    }
    operator int() const { return to; }
};

template <typename T>
using Edges = vector<edge<T>>;

template <typename T>
using WeightedGraph = vector<Edges<T>>;

template <typename T>
using UnweightedGraph = vector<vector<T>>;

template <typename T>
using Matrix = vector<vector<T>>;

#include <vector>
#include <limits>

template <typename T>
vector<T> BellmanFrod(Edges<T> &edges, int N, int source)
{
    const auto INF = numeric_limits<T>::max();
    vector<T> dist(N, INF); //distance from source
    dist[source] = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (auto &e : edges)
        {
            if (dist[e.src] == INF)
                continue;
            dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
        }
    }

    // check for negative-weight cycles
    for (auto &e : edges)
    {
        if (dist[e.src] == INF)
            continue;
        if (dist[e.src] + e.cost < dist[e.to])
            return vector<T>();
    }
    dist.push_back(INF);
    return dist;
}

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    const auto INF = numeric_limits<int>::max();
    Edges<int> G;
    for (int i = 0; i < e; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        G.emplace_back(s, t, d);
    }
    auto dist = BellmanFrod(G, v, r);
    if (dist.size() == 0)
    {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < v; i++)
    {
        if (dist[i] == dist[v])
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << dist[i] << endl;
        }
    }
}
