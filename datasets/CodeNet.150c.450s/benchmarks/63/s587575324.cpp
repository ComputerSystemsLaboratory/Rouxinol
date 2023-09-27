/* include file */
#include <set>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

struct Graph
{
    struct edge
    {
        int to;
        long long cost;
    };

    int n;
    vector<vector<edge>> edges;

    Graph(int N)
    {
        n = N;
        edges.resize(n, vector<edge>());
    }

    int size() const
    {
        return n;
    }

    vector<edge> &operator[](int v)
    {
        return edges[v];
    }
};

template <class Type>
struct Dijkstra
{
    using Update = function<bool(Type &, Graph::edge &, Type &)>;
    using P = pair<Type, int>;
    Graph &G;

    Update update;

    vector<Type> ver;
    int n;
    Type init;

    Dijkstra(Graph &g, Type init_v, Update func) : G(g), n(g.size()), init(init_v), update(func)
    {
    }

    Type &operator[](int i)
    {
        return ver[i];
    }

    vector<Type> &cal(int s, Type first)
    {
        ver.assign(n, init);
        ver[s] = first;
        priority_queue<P, vector<P>, greater<P>> que;
        que.push({ver[s], s});

        while (!que.empty())
        {
            Type t = que.top().first;
            int v = que.top().second;
            que.pop();

            if (ver[v] < t)
                continue;

            for (auto &e : G[v])
            {
                if (update(ver[v], e, ver[e.to]))
                {
                    que.push({ver[e.to], e.to});
                }
            }
        }
        return ver;
    }
};

#include <iostream>

int main()
{
    typedef long long i64;
    int v, e, r;
    cin >> v >> e >> r;
    Graph G(v);
    for (int i = 0; i < e; i++)
    {
        int s, t;
        i64 d;
        cin >> s >> t >> d;
        G[s].push_back({t, d});
    }

    Dijkstra<i64> dijk(G, (1LL << 60),
                       [](i64 &from, Graph::edge &e, i64 &to) {
                           if (to > from + e.cost)
                           {
                               to = from + e.cost;
                               return true;
                           }
                           return false;
                       });
    dijk.cal(r, 0LL);

    for (int i = 0; i < v; i++)
    {
        if(dijk[i] == (1LL << 60)) cout << "INF" << endl;
        else cout << dijk[i] << endl;
    }
    return 0;
}

