#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define lp(i, n) for (int i = 0; i < (n) ; ++i)
#define sz(v) (ll)(v).size()
#define int long long
#define mod 1000000007


void solve() {
        int n, m; cin >> n>> m;
        vector<int> v(n);

        lp(i, n) cin >> v[i];

        for (int i = m, j= 0; i< n; i++, j++) {
                if (v[j]< v[i]) {
                        cout << "Yes\n";
                } else cout << "No\n";
        }
}

int32_t main(){
ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
        int t = 1;
        //cin >> t;
        while ( t-- ) {
                solve();
        }
return 0;
}
