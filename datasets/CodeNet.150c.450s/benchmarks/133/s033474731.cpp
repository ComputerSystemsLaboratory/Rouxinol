#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;

ll d;
ll c[29];
ll a[369][29];
ll t[369];
ll b[29];

int main()
{
    scanf("%lld", &d);
    for(ll i = 1; i <= 26; i++)
    {
        scanf("%lld", &c[i]);
    }
    for(ll i = 1; i <= d; i++)
    {
        for(ll j = 1; j <= 26; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= d; i++)
    {
        scanf("%lld", &t[i]);
        for(ll j = 1; j <= 26; j++)
        {
            if(j != t[i]) b[j]++;
            else b[j] = 0;
            ans -= b[j] * c[j];
        }
        ans += a[i][t[i]];
        printf("%lld\n", ans);
    }
    return 0;
}
