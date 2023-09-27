#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define debug(x) cerr << #x << ": " << x << endl;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

int main() {
    ll n;
    while(cin >> n) {
        if(n == 0) return 0;

        ll MAX = 24 * 3600 + 60 * 60 + 60 + 1;

        vll s(MAX, 0);

        rep(i, n) {
            int hs, ms, ss, he, me, se;
            scanf("%d:%d:%d", &hs, &ms, &ss);
            ll start = 3600 * hs + 60 * ms+ ss;
            scanf("%d:%d:%d", &he, &me, &se);
            ll end = 3600 * he + 60 * me + se;

            s[start]++;
            s[end]--;
        }

        rep(i, MAX) if(i > 0) s[i] += s[i-1];
        ll ans = 0;
        rep(i, MAX) chmax(ans, s[i]);
        cout << ans << endl;
    }

}

