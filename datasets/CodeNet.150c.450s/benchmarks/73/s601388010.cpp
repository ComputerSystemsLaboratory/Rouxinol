#include <bits/stdc++.h> // Replace needed headers for speed up

// -------------8<------- start of library -------8<------------------------
template <class T>
class FenwickTree {
public:
    FenwickTree(int _n = 0) : n(_n), bit(n + 1, 0) {}

    T sum(int r) const {
        T res = 0;
        for (r = r - 1; r >= 0; r = (r & (r + 1)) - 1) res += bit[r];
        return res;
    }
    T sum(int l, int r) const { return sum(r) - sum(l); }
    void add(int idx, const T &w) { for (; idx < n; idx |= idx + 1) bit[idx] += w; }
    int size() const { return n; }

private:
    const int n;
    std::vector<T> bit;
};
// -------------8<------- end of library ---------8-------------------------

int main() {
    std::cin.tie(0); std::ios::sync_with_stdio(false);

    int n, q, com, x, y;

    std::cin >> n >> q;
    FenwickTree<int> tree(n);
    while (q--) {
        std::cin >> com >> x >> y;
        if (com == 0) // add : v[x - 1] += y
            tree.add(x - 1, y);
        else if (com == 1) // get prefix : v[x - 1] + ... + v[y - 1]
            std::cout << tree.sum(x - 1, y) << '\n';
    }

    return 0;
}

