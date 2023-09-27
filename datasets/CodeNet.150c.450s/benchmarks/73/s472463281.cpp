#include <bits/stdc++.h>
using namespace std;
using ll = long long;


template <typename T>
struct SegmentTree {
    using F = function<T(T, T)>;

    int size;
    vector<T> node;
    const F f;
    const T I;

    SegmentTree(int n, const F f, const T& I) : f(f), I(I) {
        size = 1;
        while (size < n) size <<= 1;
        node.resize(2 * size, I);
    }

    T& operator[](int k) {
        return node[k + size];
    }

    void build() {
        for (int k = size - 1; k > 0; k--) {
            node[k] = f(node[2 * k], node[2 * k + 1]);
        }
    }

    void update(int k, const T& x) {
        k += size;
        node[k] = x;
        while (k >>= 1) {
            node[k] = f(node[2 * k], node[2 * k + 1]);
        }
    }

    T query(int a, int b) {
        T L = I, R = I;
        for (a += size, b += size; a < b; a >>= 1, b >>= 1) {
            if (a & 1) L = f(L, node[a++]);
            if (b & 1) R = f(node[--b], R);
        }
        return f(L, R);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    SegmentTree<int> segtree(n, [](int a, int b) { return a + b; }, 0);
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) segtree.update(x, segtree[x] + y);
        else cout << segtree.query(x, y + 1) << '\n';
    }
}
