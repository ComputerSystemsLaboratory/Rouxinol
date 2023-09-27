#pragma gcc optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> ans(10001);
    for (int i = 1; i < 200; ++i)
    for (int j = 1; j < 200; ++j)
    for (int k = 1; k < 200; ++k) {
        int t = i * i + j * j + k * k + i * j + j * k + k * i;
        if (t <= 10000) ++ans[t];
    }
    for (int i = 1; i <= n; ++i) cout << ans[i] << '\n';
}