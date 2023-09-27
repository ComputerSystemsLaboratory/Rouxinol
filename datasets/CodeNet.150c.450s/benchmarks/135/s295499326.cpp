#include<bits/stdc++.h>
using namespace std;

int cnth[1500010], cntw[1500010];

int main()
{
    while (1) {
        int n, m;
        cin >> n >> m;
        if (!n) return 0;

        vector<int> cnth(n * 1000 + 10, 0);
        vector<int> cntw(m * 1000 + 10, 0);
        vector<int> sumh(n + 1, 0);
        vector<int> sumw(m + 1, 0);
        for (int i = 1; i <= n; ++i) {
            int a;
            cin >> a;
            sumh[i] = sumh[i - 1] + a;
            for (int j = 0; j < i; ++j)
                ++cnth[sumh[i] - sumh[j]];
        }
        for (int i = 1; i <= m; ++i) {
            int a;
            cin >> a;
            sumw[i] = sumw[i - 1] + a;
            for (int j = 0; j < i; ++j)
                ++cntw[sumw[i] - sumw[j]];
        }
        int lim = min(n, m) * 1000 + 10;
        long long ans = 0;
        for (int i = 1; i < lim; ++i) {
            ans += cnth[i] * cntw[i];
        }
        cout << ans << "\n";
    }
}