#include<bits/stdc++.h>
#define forr(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = 1; i <= (n); i++)
#define ALL(a) (a.begin()),(a.end())
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll, ll> LP;
const ll LINF = 1LL<<60;
const int INF = 1001001001;

/* --------------------------------------------------- */

int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    rep(i, d) {
        rep(j, 26) cin >> s[i][j];
    }
    vector<int> t(d);
    rep(i, d) {
        cin >> t[i];
        t[i]--;
    }

    vector<int> lastDay(26, 0);
    ll ans = 0;
    rep(i, d) {
        ans += s[i][t[i]];
        lastDay[t[i]] = i + 1;
        ll tot = 0;
        rep(j, 26) {
            tot += c[j] * (i + 1 - lastDay[j]);
        }
        ans -= tot;
        cout << ans << endl;
    }

    return 0;
}