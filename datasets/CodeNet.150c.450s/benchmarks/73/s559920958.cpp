#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = (int)(b) - 1; i >= (int)(a); --i)
#define all(c) c.begin(),c.end()
#define sz(x) ((int)x.size())
using pii = pair<int, int>;
using vvi = vector<vector<int>>;
using vi  = vector<int>;

template <class Monoid>
class SegmentTree {
    using T = typename Monoid::T;
    int size;
    vector<T> data;
    void build() {
        rrep(i, 1, size) {
            data[i] = Monoid::op(data[i * 2], data[i * 2 + 1]);
        }
    }
public:
    SegmentTree(int n) {
        size = 1;
        while (size < n) size *= 2;
        data.assign(size * 2, Monoid::identity());
    }
    template <class It>
    SegmentTree(It first, It last) : SegmentTree(std::distance(first, last)){
        copy(first, last, std::begin(data) + size);
        build();
    }

    // 0-indexed
    void update(int p, const T &value) {
        for (data[p += size] += value; p /= 2; ) {
            data[p] = Monoid::op(data[p * 2], data[p * 2 + 1]);
        }
    }
    // [l, r)  0-indexed
    T query(int l, int r) {
        T resl = Monoid::identity(), resr = Monoid::identity();
        for (l += size, r += size; l < r; l /= 2, r /= 2) {
            if (l & 1) resl = Monoid::op(resl, data[l++]);
            if (r & 1) resr = Monoid::op(data[--r], resr);
        }
        return Monoid::op(resl, resr);
    }
    // 0-indexed
    T get(int p) {
        return data[p + size];
    }
};

struct RMQ {
    using T = int;
    static T op(T a, T b) { return min(a, b); }
    static constexpr T identity() { return (1LL << 31) - 1; }
};

struct RSQ {
    using T = int;
    static T op(T a, T b) { return a + b; }
    static constexpr T identity() { return 0; }
};

signed main() {
    int N, Q;
    cin >> N >> Q;
    SegmentTree<RSQ> seg(N);
    rep(i, 0, Q) {
        int C, X, Y;
        cin >> C >> X >> Y;
        if (C == 0) {
            // add
            X--;
            seg.update(X, Y);
        } else {
            // getsum
            X--, Y--;
            cout << seg.query(X, Y + 1) << endl;
        }
    }
}

