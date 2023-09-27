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

ll dp[110][30];

int main()
{   
    int N;
    cin >> N;
    vector<int> num(N);

    rep(i, N) cin >> num[i];

    dp[0][num[0]] = 1;

    rep(i, N - 1)
    {
        rep(j, 21)
        {
            if(dp[i][j] == 0) continue;

            int plus = j + num[i + 1], minus = j - num[i + 1];

            if(0 <= plus && plus <= 20)
                dp[i + 1][plus] += dp[i][j];
            
            if(0 <= minus && minus <= 20)
                dp[i + 1][minus] += dp[i][j];
        }
    }

    cout << dp[N - 2][num[N - 1]] << endl;
    
    return 0;
}
