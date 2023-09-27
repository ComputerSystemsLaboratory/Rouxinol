#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; ++i)
typedef long long ll;
using namespace std;
const int INF = 1e9;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    for (int i = k; i < n; ++i) {
        if (a[i] > a[i - k])
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }

    return 0;
}