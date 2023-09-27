#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for (int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main()
{
    int coins[6] = {1, 5, 10, 50, 100, 500};

    cin.tie(0);
    ios::sync_with_stdio(false);

    int value;
    reverse(coins, coins + 6);

    while (cin >> value, value)
    {
        value = 1000 - value;

        int ans = 0;

        REP(i, 6)
        {
            ans += value / coins[i];

            value %= coins[i];
        }

        cout << ans << endl;
    }

    return 0;
}
