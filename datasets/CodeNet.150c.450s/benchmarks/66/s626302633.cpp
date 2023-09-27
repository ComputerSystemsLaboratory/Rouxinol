#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<string> u(n);
    rep(i, n) cin >> u[i];

    int status = 0;
    int m; cin >> m;
    rep(i, m) {
        string s; cin >> s;
        if (count(all(u), s)) {
            if (status) cout << "Closed by "+s << endl;
            else cout << "Opened by "+s << endl;
            status ^= 1;
        } else {
            cout << "Unknown " + s << endl;
        }
    }
}
