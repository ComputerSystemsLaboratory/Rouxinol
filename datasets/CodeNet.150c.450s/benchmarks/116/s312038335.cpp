#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;

int main() {
    int n, k;
    while (cin >> n >> k) {
        if (n == 0) break;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
    
        vector<ll> s(n+1);
        rep(i, n) s[1+i] += s[i] + a[i];
        
        ll ans = -INF;
        for(int i = 0; i <= n-k; i++) {
            ll val = s[k+i] -s[i];
            if (ans < val) ans = val;
        }
        cout << ans << endl;
    }
    return 0;
}
