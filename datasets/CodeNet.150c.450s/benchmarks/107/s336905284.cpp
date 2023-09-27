// Levensthein distance レーベンシュタイン距離
// Edit distance 編集距離
#include <bits/stdc++.h>
using namespace std;
#define int long long
using P = pair<int, int>;
using V = vector<int>;
constexpr array<int, 4> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
constexpr int INF = 1234567890, MOD = 1000000000 + 7;
// constexpr int MOD = 998244353;
// constexpr int INF2 = 1000000000000000000LL+7;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
constexpr int ceil(int a, int b) { return (a + b - 1) / b; }
constexpr int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
constexpr int fact(int n) { return n > 1 ? n * fact(n - 1) % MOD : 1; }
constexpr int modpow(int a, int n)
{
    int rtn = 1;
    while (n > 0)
    {
        if (n & 1)
            rtn = rtn * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return rtn;
}
int modinv(int a)
{
    int b = MOD, u = 1, v = 0;
    while (b)
    {
        int t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= MOD;
    if (u < 0)
        u += MOD;
    return u;
}

signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout << setprecision(10);

    // 編集距離
    // 文字列Sを操作して文字列Tにするのにかかるコスト
    // 操作とは以下
    // 💙 1文字挿入
    // 💙 1文字削除
    // 💙 1文字置換

    string s, t;
    cin >> s >> t;

    // dp[i][j]: Si Sのi文字目までと Tj Tのj文字目までの編集距離
    // i = 0,1,...,|S|
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));
    // 空文字からTのi文字目までをつくるなら i回文字挿入すればいい
    for (int i = 0; i <= t.size(); i++)
        dp[0][i] = i;
    // Sのi文字目までから空文字をつくるなら i回文字削除すればいい
    for (int i = 0; i <= s.size(); i++)
        dp[i][0] = i;

    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 1; j <= t.size(); j++)
        {
            // コストは Si, Tj-1 のコスト+1 Siに文字を挿入している
            const int cost_insert = dp[i][j - 1] + 1;
            // コストは Si-1, Tj のコスト+1  Si-1の文字を削除している
            const int cost_delete = dp[i - 1][j] + 1;
            // コストは Si-1, Tj-1 のコスト+1 s[i]==t[j]ならば置換しないので1たさない
            const int cost_replace = dp[i - 1][j - 1] + (s[i-1] != t[j-1]);

            dp[i][j] = min(cost_insert, min(cost_delete, cost_replace));
        }
    }

    cout << dp[s.size()][t.size()] << endl;
}

