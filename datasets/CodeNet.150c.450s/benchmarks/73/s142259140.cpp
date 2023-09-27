#include <bits/stdc++.h>
using namespace std;

template <typename monoid>
class segmentTree {
public:
    using M = monoid;
    using T = typename M::value_type;

    int sz;
    vector<T> x;

    segmentTree(int n = 0) {
        sz = 1;
        while(sz < n) sz *= 2;
        x.assign(sz*2, M::id());
        init();
    }

    void fill(const T& val) {
        fill(x.begin() + sz, x.end(), val);
        init();
    }

    void init() {
        for(int i=sz-1; i>=1; --i) {
            x[i] = M::op(x[i*2], x[i*2+1]);
        }
    }

    T query(int l, int r) const {
        T al = M::id(), ar = M::id();
        for(l += sz, r += sz; l<r; l/=2, r/=2) {
            if(l&1) al = M::op(al, x[l++]);
            if(r&1) ar = M::op(x[--r], ar);
        }
        return M::op(al, ar);
    }

    void update(int i, const T &val) {
        x[i += sz] += val;
        while(i > 1) {
            x[i/2] = M::op(x[i], x[i^1]);
            i /= 2;
        }
    }

    T operator[](int i) const { return x[sz+i]; }
};

template <typename T>
struct min_monoid {
    using value_type = T;
    static constexpr T id() { return std::numeric_limits<T>::max(); }
    static T op(const T &a, const T &b) { return min(a, b); }
};

template <typename T>
struct max_monoid {
    using value_type = T;
    static constexpr T id() { return std::numeric_limits<T>::min; }
    static T op(const T &a, const T &b) { return max(a, b); }
};

template <typename T>
struct sum_monoid {
    using value_type = T;
    static constexpr T id() {return 0;}
    static T op(const T &a, const T &b) { return a+b; }
};

template <typename T>
using rmq = segmentTree<min_monoid<T>>;

template <typename T>
using rsq = segmentTree<sum_monoid<T>>;

signed main() {
    int n, q;
    cin >> n >> q;
    rsq<int> seg(n);
    for(int i=0; i<q; ++i) {
        int c, x, y;
        cin >> c >> x >> y;
    	x--;
        if(c == 0) {
            seg.update(x, y);
        } else {
            cout << seg.query(x, y) << endl;
        }
    }
    
    return 0;
}

