#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <cassert>
using namespace std;
using ll = long long;
const int INF = 1<<30;
const int MOD = 1e9 + 7;
const int MAX_N = 1e5;
template<typename T> struct edge
{
    int from, to; T cost;
    edge(int to, T cost) : from(-1), to(to), cost(cost) {}
    edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}
};
template<typename T> using Edges = vector<edge<T>>;
template<typename T> using Gragh = vector<Edges<T>>;
int V, E;
template<typename T> vector<T> BellmanFord(Edges<T> &edges, const int &s)
{
    vector<T> dist(V, INF);
    dist[s] = 0;
    for(int i = 0; i < V; i++)
    {
        for(auto &edge : edges)
        {
            if(dist[edge.from] == INF) continue;
            dist[edge.to] = min(dist[edge.to], dist[edge.from] + edge.cost);
        }
    }
    for(auto &edge : edges)
    {
        if(dist[edge.from] == INF) continue;
        if(dist[edge.from] + edge.cost < dist[edge.to]) return vector<T>(); //閉路
    }
    return dist;
}
signed main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r; cin >> V >> E >> r;
    Edges<int> G;
    for(int i = 0; i < E; i++)
    {
        int s, t, d; cin >> s >> t >> d;
        G.emplace_back(s, t, d);
    }
    vector<int> dists = BellmanFord(G, r);
    if(dists.empty()) cout << "NEGATIVE CYCLE" << endl;
    for(int &dist : dists)
    {
        if(dist == INF) cout << "INF" << endl;
        else cout << dist << endl;
    }
    return 0;
}


