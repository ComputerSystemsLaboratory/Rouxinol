#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
template<typename Q_temp>
using smaller_queue = priority_queue <Q_temp, vector<Q_temp>, greater<Q_temp> >;

const int INF = (int) 1e9;
const ll LINF = (ll) 4e18;
const ll MOD = (ll) (1e9 + 7);
const double PI = acos(-1.0);
const int limit = 100010;

#define REP(i,m,n) for(ll i = m; i < (ll)(n); ++i)
#define rep(i,n) REP(i, 0, n)
#define MP make_pair
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl
#define NP(v) next_permutation(v.begin(),v.end())
#define debug(x) cout << #x << ":" << x << endl;
#define debug2(x) for(auto a : x) cout << a << " "; cout << endl;
#define debug3(x) rep(i, sizeof(x)) cout << x[i] << " "; cout << endl;

vector<pii> around = {MP(1, 0), MP(-1, 0), MP(0, 1), MP(0, -1)};

//------------------------------------------------------
const int MAX_N = 1 << 17; //100000ぐらい

class SegmentTree {
public:
    int N; //要素数
    vector<ll> dat;

    SegmentTree(int n_) {
        N = 1;
        while (N < n_) N *= 2;
        dat.assign(2 * N - 1, 0);
    }

    void update(int k, int a) { //k番目(0-indexed)にaを可算
        k += N - 1; //一番下
        dat[k] += a;
        while (k > 0) {
            k = (k - 1) / 2; //1つ上がる
            //更新
            dat[k] = dat[k * 2 + 1] + dat[k * 2 + 2];
        }
    }

    //[a, b)の値（最小値/和/etc.）を求める
    //kは節点の番号、l, rはその節点が[l,r)に対応づいていることを表す
    //外からはquery(a, b, 0, 0, N)と呼ぶ

    int query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) return 0;
        //[a, b)が[l,r)を完全に含む
        if (a <= l && r <= b) return dat[k];
        else {
            int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
            int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
            return vl + vr;
        }
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, q;
    cin >> n >> q;
    SegmentTree sg(n + 1);

    rep(i, q) {
        ll com, x, y;
        cin >> com >> x >> y;
        if (com == 0) sg.update(x, y);
        else cout << sg.query(x, y + 1, 0, 0, sg.N) << endl;
    }
    return 0;
}
