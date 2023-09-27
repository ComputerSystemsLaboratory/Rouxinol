#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF   = 1e9;
const ll  INFLL = 1e18;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};


/*
    ref: ??????????§??????¨??£??°(?????¨) https://tomcatowl.github.io/blog/2016/12/12/ds-and-alg-1/
*/

/*
struct Monoid {
    using T = _underlying_set_;                                 // ??¢??????????????°????????????
    T operator() (const T &a, const T &b) { return _a_op_b_; }  // ???????????? 
    static constexpr T identity() { return _identity_element; } // ?????????
};
*/

template<class Monoid>
class SegmentTree {
private:
    using T = typename Monoid::T;
    Monoid op;
    const int n;
    vector<T> dat;
    void prop_to(int i) { dat[i] = op(dat[2*i], dat[2*i+1]); }

public:
    SegmentTree(int _n) : n(_n), dat(2*_n, op.identity()) {}
    SegmentTree(const vector<T> &v) : n(v.size()), dat(2*n)
    {
        copy(v.begin(), v.end(), dat.begin() + n);
        for (int i=n-1; i>0; i--) prop_to(i);
    }

    void update(int i, const T &x)
    {
        dat[i += n] = x;
        while (i >>= 1) prop_to(i);
    }

    T get(int i) { return dat[i + n]; }

    T accumulate(int l, int r) // [l, r)
    {
        T acc_l = op.identity(), acc_r = op.identity();
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) acc_l = op(acc_l, dat[l++]);
            if (r & 1) acc_r = op(dat[r-1], acc_r);
        }
        return op(acc_l, acc_r);
    }
};

struct RMQ {
    using T = int;
    T operator() (const T &a, const T &b) { return min(a, b); }
    static constexpr T identity() { return (1LL<<31) - 1; }
};

struct RSQ {
    using T = int;
    T operator() (const T &a, const T &b) { return a + b; }
    static constexpr T identity() { return 0; }
};

int main()
{
    ios::sync_with_stdio(false);
    
    int N, Q;
    cin >> N >> Q;

    SegmentTree<RSQ> seg_tree(N);
    rep(q, Q) {
        int C, X, Y;
        cin >> C >> X >> Y;

        if (C == 0) {
            X--;
            seg_tree.update(X, seg_tree.get(X) + Y);
        } else {
            X--, Y--;
            cout << seg_tree.accumulate(X, Y+1) << endl;
        }
    }
}