#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;

    // Input
    cin >> n;
    vector<int> s(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    cin >> q;

    int ans = 0, idx, t;
    for (int i = 0; i < q; ++i) {
        cin >> t;
        s[n] = t;
        idx = 0;
        while (s[idx] != t)
            ++idx;
        if (idx != n)
            ++ans;
    }

    cout << ans << endl;

    return 0;
}