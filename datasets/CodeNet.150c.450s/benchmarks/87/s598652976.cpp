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
using vp = vector<P>;
using vpp = vector<pair<P, P>>;
using vvp = vector<vp>;

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

int popRow(vvint &g, int y, int w = 5)
{
    vint row = g[y];
    int score = 0;

    int li = 0, l = row[0];
    rep(i, w)
    {
        if (row[i] != l)
        {
            l = row[i];
            li = i;
            continue;
        }

        if (i - li >= 2)
        {
            for (int j = i; j >= li && g[y][j]; j--)
            {
                score += g[y][j];
                g[y][j] = 0;
            }
        }
    }

    return score;
}

int pop(vvint &g, int h, int w = 5)
{
    int score = 0;
    rep(y, h)
    {
        score += popRow(g, y);
    }
    return score;
}

void shift(vvint &g, int h, int w = 5)
{
    for (int y = h - 2; y >= 0; y--)
        rep(x, 5)
        {
            int d = 1;
            while (y + d < h && g[y + d][x] == 0)
            {
                g[y + d][x] = g[y + d - 1][x];
                g[y + d - 1][x] = 0;
                d++;
            }
        }
}

int main()
{
    int h, w = 5;
    while (cin >> h, h)
    {
        vvint g(h, vint(w));
        rep(i, h) rep(j, w) cin >> g[i][j];

        int ans = 0;
        while (true)
        {
            int newScore = pop(g, h, w);
            ans += newScore;
            shift(g, h);

            if (newScore == 0)
                break;
        }

        cout << ans << endl;
    }

    return 0;
}
