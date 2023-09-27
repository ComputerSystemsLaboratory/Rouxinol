#include <iostream>
#include <vector>
#include <numeric>
#include <utility>
#include <cmath>
#include <algorithm>
#include <queue>

using ll = long long;

template <class T>
using vec = std::vector<T>;

template <class T>
constexpr T nil = static_cast<T>(-1);

template <class T>
constexpr T inf = std::numeric_limits<T>::max() / 2;


struct Edge
{
    int from, to;
    ll d;
};

auto Dijkstra(const vec<vec<Edge>>& edges,int begin)
{
    using namespace std;

    auto c = [](Edge e1, Edge e2) { return e1.d > e2.d; };
    priority_queue<Edge, vector<Edge>, decltype(c)> q(c);

    vec<ll> dist(edges.size() ,inf<ll>);
    vec<bool> reached(edges.size(), false);
    
    auto markAndPush = [&reached, &q, &edges, &dist](int v)
    {
        reached[v] = true;
        for (const auto& e : edges[v])
        {
            q.push({e.from, e.to, dist[e.from] + e.d});
        }
    };

    dist[begin] = 0;
    markAndPush(begin);

    while (!q.empty())
    {
        auto e = q.top(); q.pop();
        if (reached[e.to]) continue;

        dist[e.to] = e.d;
        markAndPush(e.to);
    }

    return dist;
}

void solve()
{
    using namespace std;

    int n, m, r;
    cin >> n >> m >> r;

    vec<vec<Edge>> edges(n);

    for (int i = 0, from, to, d; i < m; ++i)
    {
        cin >> from >> to >> d;
        edges[from].push_back({from, to, d});
    }

    auto dist = Dijkstra(edges, r);

    for (auto d : dist)
        if (d == inf<ll>)
            cout << "INF" << endl;
        else
            cout << d << endl;
}

int main()
{
    solve();
    return 0;
}
