#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
const double PI = acos(-1.0);
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to;
    int cost;
};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<edge> graph;

class UnionFind
{
  private:
    vector<int> par;
    vector<int> sizes;

  public:
    UnionFind(int N) : par(N), sizes(N, 1)
    {
        rep(i, N) par[i] = i;
    }

    int find(int x)
    {
        if (x == par[x])
            return x;

        return par[x] = find(par[x]);
    }

    void unite(int x, int y)
    {
        x = find(x);
        y = find(y);

        if (x == y)
            return;

        if (sizes[x] < sizes[y])
            swap(x, y);

        par[y] = x;
        sizes[x] += sizes[y];
    }

    bool same(int x, int y)
    {
        return find(x) == find(y);
    }

    int size(int x)
    {
        return sizes[find(x)];
    }
};

int main()
{
    int V, E;
    cin >> V >> E;
    vector<tuple<int, int, int>> graph; //cost, from, to
    rep(i, E)
    {
        int s, t, w;
        cin >> s >> t >> w;
        graph.push_back(T{w, s, t});
        graph.push_back(T{w, t, s});
    }   

    sort(graph.begin(), graph.end());

    UnionFind uf(V);

    ll ans = 0;

    for(auto e : graph)
    {
        int from, to, cost;
        tie(cost, from, to) = e;

        if(!uf.same(from, to))
        {
            ans += cost;
            uf.unite(from, to);
        }
    }

    cout << ans << endl;

    return 0;
}
