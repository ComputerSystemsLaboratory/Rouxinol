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
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    cin >> q;
    vector<int> t(q);
    for (int i = 0; i < q; ++i)
        cin >> t[i];

    int ans = 0;
    for (int i = 0; i < q; ++i)
        for (int j = 0; j < n; ++j)
            if (t[i] == s[j]) {
                ++ans;
                break;
            }

    cout << ans << endl;

    return 0;
}