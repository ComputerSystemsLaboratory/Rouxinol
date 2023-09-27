#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

int m, n, M;

int main()
{
    while (cin >> m >> n >> M)
    {
        if (m == 0 && n == 0 && M == 0)
            return 0;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        ll g = -inf, ans = 0;
        for (int i = n - 1; i < M; i++)
        {
            if (a[i] - a[i + 1] >= g)
            {
                g = a[i] - a[i + 1];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
}
