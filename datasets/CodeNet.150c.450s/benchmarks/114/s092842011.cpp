#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>

template <class T>
using vec = std::vector<T>;

constexpr int nil = -1;
constexpr int inf = 1 << 30;

struct Edge
{
    int to;
    int cost;
};

int prim(const vec<vec<Edge>>& edges)
{
    const int n = edges.size();
    vec<bool> reached(n);
    vec<int> parents(n, nil);
    vec<int> distances(n, inf);

    distances[0] = 0;

    while (true)
    {
        int minCost {inf};
        int u {};
        
        for (int i = 0; i < n; ++i)
        {
            if (!reached[i] && distances[i] < minCost)
            {
                u = i;
                minCost = distances[i];
            }
        }
        
        if (minCost == inf)
            break;

        reached[u] = true;

        for (auto e : edges[u])
        {
            if (!reached[e.to])
            {
                if (e.cost < distances[e.to])
                {
                    distances[e.to] = e.cost;
                    parents[e.to] = u;
                }
            }
        }
    }

    int sum = std::accumulate(distances.begin(), distances.end(), 0);

    return sum;
}

void solve()
{
    using namespace std;
    int n;
    cin >> n;

    //隣接リスト形式
    vec<vec<Edge>> edges(n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0, cost; j < n; ++j)
        {
            cin >> cost;
            if (cost != -1)
                edges[i].push_back({j, cost});
        }
    }

    cout << prim(edges) << endl;
}

int main()
{
    solve();
    return 0;
}
