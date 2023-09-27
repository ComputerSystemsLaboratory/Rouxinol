#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

// 抽象 SegmentTree (0-indexed・一点更新・区間取得)
template <typename MonoidType>
struct SegmentTree {
    using Function = function< MonoidType(MonoidType, MonoidType) >;

    // node, identity element
    int n;
    vector<MonoidType> node;
    MonoidType E0;

    // update / combine function
    Function upd_f, cmb_f;

    void build(int m, vector<MonoidType> v = vector<MonoidType>()) {
        if(v != vector<MonoidType>()) m = v.size();
        n = 1; while(n < m) n *= 2;

        node = vector<MonoidType>(2*n-1, E0);
        if(v != vector<MonoidType>()) {
            for(int i=0; i<m; i++) {
                node[n-1+i] = v[i];
            }
            for(int i=n-2; i>=0; i--) {
                node[i] = cmb_f(node[2*i+1], node[2*i+2]);
            }
        }
    }

    // initialize
    SegmentTree() {}
    SegmentTree(int n_, MonoidType E0_,
                Function upd_f_, Function cmb_f_,
                vector<MonoidType> v = vector<MonoidType>()) :
        E0(E0_), upd_f(upd_f_), cmb_f(cmb_f_) {
        build(n_, v);
    }

    // update k-th element (applied value: x)
    void update(int k, MonoidType x) {
        k += n - 1;
        node[k] = upd_f(node[k], x);
        while(k > 0) {
            k = (k - 1) / 2;
            node[k] = cmb_f(node[2*k+1], node[2*k+2]);
        }
    }

    // range query for [a, b)
    MonoidType query(int a, int b) {
        MonoidType vl = E0, vr = E0;
        for(int l=a+n, r=b+n; l<r; l>>=1, r>>=1) {
            if(l & 1) vl = cmb_f(vl, node[(l++)-1]);
            if(r & 1) vr = cmb_f(node[(--r)-1], vr);
        }
        return cmb_f(vl, vr);
    }
};

// Range Minimum Query
// query 1: update
// query 2: range minimum
void DSL_2_A() {
    int N, Q; cin >> N >> Q;
    SegmentTree<int> seg(N, INT_MAX,
                         [](int a, int b) { return b; },
                         [](int a, int b) { return min(a, b); });

    int indexed = 0;
    for(int i=0; i<Q; i++) {
        int query_type; cin >> query_type;
        int x, y; cin >> x >> y;
        if(query_type == 0) {
            x -= indexed;
            seg.update(x, y);
        }
        if(query_type == 1) {
            x -= indexed, y -= indexed;
            y++;
            cout << seg.query(x, y) << endl;
        }
    }
}

void DSL_2_B() {
    int N, Q; cin >> N >> Q;
    SegmentTree<int> seg(N, 0,
                         [](int a, int b) { return a + b; },
                         [](int a, int b) { return a + b; });

    int indexed = 1;
    for(int i=0; i<Q; i++) {
        int query_type; cin >> query_type;
        int x, y; cin >> x >> y;
        if(query_type == 0) {
            x -= indexed;
            seg.update(x, y);
        }
        if(query_type == 1) {
            x -= indexed, y -= indexed;
            y++;
            cout << seg.query(x, y) << endl;
        }
    }
}

int main() {
    // DSL_2_A();
    DSL_2_B();
    return 0;
}

