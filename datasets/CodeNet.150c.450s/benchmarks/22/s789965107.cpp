#include <bits/stdc++.h>
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())
#define REP(i, n) for (long long i = 0; i < n; i++)
#define RREP(i, n) for (long long i = n - 1, 0 <= i; i--)
#define FOR(i, start, end) for (long long i = start; i < end; i++)
#define RFOR(i, start, end) for (long long i = start - 1; 0 <= i; i--)
#define ALL(a) a.begin(), a.end()
#define MOD(a) a %= 1'000'000'007
using ll = long long;
using namespace std;
const int INF32       = 1'050'000'000;
const long long INF64 = 4'000'000'000'000'000'000;
const int MOD7        = 1'000'000'007;
const int MOD9        = 1'000'000'009;
template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
void print() { std::cout << '\n'; }
template <class H, class... T> void print(H &&head, T &&... args) {
    std::cout << head;
    sizeof...(args) == 0 ? std::cout << "" : std::cout << ' ';
    print(std::forward<T>(args)...);
}
template <class T> void print(std::vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        i == v.size() - 1 ? std::cout << '\n' : std::cout << ' ';
    }
}
template <class T> void print(std::vector<std::vector<T>> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            std::cout << v[i][j];
            j == v[i].size() - 1 ? std::cout << '\n' : std::cout << ' ';
        }
    }
}
void vprint() { std::cout << '\n'; }
template <class H, class... T> void vprint(H &&head, T &&... args) {
    std::cout << head;
    sizeof...(args) == 0 ? std::cout << "" : std::cout << '\n';
    vprint(std::forward<T>(args)...);
}
template <class T> void vprint(std::vector<T> &v) {
    for (auto &&i : v) {
        std::cout << i << '\n';
    }
}

class bellman_ford {
  private:
    struct edge {
        int from, to;
        long long cost;
    };
    const long long INF = 4'000'000'000'000'000'000;
    int V;
    vector<edge> E;
    vector<long long> dist;

  public:
    bellman_ford(int vertex) {
        V = vertex;
        dist.resize(V, INF);
    }
    // 有向グラフの構築
    void directed_update(int from, int to, long long cost) {
        E.push_back({from, to, cost});
    }
    // 無向グラフの構築
    void undirected_update(int x, int y, long long cost) {
        E.push_back({x, y, cost});
        E.push_back({y, x, cost});
    }
    // 始点からの最短経路を計算する。
    // たどり着くまでにどこかの path が負の閉路を持つとき true を返す。
    bool calc(int from) {
        dist[from] = 0;
        for (int i = 0; i < 2 * V; i++) {
            for (int j = 0; j < E.size(); j++) {
                auto e = E[j];
                if (dist[e.from] != INF && dist[e.from] + e.cost < dist[e.to]) {
                    dist[e.to] = dist[e.from] + e.cost;
                    if (V - 1 <= i)
                        return true;
                }
            }
        }
        return false;
    }

    // 始点からの最短経路を計算する。
    // to への最短経路以外の負の閉路は無視する
    bool calc_ignore_path(int from, int to) {
        dist[from] = 0;
        for (int i = 0; i < 2 * V; i++) {
            for (int j = 0; j < E.size(); j++) {
                auto e        = E[j];
                long long end = dist[to];
                if (dist[e.from] != INF && dist[e.from] + e.cost < dist[e.to]) {
                    dist[e.to] = dist[e.from] + e.cost;
                    if (V - 1 <= i && dist[to] < end)
                        return false;
                }
            }
        }
        return true;
    }

    // to までの最短距離を返す
    // first に距離、second に実現可能か
    pair<long long, bool> min_dist(int to) {
        if (dist[to] == INF)
            return {-1, false};
        else
            return {dist[to], true};
    }
    // すべての経路において負の閉路が存在するか
    bool is_negative_path() {
        vector<long long> d(V);
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < E.size(); j++) {
                auto e = E[j];
                if (d[e.from] + e.cost < d[e.to]) {
                    d[e.to] = d[e.from] + e.cost;
                    if (i == V - 1)
                        return true;
                }
            }
        }
        return false;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V, E, start;
    cin >> V >> E >> start;
    auto bf = bellman_ford(V);
    REP(i, E) {
        int a, b, c;
        cin >> a >> b >> c;
        bf.directed_update(a, b, c);
    }
    vector<string> ans(V);
    if (bf.calc(start)) {
        print("NEGATIVE CYCLE");
        return 0;
    } else {
        REP(i, V) {
            auto dist = bf.min_dist(i);
            if (dist.second) {
                ans[i] = to_string(dist.first);
            } else {
                ans[i] = "INF";
            }
        }
    }
    vprint(ans);

    return 0;
    //
}
