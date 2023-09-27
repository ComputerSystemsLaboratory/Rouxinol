#include <bits/stdc++.h>
#define INF 1e18
#define int long long
#define Rep(i, a, n) for (int i = (a); i < (n); i++)
#define Repr(i, n, a) for (int i = (n); i >= (a); i--)
#define rep(i, n) Rep(i, 0, n)
#define repr(i, n) Repr(i, n, 0)
#define all(a) (a).begin(), (a).end()
using namespace std;
typedef pair<int, int> P;
typedef pair<int, P> PP;
const int mod = 1000000007;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<string> f(n);
        rep(i, n) cin >> f[i];
        int ans = 0;
        bool last = true, left = true, right = true;
        rep(i, n)
        {
            if (f[i] == "lu")
                left = false;
            if (f[i] == "ru")
                right = false;
            if (f[i] == "ld")
                left = true;
            if (f[i] == "rd")
                right = true;
            if (right && left)
            {
                if (!last)
                    ans++;
                last = true;
            }
            if (!right && !left)
            {
                if (last)
                    ans++;
                last = false;
            }
        }
        cout << ans << endl;
    }
}
