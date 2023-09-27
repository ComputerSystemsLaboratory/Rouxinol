#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> w(n);
    for (int i = 0; i < n; ++i) cin >> w[i];

    auto check = [&](int capacity)
    {
        ll i {};
        for (int j = 0; j < k; ++j)
        {
            ll sum {};
            while (i < n && sum + w[i] <= capacity)
            {
                sum += w[i];
                i++;
            }

            if (i == n) return true;

        }
        return false;
    };

    ll left = 0, right = 100000 * 10000;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;
        if (check(mid)) right = mid;
        else left = mid;
    }


    cout << right << endl;

    return 0;
}