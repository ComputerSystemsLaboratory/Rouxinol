#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const double EPS = 1e-8;

template<typename T> T chmax(T& a, const T& b){return a = (a > b ? a : b);}
template<typename T> T chmin(T& a, const T& b){return a = (a < b ? a : b);}

void solve() {
    int n;
    cin >> n;
    if(n == 0) exit(0);
    vector<pii> a(n);
    auto calc = [&](const string& s) {
        int ret = 0;
        rep(i, s.size()) if(s[i] != ':') {
            ret *= 10;
            ret += s[i] - '0';
        }
        return ret;
    };
    rep(i, n) {
        string s, t;
        cin >> s >> t;
        a[i].fi = calc(s);
        a[i].se = calc(t);
    }
    sort(all(a));
    int ans = 1;
    multiset<int> st;
    st.insert(a[0].se);
    REP(i, 1, n) {
        auto it = st.upper_bound(a[i].fi);
        if(it == st.begin()) ans++;
        else st.erase(--it);
        st.insert(a[i].se);
    }
    cout << ans << '\n';
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(1) solve();
    return 0;
}
