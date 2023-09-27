#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
        {
            break;
        }
        vector<int> s(n);
        rep(i, n) cin >> s[i];

        vector<ll> cum(n + 1, 0);
        rep(i, n)
        {
            cum[i + 1] += cum[i] + s[i];
        }
        ll ans = 0;
        rep(i, n + 1 - k)
        {
            ans = max(ans, cum[k + i] - cum[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
