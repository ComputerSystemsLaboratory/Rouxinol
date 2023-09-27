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

int parseTime(string s)
{
    //hh:mm:ss
    int res = 0;
    res += (s[0] - '0') * 10 * 3600;
    res += (s[1] - '0') * 3600;
    res += (s[3] - '0') * 600;
    res += (s[4] - '0') * 60;
    res += (s[6] - '0') * 10;
    res += s[7] - '0';

    return res;
}

const int TMAX = 24 * 60 * 60;
int c[TMAX + 1];

int main()
{
    int n;
    while (cin >> n, n)
    {
        memset(c, 0, sizeof(c));
        rep(i, n)
        {
            string s;
            cin >> s;
            int t = parseTime(s);
            c[t]++;
            cin >> s;
            t = parseTime(s);
            c[t]--;
        }

        int ans = 0;
        int now = 0;
        rep(i, TMAX + 1)
        {
            now = now + c[i];
            ans = max(ans, now);
        }
        cout << ans << endl;
    }

    return 0;
}
