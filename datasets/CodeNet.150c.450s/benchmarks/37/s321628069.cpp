#include <bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//using multiInt = boost::multiprecision::cpp_int;

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
#define MT make_tuple
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible") << endl
#define all(v) v.begin(), v.end()
#define NP(v) next_permutation(all(v))
#define dbg(x_) cerr << #x_ << ":" << x_ << endl;
#define dbg2(x_) for(auto a_ : x_) cerr << a_ << " "; cerr << endl;
#define dbg3(x_ , sx_) rep(i, sx_) cerr << x_[i] << " "; cerr << endl;
vector<int> Dx = {0, 0, -1, 1, -1, 1, -1, 1, 0};
vector<int> Dy = {1, -1, 0, 0, -1, -1, 1, 1, 0};

inline ll CEIL(ll a, ll b) {
    return (a + b - 1) / b;
}

//------------------------------------------------------

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ld a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        ld x = round((c * e - b * f) / (a * e - b * d) * 1000.0) / 1000.0;
        ld y = round((c * d - a * f) / (b * d - a * e) * 1000.0) / 1000.0;
        if (x == -0.000) x = 0.000;
        if (y == -0.000) y = 0.000;
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }

    return 0;
}


