#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int MAX_N = 1500 * 1000 + 5;
int size_w[MAX_N], size_h[MAX_N];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;

    while (cin >> n >> m, n != 0 && m != 0) {
        vector<int> h(n + 1), w(m + 1);

        memset(size_h, 0, sizeof(size_h));
        memset(size_w, 0, sizeof(size_w));

        h[0] = w[0] = 0;
        for (int i = 0; i < n; ++i)
            cin >> h[i + 1];
        for (int i = 0; i < m; ++i)
            cin >> w[i + 1];

        ++n, ++m;
        for (int i = 1; i < n; ++i)
            h[i] += h[i - 1];
        for (int i = 1; i < m; ++i)
            w[i] += w[i - 1];

        for (int l = 0; l < n - 1; ++l)
            for (int r = l + 1; r < n; ++r)
                ++size_h[h[r] - h[l]];
        for (int l = 0; l < m - 1; ++l)
            for (int r = l + 1; r < m; ++r)
                ++size_w[w[r] - w[l]];

        int lim = max(h[n - 1], w[m - 1]);
        int ans = 0;
        for (int d = 1; d <= lim; ++d)
            ans += size_h[d] * size_w[d];

        cout << ans << endl;
    }

    return 0;
}