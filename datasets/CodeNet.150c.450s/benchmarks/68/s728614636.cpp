#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

int n;

int main()
{
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = inf;
        for (int i = 0; i + 1 < n; i++)
        {
            ans = min(ans, a[i + 1] - a[i]);
        }
        cout << ans << endl;
    }
}
