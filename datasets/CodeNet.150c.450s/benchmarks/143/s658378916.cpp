#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int cnt[N], a[N];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    long long sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        sum += 0ll + a[i];
    }
    int q;
    cin >> q;
    for (int i = 0, b, c; i < q; i++) {
        cin >> b >> c;
        sum += 1ll * (c - b) * cnt[b];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << sum << '\n';
    }
}
