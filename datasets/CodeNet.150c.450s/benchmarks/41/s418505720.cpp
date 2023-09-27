#include<bits/stdc++.h>
using namespace std;

// #define debug(var)  do{std::cout << __LINE__ << "> " << #var << ": ";view(var);}while(0)
// template<typename T> void view(T e){std::cout << e << std::endl;}
// template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
// template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

// from graph/types.cpp
template<typename T>
using Matrix = vector<vector<T>>;

// from graph/graph_factory.cpp
template<typename T>
struct MatrixFactory {
    MatrixFactory(int n, bool directed = true) : n(n), directed(directed) {
        g.resize(n, vector<T>(n, numeric_limits<T>::max()));
        for (int i = 0; i < n; ++i) g[i][i] = 0;
    }
    // from and to are 0-indexed.
    void add_edge(int from, int to, T cost = 1) {
        g[from][to] = cost;
        if (!directed) g[to][from] = cost;
    }
    Matrix<T> build() {
        return g;
    }
private:
    int n;
    bool directed;
    Matrix<T> g;
};


template<typename T>
struct WarshallFloyd {
    WarshallFloyd(const Matrix<T> &g) : n(g.size()), g(g), dp(g) {
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (dp[i][k] == inf() || dp[k][j] == inf()) continue;
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
    }
    bool has_negative_cycle() {
        for (int i = 0; i < n; ++i) if (dp[i][i] < 0) return true;
        return false;
    }
    T shortest_path_value(int s, int t) {
        return dp[s][t];
    }
    bool is_unreachable(int s, int t) {
        return dp[s][t] == inf();
    }
    vector<int> shortest_path(int s, int t) {
        vector<int> res;
        if (is_unreachable(s, t)) return res;
        res.push_back(s);
        int cur = s;
        int cnt = 0;
        while (cur != t && cnt < n) {
            for (int i = 0; i < n; ++i) {
                if (i != cur && g[cur][i] + dp[i][t] == dp[cur][t]) {
                    cur = i;
                    res.push_back(i);
                    break;
                }
            }
            ++cnt;
        }
        return res;
    }
private:
    int n;
    Matrix<T> g, dp;
    T inf() {
        return numeric_limits<T>::max();
    }
};

/*
    verified
    https://atcoder.jp/contests/atc001/tasks/unionfind_a
*/
int main() {
    int v, e; cin >> v >> e;
    MatrixFactory<int> mf(v);
    for (int i = 0; i < e; ++i) {
        int s, t, d; cin >> s >> t >> d;
        mf.add_edge(s, t, d);
    }
    WarshallFloyd<int> wf(mf.build());
    if (wf.has_negative_cycle()) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            if (j != 0) cout << " ";
            if (wf.is_unreachable(i, j)) cout << "INF";
            else cout << wf.shortest_path_value(i, j);
            // cout << endl;
            // debug(wf.shortest_path(i, j));
        }
        cout << endl;
    }
}

