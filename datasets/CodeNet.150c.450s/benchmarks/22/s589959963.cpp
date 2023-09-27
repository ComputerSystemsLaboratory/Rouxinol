#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1L << (x))
using ll = long long;
using namespace std;

template<typename T>
vector<T> make_v(size_t a,T b){return vector<T>(a,b);}
 
template<typename... Ts>
auto make_v(size_t a,Ts... ts){
    return vector<decltype(make_v(ts...))>(a,make_v(ts...));
}

struct edge {
    int s, t, w;

    bool operator< (const edge& other) const {
        if (w != other.w) {
            return w < other.w;
        } else if (s != other.s) {
            return s < other.s;
        } else {
            return t < other.t;
        }
    }
};

constexpr int inf = numeric_limits<int>::max();
pair<bool, vector<int>> bellman_ford(int n, int s, const vector<edge>& edges) {
    vector<int> d(n, inf);
    bool n_cycle = false;

    d[s] = 0;
    REP(i, n) {
        bool update = false;
        for (const edge & e : edges) {
            if (d[e.s] != inf && d[e.s] + e.w < d[e.t]) {
                d[e.t] = d[e.s] + e.w;
                update = true;
            }
        }

        if (i == n-1 && update) n_cycle = true;
    }

    return {n_cycle, d};
}

int main() {
    int v, e, r; cin >> v >> e >> r;
    vector<edge> edges(e);

    REP(i, e) {
        int s, t, w; cin >> s >> t >> w;
        edges[i] = {s, t, w};
    }

    auto ret = bellman_ford(v, r, edges);

    if (!ret.first) {
        for (int d : ret.second) {
            if (d != inf) {
                cout << d << endl;
            } else {
                cout << "INF" << endl;
            }
        }
    } else {
        cout << "NEGATIVE CYCLE" << endl;
    }
    
    return 0;
}

