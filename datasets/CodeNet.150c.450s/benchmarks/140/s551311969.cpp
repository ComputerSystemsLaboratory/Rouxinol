#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> Pii;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

// template <typename T>
// struct edge {
//     int to;
//     T cost;
//     edge(){}
//     edge(int _to, T _cost) : to(_to), cost(_cost) {}
//     bool operator< (const edge& e) const {
//         return cost == e.cost ? to < e.to : cost < e.cost;
//     }
// };

template <typename T>
struct edge {
    int from, to;
    T cost;
    edge(){}
    edge(int _from, int _to, T _cost) : from(_from), to(_to), cost(_cost) {}
    bool operator< (const edge& e) const {
        return cost == e.cost ? (from == e.from ? to < e.to : from < e.from) : cost < e.cost;
    }
    bool operator> (const edge& e) const {
        return cost == e.cost ? (from == e.from ? to > e.to : from > e.from) : cost > e.cost;
    }
};

template <typename T>
class Prim {
private:
    int n;
    vector<vector<edge<T>>> G;
public:
    Prim(int _n) : n(_n) {
        G.resize(n);
    }
    // undirected
    void addEdge(int u, int v, T c) {
        G[u].emplace_back(u, v, c);
        G[v].emplace_back(v, u, c);
    }
    T calc(int s = 0) {
        T total_weight = 0;
        vector<bool> visited(n);
        priority_queue<edge<T>, vector<edge<T>>, greater<edge<T>>> pq;
        pq.push(edge<T>(-1, s, 0));
        while (!pq.empty()) {
            auto e = pq.top(); pq.pop();
            if (visited[e.to]) continue;
            total_weight += e.cost;
            visited[e.to] = true;
            for (const auto& ne: G[e.to]) {
                if (!visited[ne.to]) pq.push(ne);
            }
        }
        return total_weight;
    }
};
/* !!!!! T: ?????????????????????(int, double) !!!!! */

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    cin >> n >> m;
    Prim<int> prim(n);
    rep(i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        prim.addEdge(a, b, c);
    }

    cout << prim.calc() << endl;
}