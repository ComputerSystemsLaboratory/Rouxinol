#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow(ll m, ll n, ll mod)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = res * m % mod;
        }
        m = m * m % mod;
        n = n >> 1;
    }

    return res;
}

int main()
{
    ll m, n;
    cin >> m >> n;
    ll mod = 1000000007;
    cout << pow(m, n, mod) << endl;
    return 0;
}
