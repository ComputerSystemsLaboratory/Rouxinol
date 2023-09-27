#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

using i64=long long;

template <typename T>
struct BinaryIndexedTree {
    size_t n;
    vector<T> tree;
    BinaryIndexedTree(size_t n, T e=0): n(n) {
        tree = vector<T>(n+1, e);
    }
    void add(size_t i, T w) {
        // v[i] += w;
        // i in [1, n]
        for (size_t j=i; j<=n; j+=j&-j)
            tree[j] += w;
    }
    T sum(T m) {
        // returns sum of v[i] for i in [1, m]
        T sum_=0;
        for (size_t i=m; i>0; i-=i&-i)
            sum_ += tree[i];

        return sum_;
    }
};

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> a(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &a[i]);

    map<int, size_t> m;
    for (size_t i=0; i<n; ++i)
        m[a[i]] = i;

    vector<int> b(n);
    int rank_=1;
    for (pair<const int, size_t> p: m)
        b[p.second] = rank_++;

    BinaryIndexedTree<i64> tree(n+1);
    i64 res=0;
    for (size_t i=0; i<n; ++i) {
        res += i-tree.sum(b[i]);
        tree.add(b[i], 1);
    }

    printf("%lld\n", res);
    return 0;
}