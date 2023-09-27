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

int main()
{
    int n;
    cin >> n;
    cout << n << ":";
    // -1 if prime
    // largest prime divisor if composite
    int rn = sqrt(n) + 1;
    vint p(rn, 0);
    rep(i, rn)
    {
        if (i < 2)
            continue;
        if (p[i])
            continue;
        p[i] = i;
        for (ll j = (ll)i * i; j < rn; j += i)
        {
            p[j] = i;
        }
        while (n % i == 0)
        {
            n /= i;
            cout << " " << i;
        }
    }
    if (n != 1)
        cout << " " << n;
    cout << endl;

    return 0;
}
