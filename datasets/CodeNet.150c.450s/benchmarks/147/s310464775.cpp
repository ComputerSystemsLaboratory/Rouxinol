#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <bitset>

using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 5;

ll mod_pow(ll k, ll p)
{
    if (k == 0)
    {
        return 1 % p;
    }
    if (k == 1)
    {
        return 2 % p;
    }

    if (k % 2 == 0)
    {
        ll tmp = mod_pow(k / 2, p);
        return tmp * tmp % p;
    }
    else
    {
        ll tmp = mod_pow((k - 1) / 2, p);
        tmp *= tmp;
        tmp %= p;
        tmp *= 2;
        tmp %= p;
        return tmp;
    }
}

ll pow_fast(ll n, ll k)
{
    if (k == 0)
    {
        return 1;
    }
    if (k == 1)
    {
        return n;
    }

    if (k % 2 == 0)
    {
        ll tmp = pow_fast(n, k / 2) % MOD;
        return tmp * tmp % MOD;
    }
    else
    {
        ll tmp = pow_fast(n, (k - 1) / 2);
        return tmp * tmp * 2;
    }
}

int main()
{
    ll N;
    cin >> N;

    map<ll, ll> mp;
    for (ll x = 1; x <= 1e2; x++)
    {
        for (ll y = 1; y <= 1e2; y++)
        {
            for (ll z = 1; z <= 1e2; z++)
            {
                mp[x * x + y * y + z * z + x * y + y * z + z * x] += 1;
            }
        }
    }
    for (ll i = 1; i <= N; i++)
    {
        cout << mp[i] << endl;
    }
        
}