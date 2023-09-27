#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int Weight;
const Weight INF = 1e8;

struct Edge {
    int src, dst;
    Weight weight;
Edge(int f, int t, Weight c) :
    src(f), dst(t), weight(c) {}
    bool operator< (const Edge &e);
};

bool Edge::operator< (const Edge &e)
{
    return weight != e.weight ? weight > e.weight :
        src != e.src ? src < e.src : dst < e.dst;
}

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;


// グラフgの始点sから各頂点までの距離がdistに入る．
// 経路に負閉路が存在しないときtrue，そうでないときfalse．
// また，経路に負閉路を含む場合は，distが負の無限大となる．
// prefは最短路木の親頂点が入る
bool ShortestPath(const Graph &g, int s,
                  vector<Weight> &dist, vector<int> &prev)
{
    int n = g.size();

    dist.assign(n, INF);
    dist[s] = 0;
    prev.assign(n, -2);

    bool negative_cycle = false;
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (auto e = g[i].begin(); e != g[i].end(); ++e) {
                if (dist[e->src] != INF && dist[e->dst] > dist[e->src] + e->weight) {
                    dist[e->dst] = dist[e->src] + e->weight;
                    prev[e->dst] = e->src;
                    if (k == n - 1) {
                        dist[e->dst] = -INF;
                        negative_cycle = true;
                    }
                }
            }
        }
    }
    return !negative_cycle;
}


vector<int> BuildPath(const vector<int> &prev, int t)
{
    vector<int> path;
    for (int u = t; u >= 0; u = prev[u])
        path.push_back(u);
    reverse(path.begin(), path.end());

    return path;
}

int main()
{
    int V, E, r, s, t, d;

    cin >> V >> E >> r;
    Graph g(V);
    for (int i = 0; i < E; ++i) {
        cin >> s >> t >> d;
        g[s].push_back(Edge(s, t, d));
    }

    vector<Weight> dist;
    vector<int> prev;
    if (ShortestPath(g, r, dist, prev)) {
        for (int i = 0; i < V; ++i) {
            if (INF <= dist[i])
                cout << "INF\n";
            else
                cout << dist[i] << '\n';
        }
    }
    else {
        cout << "NEGATIVE CYCLE\n";
    }


    return 0;
}