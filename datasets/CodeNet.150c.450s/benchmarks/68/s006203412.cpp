#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    while (cin >> n, n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = a[n - 1] - a[0];
        for (int i = 0; i < n - 1; ++i)
            ans = min(ans, a[i + 1] - a[i]);

        cout << ans << '\n';
    }

    return 0;
}