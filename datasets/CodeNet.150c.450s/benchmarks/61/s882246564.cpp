#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define ALL(x) x.begin(), x.end()
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
random_device rnd;
mt19937 mt(rnd());
using ll = long long;
using lld = long double;
using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<ll>;
using VVL = vector<VL>;
using PII = pair<int, int>;
const int IINF = 1 << 30;
const ll INF = 1ll << 60;
const ll MOD = 1000000007;

void solve(int n, int a, int b, int c, int x)
{
    VI y(n);
    rep(i, n) cin >> y[i];
    int ans = 0;
    rep(i, n)
    {
        while (y[i] != x)
        {
            x = (a * x + b) % c;
            ans++;
            if (ans > 10000)
            {
                cout << -1 << endl;
                return;
            }
        }
        if (i != n - 1)
        {
            x = (a * x + b) % c;
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, n)
    {
        solve(n, a, b, c, x);
    }

    return 0;
}
