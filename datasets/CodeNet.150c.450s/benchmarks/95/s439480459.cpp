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

    while (true) {
        int n; cin >> n;
        if (!n) break;

        int ans = 0;
        int state = -1;
        rep(i, n) {
            string x; cin >> x;
            if (x[1]=='u') {
                if (state == 1) ans++;
                state = 1;
            } else {
                if (state == 0) ans++;
                state = 0;
            }
        }
        cout << ans << endl;
    }
}
