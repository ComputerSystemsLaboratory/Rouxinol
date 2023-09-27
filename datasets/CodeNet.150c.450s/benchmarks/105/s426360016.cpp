#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    vector<ll> basis(64, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            ll x = a[i];
            for (int j = 60; j >= 0; j--)
            {
                if (x & (1ll << j))
                {
                    if (basis[j] == -1)
                    {
                        basis[j] = x;
                        break;
                    }
                    else
                    {
                        x ^= basis[j];
                    }
                }
            }
        }
        else
        {
            ll x = a[i];
            int t = 0;
            for (int j = 60; j >= 0; j--)
            {
                if (x & (1ll << j))
                {
                    if (basis[j] == -1)
                    {
                        t = 1;
                        break;
                    }
                    else
                    {
                        x ^= basis[j];
                    }
                }
            }
            if (t == 1)
            {
                cout << 1 << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

/*

*/
