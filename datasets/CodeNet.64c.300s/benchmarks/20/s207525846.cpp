#include <iostream>
#include <cstdlib>
#include <cmath>
typedef long long ll;
using namespace std;

ll dF(ll x)
{
    return pow(x, 2);
}

ll dIntegral(ll d)
{
    ll ans = 0;
    for(int i = 1; i < 600 / d; i++)
    {
        ans += dF(i * d) * d;
    }

    return ans;
}

int main()
{
    ll d;
    while(cin >> d)
    {
        cout << dIntegral(d) << endl;
    }

    return EXIT_SUCCESS;
}