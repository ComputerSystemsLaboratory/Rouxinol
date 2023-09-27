#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0, i##_len = (n); i < i##_len; i++)
#define reps(i, s, n) for(ll i = (s), i##_len = (n); i < i##_len; i++)
#define rrep(i, n) for(ll i = (n) - 1; i >= 0; i--)
#define rreps(i, e, n) for(ll i = (n) - 1; i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define len(x) ((ll)(x).length())

vector<pair<ll, ll>> factorize(ll n) {
    vector<pair<ll, ll>> res;
    for (ll i = 2; (i * i) <= n; i++) {
        if (n % i) continue;
        res.emplace_back(i, 0);
        while((n % i) == 0) {
            n /= i;
            res.back().second++;
        }
    }
    if (n != 1) res.emplace_back(n, 1);
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    auto fac = factorize(n);
    vector<ll> ans;
    rep(i, sz(fac)) {
        rep(j, fac[i].second) {
            ans.push_back(fac[i].first);
        }
    }
    printf("%lld:", n);
    rep(i, sz(ans)) printf(" %lld", ans[i]);
    printf("\n");
    return 0;
}

