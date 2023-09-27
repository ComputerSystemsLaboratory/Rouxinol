#include <iostream>
#include <vector>
#include <climits>
#include <functional>

using namespace std;

template<typename T>
struct segment_tree {
    using F = function<T(T, T)>;

    int n;
    vector<T> node;
    F merge;
    T identity;

    segment_tree(int n, F merge, T identity)
        : n(n), node(n<<1, identity), merge(merge), identity(identity) {}

    T operator[](int i) { return node[i + n]; }

    void set(int i, T x) {
        node[i += n] = x;
        while (i >>= 1) node[i] = merge(node[i<<1|0], node[i<<1|1]);

    }

    T fold(int l, int r) {
        T res = identity;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) res = merge(res, node[l++]);
            if (r & 1) res = merge(node[--r], res);
        }
        return res;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    auto merge = [](int a, int b) { return a + b; };
    segment_tree<int> seg(n, merge, 0);
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        x--;
        if (com) cout << seg.fold(x, y) << '\n';
        else seg.set(x, seg[x] + y);
    }
}

