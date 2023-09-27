#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vint = vector<int>;
using vvint = vector<vint>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vchar = vector<char>;
using vvchar = vector<vchar>;

#define rep(i, n) for (int i = 0; i < n; ++i)
#pragma region Debug
istream &operator>>(istream &is, P &a)
{
    return is >> a.first >> a.second;
}
ostream &operator<<(ostream &os, const P &a) { return os << "(" << a.first << "," << a.second << ")"; }

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

ll INF = 1LL << 50;

int main()
{
    int v, e;
    cin >> v >> e;
    vvll dp(v, vll(v, INF));
    rep(i, e)
    {
        int f, t, c;
        cin >> f >> t >> c;
        dp[f][t] = c;
    }
    rep(i, v) dp[i][i] = 0;

    rep(k, v) rep(i, v) rep(j, v)
    {
        if (dp[i][k] == INF || dp[k][j] == INF)
        {
            continue;
        }
        chmin(dp[i][j], dp[i][k] + dp[k][j]);
    }

    rep(i, v)
    {
        if (dp[i][i] < 0)
        {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i, v)
    {
        rep(j, v)
        {
            if (dp[i][j] == INF)
            {
                cout << "INF";
            }
            else
            {
                cout << dp[i][j];
            }
            if (j == v - 1)
                continue;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
