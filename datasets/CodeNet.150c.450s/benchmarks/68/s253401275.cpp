#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    while (cin >> n, n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int ans = abs(a[n - 1] - a[0]);
        for (int i = 0; i < n - 1; ++i)
            for (int j = i + 1; j < n; ++j)
                ans = min(ans, abs(a[j] - a[i]));

        cout << ans << '\n';
    }

    return 0;
}

