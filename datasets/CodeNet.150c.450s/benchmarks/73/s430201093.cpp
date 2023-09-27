
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;

int di[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dj[] = {0, 1, 0, -1, 1, 1, -1, -1};

template <typename M>
class LazySegmentTree {
    using T1 = typename M::t1;
    using T2 = typename M::t2;

private:
    const int n;
    vector<T1> data;
    vector<T2> lazy;

private:
    int size(int n) {
        int res = 1;
        while (res < n) res <<= 1;
        return res;
    }
    void push(int node) {
        if (lazy[node] == M::id2()) return;
        if (node < n) {
            lazy[node * 2] = M::op3(lazy[node * 2], lazy[node]);
            lazy[node * 2 + 1] = M::op3(lazy[node * 2 + 1], lazy[node]);
        }
        data[node] = M::op2(data[node], lazy[node]);
        lazy[node] = M::id2();
    }
    T1 sub(int l, int r, int node, int lb, int ub) {
        if (ub <= l || r <= lb) return M::id1();
        if (l <= lb && ub <= r) return M::op2(data[node], lazy[node]);
        push(node);
        int c = (lb + ub) / 2;
        return M::op1(sub(l, r, node * 2, lb, c), sub(l, r, node * 2 + 1, c, ub));
    }
    void suc(int l, int r, int node, int lb, int ub, T2 val) {
        if (ub <= l || r <= lb) return;
        if (l <= lb && ub <= r) {
            lazy[node] = M::op3(lazy[node], val);
            return;
        }
        push(node);
        int c = (lb + ub) / 2;
        suc(l, r, node * 2, lb, c, val);
        suc(l, r, node * 2 + 1, c, ub, val);
        data[node] = M::op1(M::op2(data[node * 2], lazy[node * 2])
                        , M::op2(data[node * 2 + 1], lazy[node * 2 + 1]));
    }

public:
    LazySegmentTree(int n_)
        : n(size(n_)), data(n * 2, M::id1()), lazy(n * 2, M::id2()) {}
    LazySegmentTree(int n_, T1 v1)
        : n(size(n_)), data(n * 2, v1), lazy(n * 2, M::id2()) {}
    LazySegmentTree(const vector<T1>& data_)
        : n(size(data_.size())), data(n * 2, M::id1()), lazy(n * 2, M::id2()) {
        init(data_);
    }
    void init() {
        for (int i = n - 1; i >= 1; i--) data[i] = M::op1(data[i * 2], data[i * 2 + 1]);
    }
    void init(const vector<T1>& data_) {
        for (int i = 0; i < (int)data_.size(); i++) data[i + n] = data_[i];
        init();
    }
    T1 find(int l, int r) {
        return sub(l, r, 1, 0, n);
    }
    void update(int l, int r, T2 val) {
        suc(l, r, 1, 0, n, val);
    }
};

// 使い方
// t1 := データ列の各値の型
// t2 := 作用させる値の型
// id1 := t1 の単位元
// id2 := t2 の単位元
// op1 := データ列を連結させる演算
// op2 := t1 に t2 を作用させる演算
// op3 := t2 同士の演算


// RangeSumQuery
class RS {
public:
    using t1 = int;
    using t2 = int;

    static t1 id1() {
        return 0;
    }
    static t2 id2() {
        return -1;
    }
    static t1 op1(const t1& l, const t1& r) {
        return l + r;
    }
    static t1 op2(const t1& l, const t2& r) {
        return r != id2() ? l + r : l;
    }
    static t2 op3(const t2& l, const t2& r) {
        if(l == id2()) return r;
        else if(r == id2()) return l;
        else return l + r;
    }
};

signed main(){
    
    int n, q; cin >> n >> q;
    LazySegmentTree<RS> sg(n);

    for(int i = 0; i < q; i++){
        int com, x, y; cin >> com >> x >> y;
        if(com == 0){
            sg.update(x - 1, x, y);
        }else{
            cout << sg.find(x - 1, y) << endl;
        }
        
    }

    return 0;
}

