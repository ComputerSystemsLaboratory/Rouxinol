#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
typedef long long ll;
long long mod = 1e9 + 7;
const int iINF = 0x3f3f3f3f;
const long long INF = 1LL << 60;
using namespace std;
using pint = pair<int, int>;

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

int main()
{
    int d;
    cin >> d;
    int c[30]={}, last[30]={}, s[400][30]={}, v = 0;
    rep(i, 26)
            cin >>
        c[i];

    rep(i, d) rep(j, 26)
            cin >>
        s[i][j];

    rep(i, 26)
        last[i] = 0;

    rep(i, d)
    {
        int t;
        cin >> t;
        t--;

        v += s[i][t];
        last[t] = i + 1;

        rep(j, 26)
        {
            if (j == t)
                continue;
            v -= c[j] * (i + 1 - last[j]);
        }
        cout << v << endl;
    }

    return 0;
}
