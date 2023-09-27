#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);
#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, init, n) for (int i = init; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to;
    int cost;
};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    int N;

    while(cin >> N, N)
    {   
        vector<ll> a(N);
        rep(i, N) cin >> a[i];        

        vector<ll> dp(N, 0);

        dp[0] = a[0];

        rep(i, N - 1)
            dp[i + 1] = max(dp[i] + a[i + 1], a[i + 1]);

        ll ans = -llINF;

        rep(i, N) ans = max(dp[i], ans);

        cout << ans << endl;
        
    }

    return 0;
}
