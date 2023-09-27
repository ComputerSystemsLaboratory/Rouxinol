#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    vector<int> r(n), max_n(n - 1, 1e9 + 1);
    for (int i = 0; i < n; ++i)
        cin >> r[i];

    max_n[n - 2] = r[n - 1];
    for (int i = n - 3; i >= 0; --i)
        max_n[i] = max(r[i + 1], max_n[i + 1]);

    int ans = -1e9 - 1;
    for (int i = 0; i < n - 1; ++i)
        ans = max(ans, max_n[i] - r[i]);

    cout << ans << "\n";

    return 0;
}