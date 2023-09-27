#include <bits/stdc++.h>

#ifdef DEBUG
#define PRINT(x)\
    cout<<"func "<<__func__<<": line "<<__LINE__<<": "<<#x<<" = "<<(x)<<endl;
#define PRINTA(a,first,last)\
    cout<<"func "<<__func__<<": line "<<__LINE__<<": "<<#a<<"["<<(first)<<", "<<(last)<<")"<<endl;\
    for (int i=(first);i<(last);++i){cout<<#a<<"["<<i<<"] = "<<(a)[i]<<endl;}
#define PRINTP(p)\
    cout<<"func "<<__func__<<": line "<<__LINE__<<": "<<#p<<" = ("<<(p.first)<<", "<<(p.second)<<")"<<endl;
#define PRINTI(a,i)\
    cout<<"func "<<__func__<<": line "<<__LINE__<<": "<<#a<<"["<<#i<<"] = "<<#a<<"["<<(i)<<"] = "<<(a)[i]<<endl;
#else
#define PRINT(x)
#define PRINTA(a,first,last)
#define PRINTP(p)
#define PRINTI(a,i)
#endif

#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define MOD 1000000007
//#define MOD 998244353

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

template <class T, class U> void amax(T& x, U y) {if (x < y) x = y;}
template <class T, class U> void amin(T& x, U y) {if (x > y) x = y;}

template <class T>
using vec2 = vector<vector<T>>;

template <class T>
using vec3 = vector<vector<vector<T>>>;

const int dx[] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};

struct edge {
    typedef size_t weight_type;

    size_t m_to;

    edge(size_t to) : m_to(to) { }

    inline size_t to() const { return m_to; }

    inline weight_type weight() const { return 1; }

    friend std::ostream& operator<<(std::ostream &os, const edge &e) {
        os << "{ to: " << e.m_to << " }";
        return os;
    }
};

template <typename Weight>
struct weighted_edge : public edge {
    using weight_type = Weight;

    weight_type m_weight;

    weighted_edge(size_t to, weight_type weight) : edge(to), m_weight(weight) { }

    inline weight_type weight() const { return m_weight; }

    friend std::ostream& operator<<(std::ostream &os, const weighted_edge &e) {
        os << "{ to: " << e.m_to << ", weight = " << e.m_weight << " }";
        return os;
    }
};

template <class Edge>
struct graph {
    using edge_type = Edge;

    const size_t m_n_vertices;
    std::vector<std::vector<edge_type>> m_edges;

    graph(size_t n_vertices) : m_n_vertices(n_vertices), m_edges(n_vertices) { }

    inline size_t n_vertices() const { return m_n_vertices; }

    inline void add_edge(size_t from, size_t to, typename edge_type::weight_type weight) {
        m_edges[from].emplace_back(to, weight);
    }

    inline void add_edge(size_t from, size_t to) {
        m_edges[from].push_back(to);
    }

    inline void add_edge(size_t from, const edge_type &e) {
        m_edges[from].emplace_back(e);
    }

    inline void add_biedge(size_t v0, size_t v1, typename edge_type::weight_type weight) {
        m_edges[v0].emplace_back(v1, weight);
        m_edges[v1].emplace_back(v0, weight);
    }

    inline void add_biedge(size_t v0, size_t v1) {
        m_edges[v0].push_back(v1);
        m_edges[v1].push_back(v0);
    }

    inline std::vector<edge_type> edges_from(size_t v) const {
        return m_edges[v];
    }
};

// Prim's algorithm
template <class Graph>
typename Graph::edge_type::weight_type minimum_spanning_tree(const Graph &g) {

    using Edge = typename Graph::edge_type;
    using Weight = typename Edge::weight_type;
    using P = std::pair<Weight, size_t>;

    size_t N = g.n_vertices();

    Weight result = 0;
    std::vector<bool> used(N, false);
    std::priority_queue<P, vector<P>, greater<P>> q;

    q.push(P(0, 0));

    while (!q.empty()) {
        Weight w;
        size_t u;
        tie(w, u) = q.top();
        q.pop();
        if (used[u]) {
            continue;
        }
        used[u] = true;
        result += w;
        for (const Edge &e: g.edges_from(u)) {
            size_t v = e.to();
            if (!used[v]) {
                q.push(P(e.weight(), v));
            }
        }
    }

    return result;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    using Edge = weighted_edge<int>;
    using Graph = graph<Edge>;

    int V, E;
    cin >> V >> E;
    Graph g(V);
    REP(_, E) {
        int s, t, w;
        cin >> s >> t >> w;
        g.add_biedge(s, t, w);
    }

    cout << minimum_spanning_tree(g) << endl;

    return 0;
}

