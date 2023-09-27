#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
struct Add {
    T operator()(T x, T y) {
        return x + y;
    }
};

template <class T, class Functor>
struct SegmentTree {
    size_t n;
    T e;
    vector<T> tree;
    Functor F;
    SegmentTree(size_t m, T e=T()): n(1), e(e) {
        while (n <= m) n <<= 1;
        tree.assign(n<<1, e);
    }
    T range_query(size_t a, size_t b, size_t i=1, size_t l=0, size_t r=-1) {
        if (!~r) r = n;
        if (a<=l && r<=b) return tree[i];

        T vl=e, vr=e;
        size_t c=(l+r)>>1;

        if (a < c) vl=F(e, range_query(a, b, i<<1|0, l, c));
        if (c < b) vr=F(e, range_query(a, b, i<<1|1, c, r));

        return F(vl, vr);
    }
    void update(size_t i, T x) {
        i += n;
        tree[i] = x;
        while (i>>=1)
            tree[i] = F(tree[i<<1|0], tree[i<<1|1]);
    }
    void add(size_t i, T x) {
        i += n;
        tree[i] += x;
        while (i>>=1)
            tree[i] = F(tree[i<<1|0], tree[i<<1|1]);
    }
};

int main() {
    size_t n, q;
    scanf("%zu %zu", &n, &q);

    SegmentTree<int, Add<int>> tree(n);
    for (size_t i=0; i<q; ++i) {
        int com;
        scanf("%d", &com);
        if (com) {
            size_t s, t;
            scanf("%zu %zu", &s, &t);
            printf("%d\n", tree.range_query(s, t+1));
        } else {
            size_t i;
            int x;
            scanf("%zu %d", &i, &x);
            tree.add(i, x);
        }
    }

    return 0;
}