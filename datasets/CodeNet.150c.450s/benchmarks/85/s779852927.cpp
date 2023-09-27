
// #define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define rep(i, n) for (int i = 0; i < n; ++i)
#pragma region Debug
template <typename T>
void view(const std::vector<T> &v)
{
    for (const auto &e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void view(const std::vector<std::vector<T>> &vv)
{
    for (const auto &v : vv)
    {
        view(v);
    }
}
#pragma endregion
#pragma region chminmax
template <typename T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
#pragma endregion

ll INF = 1LL << 31;
int main()
{
    int n;
    cin >> n;
    vector<P> m(n);
    rep(i, n) cin >> m[i].first >> m[i].second;

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, INF));
    rep(i, n + 1) dp[i][i] = 0;

    // start by doing a 1 matrix times 1 matrix multiplication
    // AB = A.x * A.y * B.y
    for (int w = 1; w <= n; w++)
    {
        // for each possible left most matrix for each width
        // i.e. until your "right" matrix defined by the width is m[n-1]
        for (int l = 0; l <= n - w; l++)
        {
            // as seen here.
            int r = l + w - 1;

            // for every matrix inbetween:
            for (int k = l; k < r; k++)
            {
                // multiplying (AB)(CDE) gives you an (A.x * B.y) x (C.x=B.y * E.y) mult.
                // Thus, this is a A.x * B.y * E.y + dp[A][B] + dp[C][E].

                // Do this for all possible combinations
                // e.g. A(BCD), (AB)(CD), (ABC)D where ABC-> A(BC) or (AB)C , etc.
                chmin(dp[l][r], m[l].first * m[k].second * m[r].second + dp[l][k] + dp[k + 1][r]);
            }
        }
    }

    cout << dp[0][n - 1] << endl;

    return 0;
}
