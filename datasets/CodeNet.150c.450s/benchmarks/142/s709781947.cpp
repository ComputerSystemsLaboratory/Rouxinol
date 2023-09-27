#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (ll i = 0; i < n - k; ++i) {
        if (a[i] < a[i + k]) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
}