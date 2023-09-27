#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

class UnionFindTree {
private:
    vector<int32_t> parent, rank;

    int32_t find(int32_t x) {
        if (parent[x] == x) {
            return x;
        } else {
            int32_t p = find(parent[x]);
            parent[x] = p;
            return p;
        }
    }

public:
    UnionFindTree(int32_t n) {
        parent.resize(n);
        rank.resize(n);

        for (int32_t i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    void unite(int32_t x, int32_t y) {
        x = find(x);
        y = find(y);

        if (x == y) return;

        if (rank[x] < rank[y]) {
            parent[x] = y;
        } else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }

    bool same(int32_t x, int32_t y) {
        return find(x) == find(y);
    }
};

int main() {
    int32_t n;
    cin >> n;

    UnionFindTree uf(n);
    priority_queue<tuple<int32_t, int32_t, int32_t>, vector<tuple<int32_t, int32_t, int32_t>>, greater<tuple<int32_t, int32_t, int32_t>>> E;

    for (int32_t i = 0; i < n; i++) {
        for (int32_t j = 0; j < n; j++) {
            int32_t w;
            cin >> w;

            if (w > -1) {
                E.push(make_tuple(w, i, j));
            }
        }
    }

    int32_t sum = 0;
    while (!E.empty()) {
        int32_t w, u, v;
        tie(w, u, v) = E.top();
        E.pop();
        if (!uf.same(u, v)) {
            sum += w;
            uf.unite(u, v);
        }
    }

    cout << sum << endl;

    return 0;
}