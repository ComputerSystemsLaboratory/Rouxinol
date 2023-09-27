#include <bits/stdc++.h>
#define INF 1e18
#define int long long
#define Rep(i, a, n) for (int i = (a); i < (n); i++)
#define Repr(i, n, a) for (int i = (n); i >= (a); i--)
#define rep(i, n) Rep(i, 0, n)
#define repr(i, n) Repr(i, n, 0)
#define all(a) a.begin(), a.end()
using namespace std;
typedef pair<int, int> P;
typedef pair<int, P> PP;
const int mod = 1000000007;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r;
    while (1)
    {
        cin >> n >> r;
        if (n == 0 && r == 0)
            break;
        vector<int> v(n);
        rep(i, n) v[i] = n - i;
        rep(i, r)
        {
            int p, c;
            cin >> p >> c;
            vector<int> tmp1(p - 1), tmp2(c);
            rep(i, p - 1) tmp1[i] = v[i];
            for (int i = p - 1; i < p + c - 1; i++)
                tmp2[i - p + 1] = v[i];
            for (int i = 0; i < c; i++)
                v[i] = tmp2[i];
            for (int i = c; i < c + p - 1; i++)
                v[i] = tmp1[i - c];
        }
        cout << v[0] << endl;
    }
}
