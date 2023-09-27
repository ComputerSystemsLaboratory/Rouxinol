#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

ll n, a, b, c, x;

int main()
{
    while (cin >> n >> a >> b >> c >> x)
    {
        if (n == 0)
            return 0;
        vector<ll> y(n);

        for (int i = 0; i < n; i++)
            cin >> y[i];

        ll ans = 0;

        for (int i = 0; i < n && ans <= 10001; i++, x = (a * x + b) % c, ans++)
        {
            while (x != y[i])
            {
                if (ans > 10001)
                    break;
                ans++;
                x = (a * x + b) % c;
            }
        }

        if (ans > 10001)
            cout << -1 << endl;
        else
            cout << ans - 1 << endl;
    }
}
