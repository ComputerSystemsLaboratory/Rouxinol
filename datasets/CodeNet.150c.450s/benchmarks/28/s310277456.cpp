

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k, w[100000];
ll INF = 0xfffffffffffffff;

bool ok(ll p) {
    ll now = 0;
    ll cnt = 1;
    for(int i = 0; i < n; i++) {
        if(now + w[i] <= p) {
            now += w[i];
        } else {
            if(p < w[i])
                return false;
            cnt++;
            now = w[i];
        }
    }
    return cnt <= k;
}

int main() {
    cin >> n >> k;
    for(ll i = 0; i < n; i++) {
        cin >> w[i];
    }
    ll lb = 0;
    ll ans = 100000 * n;

    while(ans - lb > 1) {
        ll mid = (ans + lb) / 2;
        if(ok(mid))
            ans = mid;
        else
            lb = mid;
    }
    cout << ans << endl;
}
