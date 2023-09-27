#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)
#define rep1(i, n) for(int i=1; i<=n; i++)
#define repr(i, n) for(int i=n-1; i>=0; i--)
#define repr1(i, n) for(int i=n; i>=1; i--)
#define all(v) v.begin(),v.end()
using ll = long long;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const int INF = 1e9;
const ll LLINF = 1e18;
const ll MOD = 1e9+7;
const double EPS = 1e-10;
const double PI = acos(-1);
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int d;
ll c[30];
ll s[400][30];
ll t[400];

int main() {
    cin >> d;
    rep(i, 26) cin >> c[i];
    rep(i, d) rep(j, 26) cin >> s[i][j];
    rep(i, d) cin >> t[i];

    vector<ll> last(26, 0);

    ll score = 0;
    rep(i, d) {
        score += s[i][t[i] - 1];
        last[t[i] - 1] = i + 1;
        rep(j, 26) {
            score -= c[j] * (i + 1 - last[j]);
        }
        cout << score << endl;
    }
}
