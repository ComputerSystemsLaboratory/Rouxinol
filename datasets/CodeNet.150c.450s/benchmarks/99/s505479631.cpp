#include <bits/stdc++.h>
#define INF 1e18
#define int long long
#define Rep(i, a, n) for (int i = (a); i < (n); i++)
#define Repr(i, n, a) for (int i = (n); i >= (a); i--)
#define rep(i, n) Rep(i, 0, n)
#define repr(i, n) Repr(i, n, 0)
#define all(a) a.begin(), a.end()
using namespace std;
typedef pair<int, int> P;
typedef pair<int, P> PP;
const int mod = 1000000007;

int solve(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'm')
        {
            if (i == 0 || !(s[i - 1] >= '1' && s[i - 1] <= '9'))
                res += 1000;
            else
                res += 1000 * (s[i - 1] - '0');
        }
        if (s[i] == 'c')
        {
            if (i == 0 || !(s[i - 1] >= '1' && s[i - 1] <= '9'))
                res += 100;
            else
                res += 100 * (s[i - 1] - '0');
        }
        if (s[i] == 'x')
        {
            if (i == 0 || !(s[i - 1] >= '1' && s[i - 1] <= '9'))
                res += 10;
            else
                res += 10 * (s[i - 1] - '0');
        }
        if (s[i] == 'i')
        {
            if (i == 0 || !(s[i - 1] >= '1' && s[i - 1] <= '9'))
                res += 1;
            else
                res += 1 * (s[i - 1] - '0');
        }
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    rep(i, n)
    {
        string s, t;
        cin >> s >> t;
        int N = solve(s), M = solve(t);
        int sum = N + M;
        string ans = "";
        int cnt = 0;
        char c[4] = {'m', 'c', 'x', 'i'};
        while (sum > 0)
        {
            int num = sum % 10;
            sum /= 10;
            if (num == 0)
            {
                cnt++;
                continue;
            }
            ans.push_back(c[3 - cnt]);
            if (num != 1)
                ans.push_back((char)(num + '0'));
            cnt++;
        }
        reverse(all(ans));
        cout << ans << endl;
    }
}
