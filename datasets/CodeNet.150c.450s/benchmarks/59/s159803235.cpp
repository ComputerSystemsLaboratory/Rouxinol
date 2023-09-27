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
#define all(v) v.begin(), v.end()
#define NP(v) next_permutation(all(v))
#define debug(x) cerr << #x << ":" << x << endl;
#define debug2(x) for(auto a : x) cerr << a << " "; cerr << endl;
#define debug3(x) rep(i, sizeof(x)) cerr << x[i] << " "; cerr << endl;

vector<pii> around = {MP(1, 0), MP(-1, 0), MP(0, 1), MP(0, -1)};

//------------------------------------------------------

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    auto display = [](vector<int> &v) {
        rep(i, v.size()) cout << v[i] << (i == v.size() - 1 ? "\n" : " ");
    };

    display(a);

    REP(i, 1, n) {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
        display(a);
    }
    return 0;
}


