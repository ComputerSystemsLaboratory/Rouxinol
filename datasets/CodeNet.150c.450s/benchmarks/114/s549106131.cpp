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

pair<i64, Vertex> minimum_spanning_tree(const Graph& g, int start) {
    i64 total_cost = 0;
    Vertex V;
    vector<bool> visited(g.size(), false);

    priority_queue<Edge, vector<Edge>, greater<Edge>> que;
    que.push(Edge(start, start, 0));
    while (!que.empty()) {
        const auto e = que.top();
        que.pop();
        if (visited[e.to]) continue;

        visited[e.to] = true;
        V.push_back(e);
        total_cost += e.cost;
        for (const auto& n : g[e.to]) {
            if (!visited[n.to]) {
                que.push(n);
            }
        }
    }
    return make_pair(total_cost, V);
}

//---------------------------------------------------------------------------------------------------

signed main() {
    int N;
    cin >> N;
    Graph G(N);
    rep(i, 0, N) rep(j, 0, N) {
        int w;
        cin >> w;
        if (w >= 0) {
            connect(G, i, j, w);
        }
    }
    auto ans = minimum_spanning_tree(G, 0);
    cout << ans.first << "\n";
}

