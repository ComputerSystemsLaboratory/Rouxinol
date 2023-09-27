#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int MAX_WH = 1500 * 1000 + 5;
const int MAX_N = 1501;
int size_w[MAX_WH], size_h[MAX_WH];
int h[MAX_N], w[MAX_N];

int main()
{
    int n, m;

    while (true) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;

        memset(size_h, 0, sizeof(size_h));
        memset(size_w, 0, sizeof(size_w));

        h[0] = w[0] = 0;
        for (int i = 0; i < n; ++i)
            scanf("%d", &h[i + 1]);
        for (int i = 0; i < m; ++i)
            scanf("%d", &w[i + 1]);

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

        int lim = min(h[n - 1], w[m - 1]);
        int ans = 0;
        for (int d = 1; d <= lim; ++d)
            ans += size_h[d] * size_w[d];

        cout << ans << endl;
    }

    return 0;
}