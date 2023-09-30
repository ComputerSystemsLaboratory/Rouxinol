#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;

// Abstract Lazy Segment Tree (????±?????±?????????¶?????°???????????¨)
const int SIZE = 1 << 17; // 2^17 = 131072
template<typename T>
struct lazysegtree {
    // ?????????????????????
    T node[2*SIZE], lazy[2*SIZE], I;
    bool need_upd[2*SIZE];

    // ????????¬????????§??? (update, query ??? 2 ???????????????)
    // update function ??????????????????????????¢????????????
    // upd_f(X, Y, l, r) -> ????????? [l, r) ??§???????????????????????? X ??? Y ????????????
    // lazy ???????????? update ??¨??????????????? 1 ??????????????¨?????°?????????
    T (*upd_f)(T, T, int, int), (*qry_f)(T, T);

    // ???????????¨?????????????????????????????¨?????? node ??¨ lazy ??????????????§?????????
    lazysegtree(T (*op1)(T, T, int, int), T (*op2)(T, T), T X) {
        upd_f = op1;
        qry_f = op2;
        I = X;
        fill(lazy, lazy+2*SIZE, I);
        fill(node, node+2*SIZE, I);
        fill(need_upd, need_upd+2*SIZE, false);
    }

    void lazy_eval(int k, int l, int r) {
        if(!need_upd[k]) return;
        node[k] = upd_f(node[k], lazy[k], l, r);
        if(r - l > 1) {
            lazy[2*k+1] = upd_f(lazy[2*k+1], lazy[k], 0, 1);
            lazy[2*k+2] = upd_f(lazy[2*k+2], lazy[k], 0, 1);
            need_upd[2*k+1] = need_upd[2*k+2] = true;
        }
        lazy[k] = I;
        need_upd[k] = false;
    }

    // ???????????? [a, b) ??????????????? val ??????????????????
    // (upd_f ?????¨????????????)
    void update(int a, int b, T val, int l=0, int r=SIZE, int k=0) {
        lazy_eval(k, l, r);
        if(b <= l || r <= a) return;
        if(a <= l && r <= b) {
            lazy[k] = upd_f(lazy[k], val, 0, 1);
            need_upd[k] = true;
            lazy_eval(k, l, r);
        }
        else {
            int mid = (l + r) / 2;
            update(a, b, val, l, mid, 2*k+1);
            update(a, b, val, mid, r, 2*k+2);
            node[k] = qry_f(node[2*k+1], node[2*k+2]);
        }
    }

    // ???????????? [a, b) ?????????????????¨???????????????
    // (qry_f ?????¨????????????)
    T query(int a, int b, int l=0, int r=SIZE, int k=0) {
        lazy_eval(k, l, r);
        if(b <= l || r <= a) return I;
        if(a <= l && r <= b) return node[k];
        int mid = (l + r) / 2;
        T vl = query(a, b, l, mid, 2*k+1);
        T vr = query(a, b, mid, r, 2*k+2);
        return qry_f(vl, vr);
    }
};

// [[???????????????]]
// update ??¨??¨ query ??¨?????¢??°??¨????????? (??¢??°????????????????????????????????????????????????) ?????¨???????????£?¨???????
// ??????????????¨???update ??¨?????¢??°??? upd ??§???query ??¨?????¢??°??? fnd ??§??????????????? INT_MAX

typedef long long int ll;
ll upd(ll a, ll b, int l, int r) {return a+b;}
ll fnd(ll a, ll b) {return a+b;}
lazysegtree<ll> seg(upd, fnd, 0);

int main() {
    int N, Q; scanf("%d%d", &N, &Q);
    while(Q--) {
        int c, x, y; scanf("%d%d%d", &c, &x, &y);
        if(c == 0) {
            seg.update(x-1, x, y);
        }
        else {
            printf("%lld\n", seg.query(x-1, y));
        }
    }
    return 0;
}