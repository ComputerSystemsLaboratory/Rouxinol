#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int n; cin >> n;
        if(!n) break;

        vector<int> seconds(24*60*60, 0);
        rep(i, n) {
            string s, t; cin >> s >> t;
            int sh = (s[0]-'0') * 10 + (s[1]-'0');
            int sm = (s[3]-'0') * 10 + (s[4]-'0');
            int ss = (s[6]-'0') * 10 + (s[7]-'0');
            int th = (t[0]-'0') * 10 + (t[1]-'0');
            int tm = (t[3]-'0') * 10 + (t[4]-'0');
            int ts = (t[6]-'0') * 10 + (t[7]-'0');
            seconds[sh*60*60+sm*60+ss] += 1;
            seconds[th*60*60+tm*60+ts] -= 1;
        }

        vector<int> imos(24*60*60+1, 0);
        rep(i, imos.size()) imos[i+1] = imos[i]+seconds[i];
        int ans = 0;
        for(const auto& ss: imos) ans = max(ans, ss);
        cout << ans << endl;
    }
}
