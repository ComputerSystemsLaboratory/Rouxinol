#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<P, int> P3;
const ll MOD = ll(1e9)+7;
const int IINF = INT_MAX;
const ll LLINF = LLONG_MAX;
const int MAX_N = int(1e5 + 5);
const double EPS = 1e-11;
const int di[] = {0, 1, 0, -1}, dj[] = {1, 0, -1, 0};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define ALL(v) (v).begin(), (v).end()

int main() {
    ll n, m;
    while(cin >> n >> m, n){
        ll ans = 0;
        vector<P> v;
        REP(i,n){
            ll d, p;
            cin >> d >> p;
            v.push_back({p,d});
        }
        SORT(v);
        reverse(ALL(v));
        REP(i,n){
            ans += v[i].first*max(v[i].second-m,0LL);
            m -= min(v[i].second,m);
        }
        cout << ans << endl;
    }
    return 0;
}

