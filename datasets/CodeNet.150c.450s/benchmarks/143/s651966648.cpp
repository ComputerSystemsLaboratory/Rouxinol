#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;
ll MOD = 1e9 + 7;

int main() {
    int N, Q, a, b, c;
    ll ans = 0;
    cin >> N;
    vector<int> cnt(1e5 + 5, 0);
    for (int i = 0; i < N; i++) {
        cin >> a;
        cnt[a]++;
        ans += a;
    }
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> b >> c;
        ans += (c - b) * cnt[b];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << ans << endl;
    }
    return 0;
}