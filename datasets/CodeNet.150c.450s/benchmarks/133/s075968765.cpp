#include <bits/stdc++.h>
using namespace std;

#define int long long
#define INT int
#define MOD 1000000007

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i < (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define all(i) (i).begin(), (i).end()
#define rall(i) (i).begin(), (i).end(), greater<int>()
#define elif else if
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define fst first
#define sec second
template <typename T>
void print(T x)
{
    std::cout << x << '\n';
}
typedef long long ll;
const long long INF = 1LL << 60;

signed main()
{
    int D;
    cin >> D;
    vector<int> c(26);
    rep(i, 26)
    {
        cin >> c[i];
    }
    vector<vector<int>> s(D, vector<int>(26));

    rep(i, D)
    {
        rep(j, 26)
        {
            cin >> s[i][j];
        }
    }
    vector<int> t(D);
    rep(i, D)
    {
        cin >> t[i];
        t[i]--;
    }

    vector<int> v(D);

    int last[26] = {0};

    rep(d, D)
    {
        v[d] = s[d][t[d]];
        if (d > 0)
        {
            v[d] += v[d - 1];
        }
        last[t[d]] = d + 1;
        int down = 0;
        rep(i, 26)
        {
            down += c[i] * ((d + 1) - last[i]);
        }
        v[d] -= down;
    }

    rep(i, D)
    {
        cout << v[i] << endl;
    }
}