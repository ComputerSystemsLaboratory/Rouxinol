/*
verified on 2020/3/1
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4222399
*/

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

/* snippet starts */

#include <limits>

// 全対全の距離を求める N^3
template<typename dist_t>
class WarshallFloyd {

    int n; // 頂点数

    vector<vector<dist_t>> d;

public:

    static const dist_t INF;
    static const string INF_STR;

    WarshallFloyd(int _n) 
        : n(_n)
        , d((size_t)n, vector<dist_t>((size_t)n, INF)) {
        for (size_t i=0; i<(size_t)n; i++) d[i][i] = 0;
    }

    WarshallFloyd(int _n, vector<vector<dist_t>> &_d)
        : n(_n)
        , d(_d) {}

    inline void add_edge(int from, int to, dist_t dist) {
        d[(size_t)from][(size_t)to] = dist;
    }

    friend istream &operator>>(istream &is, WarshallFloyd &in) {
        dist_t d = 1;
        for (int i=0, u, v; i<in.input_edge_num; i++) {
            is >> u >> v;
            if (in.edge_length_input) is >> d;
            if (!in.zero_indexed_input) { u--; v--; }
            in.add_edge(u, v, d);
        }
        return is;
    }

    friend ostream &operator<<(ostream &os, const WarshallFloyd &in) {
        for (int i=0; i<in.n; i++)
            for (int j=0; j<in.n; j++)
                os << (in[i][(size_t)j] < INF ? to_string(in[i][(size_t)j]) : INF_STR) 
                   << (j < in.n-1 ? ' ' : '\n');
        return os;
    }

    // 負のループがある時trueを返す
    inline bool operator()() {
        for (size_t k=0; k<(size_t)n; k++)
            for (size_t i=0; i<(size_t)n; i++)
                for (size_t j=0; j<(size_t)n; j++)
                    if (d[i][k] < INF && d[k][j] < INF)
                        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        bool negloop = false;
        for (size_t k=0; k<(size_t)n; k++)
            for (size_t i=0; i<(size_t)n; i++)
                for (size_t j=0; j<(size_t)n; j++)
                    if (d[i][k] < INF && d[k][j] < INF && d[i][j] > d[i][k] + d[k][j]) {
                        negloop = true;
                        d[i][j] = -INF;
                    }
        return negloop;
    }

    auto &operator[](int i) { return d[(size_t)i]; }
    auto operator[](int i) const { return d[(size_t)i]; } 
    auto begin() { return d.begin(); }
    auto end()   { return d.end(); }
};


template<typename dist_t>
const dist_t WarshallFloyd<dist_t>::INF = numeric_limits<dist_t>::max();

template<typename dist_t>
const string WarshallFloyd<dist_t>::INF_STR = "INF";

/* Constructers
 *
 * WarshallFloyd(int _n, int _m, bool _directed=false, bool _edge_length_input=false, bool _zero_indexed_input=false) 
 * WarshallFloyd(int _n, vector<vector<dist_t>> _d, bool _directed=false)
 */

/* snippet ends */

int main() {
    int n, m;
    cin >> n >> m;
    WarshallFloyd<ll> wf(n);
    for (int i=0, u, v, d; i<m; i++) {
        cin >> u >> v >> d;
        wf.add_edge(u, v, d);
    }
    if (wf())
        cout << "NEGATIVE CYCLE" << '\n';
    else
        cout << wf;
    return 0;
}
