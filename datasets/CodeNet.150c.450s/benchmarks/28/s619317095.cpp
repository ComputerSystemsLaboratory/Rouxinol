#include <bits/stdc++.h>

using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0); cout.tie(0)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int maxn = 100000;
int n, k;
ll a[maxn];

int check(ll mid) {
    int t = 0;
    for (int i = 0; i < k; ++i) {
        int s = 0;
        while (s + a[t] <= mid) {
            s += a[t++];
            if (t == n)
                return n;
        }
    }
    return t;
}

int solve() {
    ll l = 0;
    ll r=10000000000;
//    ll r = 20;
    while (l < r - 1) {
        ll mid = (l + r) / 2;
        ll v = check(mid);
        if (v == n) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    ll ans = solve();
    cout << ans << endl;
    return 0;
}
