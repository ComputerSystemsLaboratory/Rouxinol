#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1<<30;
const ll LINF = 1LL<<60;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for (auto i : a) sum += i;

    map<int, int> cnt; // value => cnt
    for (auto i : a) cnt[i] += 1;

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int b, c; cin >> b >> c;
        int diff = c-b;
        sum += diff*cnt[b];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << sum << endl;
    }

    return 0;
}