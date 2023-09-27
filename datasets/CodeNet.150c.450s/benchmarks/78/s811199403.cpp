//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using ll = long long;
using namespace std;

#define MAX 1000000
int const MOD = 1e9 + 7;
vector<ll> full_set, odd_set;
int dp1[MAX], dp2[MAX]; //最小数, 最小数(奇数のみ)
int main(void)
{
    for (ll i = 1; i * (i + 1) * (i + 2) / 6 < MAX; ++i)
    {
        ll t = i * (i + 1) * (i + 2) / 6;
        if (t % 2 == 1)
        {
            odd_set.push_back(t);
        }
        full_set.push_back(t);
    }

    for (int i = 0; i < MAX; ++i)
    {
        dp1[i] = 1e9;
        dp2[i] = 1e9;
    }
    dp1[0] = 0;
    dp2[0] = 0;
    for (int i = 0; i < full_set.size(); ++i)
    {
        for (int j = 0; j < MAX; ++j)
        {
            if (j - full_set[i] >= 0)
                dp1[j] = min(dp1[j], dp1[j - full_set[i]] + 1);
        }
    }

    for (int i = 0; i < odd_set.size(); ++i)
    {
        for (int j = 0; j < MAX; ++j)
        {
            if (j - odd_set[i] >= 0)
            {
                dp2[j] = min(dp2[j], dp2[j - odd_set[i]] + 1);
            }
        }
    }
    ll n;
    while (cin >> n, n)
    {
        cout << dp1[n] << " " << dp2[n] << endl;
    }
    return 0;
}
