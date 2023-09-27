#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define ll long long
#define lld long double
#ifdef DEBUG
#define line() cout << "[" << __LINE__ << "] ";
#define dump(i) cout << #i ": " << i << " ";
#define dumpl(i) cout << #i ": " << i << endl;
#else
#define line(i)
#define dump(i)
#define dumpl(i)
#endif
using namespace std;

int f(int n)
{
    int i = 1;
    while (true)
    {

        if (i * i >= n)
        {
            return i;
        }
        i++;
    }
}
bool issmall(int h1, int w1, int h2, int w2)
{
    return ((h1 * h1 + w1 * w1 < h2 * h2 + w2 * w2) || ((h1 * h1 + w1 * w1 == h2 * h2 + w2 * w2) && (h1 < h2)));
}

int main(int argc, char const *argv[])
{
    while (true)
    {
        double h, w;
        cin >> h >> w;
        if (h == 0)
            break;
        int ansh = 150, answ = 150;
        int ansl = 101010;
        rep(i, 1, 151)
        {
            rep(j, i + 1, 151)
            {

                if (issmall(h, w, i, j))
                {
                    if (issmall(i, j, ansh, answ))
                    {
                        ansh = i;
                        answ = j;
                    }
                }
            }
        }
        cout << ansh << " " << answ << endl;
    }
    return 0;
}

