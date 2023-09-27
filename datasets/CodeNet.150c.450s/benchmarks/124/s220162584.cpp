#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;
using P   = pair<int, int>;

template <class T>
bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    } else {
        return false;
    }
}
template <class T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    } else {
        return false;
    }
}

template <class T>
void dump_vec(const vector<T>& v) {
    auto len = v.size();
    rep(i, 0, len) {
        cout << v[i] << (i == (int)len - 1 ? "\n" : " ");
    }
}

struct FastIO {
    FastIO() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} FASTIO;

//---------------------------------------------------------------------------------------------------

struct Edge {
    int from, to;
    i64 cost;
    Edge() {}
    Edge(int t, i64 c) : from(-1), to(t), cost(c) {}
    Edge(int f, int t, i64 c) : from(f), to(t), cost(c) {}

    bool operator<(const Edge& r) const {
        return cost < r.cost;
    }
    bool operator>(const Edge& r) const {
        return cost > r.cost;
    }
};

using Vertex = vector<Edge>;
using Graph  = vector<Vertex>;

// 無向
void link(Graph& g, int from, int to, int cost = 1) {
    g[from].push_back(Edge(from, to, cost));
    g[to].push_back(Edge(to, from, cost));
    return;
}

// 有向
void connect(Graph& g, int from, int to, int cost = 1) {
    g[from].push_back(Edge(from, to, cost));
    return;
}

vector<i64> dijkstra(const Graph& g, int start) {
    const auto inf = numeric_limits<i64>::max();
    vector<i64> dist(g.size(), inf);

    using Pi = pair<i64, int>;
    priority_queue<Pi, vector<Pi>, greater<Pi>> que;
    dist[start] = 0;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
        const auto e    = que.top();
        const auto cost = e.first;
        const auto from = e.second;
        que.pop();
        if (dist[from] < cost) continue;

        for (const auto& e : g[from]) {
            const auto next_cost = e.cost + cost;
            if (chmin(dist[e.to], next_cost)) {
                que.push(make_pair(next_cost, e.to));
            }
        }
    }

    return dist;
}

//---------------------------------------------------------------------------------------------------

signed main() {
    int N;
    cin >> N;
    Graph G(N);
    rep(i, 0, N) {
        int u, k;
        cin >> u >> k;
        rep(j, 0, k) {
            int v, c;
            cin >> v >> c;
            connect(G, u, v, c);
        }
    }
    auto dist = dijkstra(G, 0);
    rep(i, 0, N) {
        cout << i << " " << dist[i] << "\n";
    }
}

