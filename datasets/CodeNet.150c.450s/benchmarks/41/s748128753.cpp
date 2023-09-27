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

template <class T>
void warshall_floyd(vector<vector<T>>& mat, const T inf) {
    const auto len           = mat.size();
    rep(i, 0, len) mat[i][i] = 0;
    rep(k, 0, len) rep(i, 0, len) rep(j, 0, len) {
        if (mat[i][k] == inf || mat[k][j] == inf) continue;
        chmin(mat[i][j], mat[i][k] + mat[k][j]);
    }
}
//---------------------------------------------------------------------------------------------------

signed main() {
    int V, E;
    cin >> V >> E;
    const auto inf = numeric_limits<i64>::max();
    vector<vector<i64>> mat(V, vector<i64>(V, inf));
    rep(i, 0, E) {
        int u, v, w;
        cin >> u >> v >> w;
        mat[u][v] = w;
    }

    warshall_floyd(mat, inf);
    rep(i, 0, V) {
        if (mat[i][i] < 0) {
            cout << "NEGATIVE CYCLE\n";
            return 0;
        }
    }

    rep(i, 0, V) rep(j, 0, V) {
        auto w = mat[i][j];
        if (w == inf)
            cout << "INF";
        else
            cout << w;
        cout << (j == V - 1 ? "\n" : " ");
    }
}

