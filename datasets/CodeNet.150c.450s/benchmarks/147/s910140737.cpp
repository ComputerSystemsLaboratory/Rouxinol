#include <iostream>  // cout, endl, cin
#include <map>       // map
#include <cmath>     //sin, cos, tan

using namespace std;
typedef long long ll;

int main(void)
{
    ll n;
    cin >> n;
    map<ll, ll> ans;
    for(ll i = 1;i <= sqrt(n);i++)
    {
        for(ll j = 1;j <= sqrt(n);j++)
        {
            for(ll k = 1;k <= sqrt(n);k++)
            {
                ans[i*i + j*j + k*k + i*j + j*k + i*k]++;
            }
        }
    }
    //output
    for(ll i = 0;i < n;i++)
    {
        cout << ans[i + 1] << endl;
    }
}