#include <iostream>
using namespace std;

template <int MAX_N>
struct union_find {
    int par[MAX_N], N;

    union_find(int n): N(n) {
        for (int i = 0; i < N; ++i) {
            par[i] = -1;
        }
    }

    int find(int x) {
        if (par[x] < 0) return x;
        return par[x] = find(par[x]);
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    bool unite(int x, int y) {
        int xx = find(x), yy = find(y);

        if (xx == yy) return false;
        if (par[xx] < par[yy]) {
            par[yy] = xx;
        } else {
            if (par[xx] == par[yy]) {
                --par[yy];
            }
            par[xx] = yy;
        }
        return true;
    }
};

int main(void) {
    cin.tie(0); ios::sync_with_stdio(false);
    int N, Q;
    cin >> N >> Q;

    union_find<101010> uf(N);

    for (int j = 0; j < Q; ++j) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            uf.unite(x, y);
        } else {
            cout << (uf.same(x, y) ? 1 : 0) << endl;
        }
    }
    return 0;
}