#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for(int i = init; i < (n); i++)
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

ll func(ll x)
{
    return x * x;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll d;
    
    while(cin >> d)
    {
        ll sum = 0;
    
        FOR(i, 1, 600 / d)
        {
            sum += d * func(d * i);
        }

        cout << sum << endl;
    }

    return 0;
}
