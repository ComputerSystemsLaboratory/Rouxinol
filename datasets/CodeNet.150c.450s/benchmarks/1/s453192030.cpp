#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1000000000;
const int MOD = MM + 7;
const int MAX = 510000;
#define rep(i, n) for(ll i=0; i<n; i++)
#define Rep(i, j, n) for(ll i=j; i<n; i++)
#define all(vec) vec.begin(), vec.end()
template<class T> inline bool chmin(T& a, T b) {if(a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if(a < b) {a = b; return true;} return false;}
const ll INF = 1LL << 60;
const double pi = acos(-1.0);

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll dp[n];
    rep(i, n) dp[i] = INF;
    ll now = 0;
    rep(i, n) {
        if(dp[now] < a[i]) {
            dp[now + 1] = a[i];
            now++;
        } else {
            ll l = -1, r = now;
            while(r - l > 1) {
                ll mid = (l + r) / 2;
                if(dp[mid] < a[i]) l = mid;
                else r = mid;
            }
            dp[r] = a[i];
        }
    }
    ll ans = 0;
    rep(i, n) if(dp[i] != INF) ans++;
    cout << ans << endl;
}

