#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define each(i,a) for (auto&& i : a)
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define chmin(x,v) x = min(x, v)
#define chmax(x,v) x = max(x, v)

const ll linf = 1e18;
const double eps = 1e-12;
const double pi = acos(-1);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
    each(x,vec) is >> x;
    return is;
}
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
    rep(i,vec.size()) {
        if (i) os << " ";
        os << vec[i];
    }
    return os;
}
template<typename T>
ostream& operator<<(ostream& os, const vector< vector<T> >& vec) {
    rep(i,vec.size()) {
        if (i) os << endl;
        os << vec[i];
    }
    return os;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll h;
    const ll w = 5;
    while (cin >> h, h) {
        vector<vector<ll>> m(h, vector<ll>(w)); cin >> m;
        reverse(all(m));
        ll ans = 0;
        function<ll(ll,ll,ll,ll)> chain = [&](ll x, ll y, ll k, ll cnt) {
            if (k < 0 || x >= w || m[y][x] != k) return cnt;
            ll c = chain(x+1, y, k, cnt+1);
            if (c >= 3) {
                ans += m[y][x];
                m[y][x] = -1;
            }
            return c;
        };
        auto fall = [&]() {
            rep(y, h-1) rep(x, w) {
                if (m[y][x] < 0) {
                    m[y][x] = m[y+1][x];
                    m[y+1][x] = -1;
                }
            }
        };
        while (true) {
            bool is_updated = false;
            rep(y, h) rep(x, w) {
                if (chain(x, y, m[y][x], 0) >= 3) {
                    is_updated = true;
                }
            }
            if (!is_updated) break;
            rep(i, h) fall();
        }
        cout << ans << endl;
    }
}

