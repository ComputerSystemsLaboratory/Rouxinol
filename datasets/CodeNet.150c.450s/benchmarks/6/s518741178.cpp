#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
#define all(v) v.begin(), v.end()
#define repi(i, n, init) for (ll i = init; i < (n); i++)
#define repd(i, n, init) for (ll i = (n); i >= init; i--)
#define repm(i, m) for (auto i = m.begin(); i != m.end(); i++)
#define repb(bit, n, init) for (ll bit = init; bit < (1 << n); ++bit)

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << (a < b && b < c ? "Yes" : "No") << endl;
    return 0;
}
