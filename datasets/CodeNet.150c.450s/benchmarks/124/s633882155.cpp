#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>

//TODO

template <class T>
using vec = std::vector<T>;

constexpr int nil = -1;
constexpr int inf = 1 << 30;

struct Edge
{
    int to;
    int cost;
};

vec<int> dijkstra(const vec<vec<Edge>>& edges)
{
    using namespace std;

    const int n = edges.size();
    vec<int> distances(n, inf);
    vec<bool> reached(n, false);

    distances[0] = 0;

    while (true)
    {
        int minCost {inf};
        int u {};

        for (int i = 0; i < n; ++i)
        {
            if (!reached[i] && distances[i] < minCost)
            {
                minCost = distances[i];
                u = i;
            }
        }

        if (minCost == inf)
            break;
        
        reached[u] = true;

        for (auto& e : edges[u])
        {
            distances[e.to] = min(distances[e.to], distances[u] + e.cost);
        }
    }

    return distances;
}

void solve()
{
    using namespace std;
    int n;
    cin >> n;

    //隣接リスト形式
    vec<vec<Edge>> edges(n);
    
    //入力
    for (int i = 0; i < n; ++i)
    {
        int v, k;
        cin >> v >> k;
        for (int j = 0; j < k; ++j)
        {
            int to, cost;
            cin >> to >> cost;
            edges[i].push_back({to, cost});
        }
    }

    auto d = dijkstra(edges);

    for (int i = 0; i < n; ++i)
    {
        cout << i << " " << d[i] << endl;
    }
}

int main()
{
    solve();
    return 0;
}
