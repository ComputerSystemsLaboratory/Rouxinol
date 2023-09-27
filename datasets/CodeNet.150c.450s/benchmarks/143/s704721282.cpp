#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define endl "\n"
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll sum = 0;
    vector<ll> a(100010, 0);
    rep(i, 0, n) {
        ll x;
        cin >> x;
        sum += x;
        a[x]++;
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        ll b, c;
        cin >> b >> c;
        sum += (c - b) * a[b];
        a[c] += a[b];
        a[b] = 0;
        cout << sum << endl;
    }
    return 0;
}
