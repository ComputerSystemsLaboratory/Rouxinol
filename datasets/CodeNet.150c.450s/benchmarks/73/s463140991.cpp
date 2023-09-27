#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>
#include<queue>
#include<cstdlib>
#include<algorithm>

using namespace std;
#define pb push_back
#define mp make_pair
#define SZ(x) (int)(x).size()

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<LL, LL> pll;

const double eps = 1e-10;
const double PI = acos(-1.0);
//const double PI = 3.14159265358979323846264338327950288419716939937510
int dcmp(const double &x) { if (fabs(x) < eps) return 0; return x < 0 ? -1 : 1; }
const int MOD = 1e9 + 7;
const int INF = (int)((1ll << 31) - 1);
const double INF_d = 1e64;

template<class T> 
T qmod(T a, T b){ T ret = 1; while (b){ if (b & 1) ret *= a; b >>= 1; a *= a; } return ret; }
template<class T>
T gcd(T a, T b){ return !b ? a : gcd(b, a % b); }
template<class T>
T ex_gcd(T a, T b, T &x, T &y){
    if (!b){ x = 1, y = 0; return a; }
    T t, ret;
    ret = ex_gcd(b, a % b, x, y);
    t = x, x = y, y = t - a / b * y;
    return ret;
}
template<class T>
T inv(T t, T p){ return t == 1 ? 1 : (p - p / t) * inv(p % t, p) % p; }
// head

namespace Union_Find{
    const int N = 1e4 + 7;
    int f[N], n, m;

    void init(int n){
        for (int i = 0; i <= n; i++) f[i] = i;
    }

    int find_fa(int x){ return x == f[x] ? x : f[x] = find_fa(f[x]); }

    void unite(int x, int y){
        int rx = find_fa(x), ry = find_fa(y);
        if (rx != ry) f[max(rx, ry)] = min(rx, ry);
    }
}

namespace Segment_Tree1{ // Interval minimum val with single point change
    const int N = 1e5 + 7;
    struct node{
        int l, r, val, mn;
    };
    node T[N << 2];
    int n, m;

    #define ls(x) (x << 1)
    #define rs(x) (x<<1|1)

    void build(int rt, int l, int r){
        T[rt].l = l, T[rt].r = r, T[rt].val = INF;
        if (r <= l) return;
        int mid = (l + r) >> 1;
        build(ls(rt), l, mid);
        build(rs(rt), mid + 1, r);
    }

    void pushup(int rt){ T[rt].val = min(T[ls(rt)].val, T[rs(rt)].val); }

    void update(int rt, int l, int r, int val){
        if (T[rt].l > r || T[rt].r < l) return;
        if (l <= T[rt].l && T[rt].r <= r) { T[rt].val = val; return; }
        int mid = (T[rt].l + T[rt].r) >> 1;
        if (l <= mid) update(ls(rt), l, r, val);
        if (r > mid) update(rs(rt), l, r, val);
        pushup(rt);
    }

    int query(int rt, int l, int r){
        if (T[rt].l > r || T[rt].r < l) return INF;
        if (l <= T[rt].l && T[rt].r <= r) return T[rt].val;
        int mid = (T[rt].l + T[rt].r) >> 1;
        int ret = INF;
        if (l <= mid) ret = min(ret, query(ls(rt), l, r));
        if (r > mid) ret = min(ret, query(rs(rt), l, r));
        return ret;
    }
}

const int N = 1e5 + 7;
struct node{
    int l, r;
    LL sum;
};
node T[N << 2];
int n, m;

#define ls(x) (x << 1)
#define rs(x) (x<<1|1)

void build(int rt, int l, int r){
    T[rt].l = l, T[rt].r = r, T[rt].sum = 0;
    if (r <= l) return;
    int mid = (l + r) >> 1;
    build(ls(rt), l, mid);
    build(rs(rt), mid + 1, r);
}

void pushup(int rt){ T[rt].sum = T[ls(rt)].sum + T[rs(rt)].sum; }

void update(int rt, int l, int r, int val){
    if (T[rt].l > r || T[rt].r < l) return;
    if (l <= T[rt].l && T[rt].r <= r) { T[rt].sum += val; return; }
    int mid = (T[rt].l + T[rt].r) >> 1;
    if (l <= mid) update(ls(rt), l, r, val);
    if (r > mid) update(rs(rt), l, r, val);
    pushup(rt);
}

LL query(int rt, int l, int r){
    if (T[rt].l > r || T[rt].r < l) return INF;
    if (l <= T[rt].l && T[rt].r <= r) return T[rt].sum;
    int mid = (T[rt].l + T[rt].r) >> 1;
    LL ret = 0;
    if (l <= mid) ret += query(ls(rt), l, r);
    if (r > mid) ret += query(rs(rt), l, r);
    return ret;
}

int main(){
    scanf("%d%d", &n, &m);
    build(1, 1, n);
    for (int i = 0; i < m; i++){
        int op, x, y;
        scanf("%d", &op);
        if (op){
            scanf("%d%d", &x, &y); 
            printf("%lld\n", query(1, x, y));
        }
        else{
            scanf("%d%d", &x, &y);
            update(1, x, x, y);
        }
    }
    return 0;
}
