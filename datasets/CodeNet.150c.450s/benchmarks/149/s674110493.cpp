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

class UnionFind {
public:
    vector<int> par, rank_;

    UnionFind(int n = limit) : par(n), rank_(n, 0) {
        rep(i, n) par[i] = i;
    }

    int root(int x) {
        return par[x] == x ? x : par[x] = root(par[x]);
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;

        if (rank_[x] < rank_[y]) {
            par[x] = y;
        } else {
            par[y] = x;
            if (rank_[x] == rank_[y]) rank_[x]++;
        }
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    UnionFind uf;
    int n, q;
    cin >> n >> q;

    rep(i, q) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) uf.unite(x, y);
        else cout << uf.same(x, y) << endl;
    }

    return 0;
}


