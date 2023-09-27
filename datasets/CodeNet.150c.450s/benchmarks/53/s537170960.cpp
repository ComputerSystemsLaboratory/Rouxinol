#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    ll limit = n;
    vector<ll> ans;
    for (ll i = 2; i * i < limit; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            ans.push_back(i);
        }
    }
    if (n > 1)
    {
        ans.push_back(n);
    }

    cout << limit << ":";
    for (ll value : ans)
    {
        cout << " " << value;
    }
    cout << endl;
    return 0;
}
