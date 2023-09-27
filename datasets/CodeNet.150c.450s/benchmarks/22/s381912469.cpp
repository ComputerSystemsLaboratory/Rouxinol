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

std::pair<bool,vec<ll>> BellmanFord(const vec<vec<Edge>>& edges, int begin)
{
    using namespace std;

    const int n = edges.size();

    vec<ll> dist(n, inf<ll>);
    dist[begin] = 0;

    auto pass = [&edges, &dist]()
    {
        for (const auto& edge : edges)
            for (const auto& e : edge)
            {
                if (dist[e.from] == inf<ll>) continue;
                dist[e.to] = min(dist[e.to], dist[e.from] + e.d);
            }
    };

    for (int i = 0; i < n - 1; ++i)
        pass();

    auto checkDist = dist;
    pass();

    bool positive = equal(checkDist.cbegin(), checkDist.cend(), dist.cbegin());

    return make_pair<bool, vec<ll>>(move(positive), move(dist));
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

    auto dist = BellmanFord(edges, r);

    if (dist.first)
        for (auto d : dist.second)
        {
            if (d == inf<ll>)
                cout << "INF" << endl;
            else
                cout << d << endl;
        }
    else
        cout << "NEGATIVE CYCLE" << endl;
}

int main()
{
    solve();
    return 0;
}
