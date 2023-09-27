#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)
#define rrep(i, n) for(int i=n-1; i>=0; i--)
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
const int INF = 1e9;
const ll LLINF = 1e18;
const ll MOD = 1e9+7;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int n, k;
ll a[100010], s[100010];
vector<ll> v;

int main() {
    while (cin >> n >> k) {
        if (n == 0) break;
        rep(i, n) cin >> a[i];
        rep(i, n) s[i+1] = s[i] + a[i];

        ll ans = 0;
        for (int i = 0; i + k - 1 < n; i++) {
            ll tmp = s[i+k] - s[i];
            chmax(ans, tmp);
        }
        v.push_back(ans);
    }
    for (ll &x: v) cout << x << endl;
}

