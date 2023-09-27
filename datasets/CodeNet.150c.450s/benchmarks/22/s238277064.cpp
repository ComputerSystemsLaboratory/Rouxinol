#include <bits/stdc++.h>
using namespace std;

struct Benri { Benri() { std::cin.tie(0); ios::sync_with_stdio(false); cout << fixed << setprecision(12);}} benri;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vll = vector<long long>;
using pll = pair<ll, ll>;
using ull = unsigned long long;

template <typename T> using PQ = priority_queue<T>;
template <typename T> using minPQ = priority_queue<T, vector<T>, greater<T>>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

constexpr long long MOD = 1000000007;
//constexpr long long MOD = 998244353;
//constexpr int INF = 1001001001;
constexpr ll INF = 1001001001001001001ll;
constexpr double EPS = 1e-10;
using number = long long;




struct edge {
    int from, to;
    number cost;
    edge(int a, int b, number c) : from(a), to(b), cost(c) {}
};


using Edges = vector< edge >;

vector< number > bellman_ford(int s, int V, Edges &edges) {
    vector< number > dist(V, INF);
    dist[s] = 0;
    for (int i = 0; i < V - 1; i++) {
        for (auto &e : edges) {
            if (dist[e.from] == INF) continue;
            dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
        }
    }
    for (auto &e : edges) {
        if (dist[e.from] == INF) continue;
        if (dist[e.from] + e.cost < dist[e.to]) return vector< number >();
    }
    return dist;
}


int main() {
    int V, E, r; cin >> V >> E >> r;
    Edges G;
    int s, t; ll d;
    rep(i, E) {
        cin >> s >> t >> d;
        G.pb(edge(s, t, d));
    }

    vll dist = bellman_ford(r, V, G);

    if (dist.empty()) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    rep(i, V) {
        if (dist[i] == INF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }

}
