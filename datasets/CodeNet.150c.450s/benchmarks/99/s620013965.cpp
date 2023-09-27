#include <bits/stdc++.h>
using namespace std;
using ll = int_fast64_t;
const int mod = 1e9 + 7;
const int inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
#define fast() ios::sync_with_stdio(false), cin.tie(nullptr)
#define digit(N) cout << fixed << setprecision((N))
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

int to_dec(string s)
{
    int res = 0, sz = s.size(), k = 1;

    for (int i = 0; i < sz; i++)
    {
        if ('1' < s[i] && s[i] <= '9')
            k = s[i] - '0';
        else
        {
            if (s[i] == 'm')
                res += 1000 * k;
            if (s[i] == 'c')
                res += 100 * k;
            if (s[i] == 'x')
                res += 10 * k;
            if (s[i] == 'i')
                res += 1 * k;
            k = 1;
        }
    }

    return res;
}

string to_mcxi(int a)
{
    string s = "";
    int k = 0;
    while (a > 0)
    {
        k++;
        int c = a % 10;
        a /= 10;
        if (k == 1)
        {
            if (c == 0)
                continue;
            else if (c == 1)
                s += 'i';
            else
                s += "i" + to_string(c);
        }

        if (k == 2)
        {
            if (c == 0)
                continue;
            else if (c == 1)
                s += 'x';
            else
                s += "x" + to_string(c);
        }

        if (k == 3)
        {
            if (c == 0)
                continue;
            else if (c == 1)
                s += 'c';
            else
                s += "c" + to_string(c);
        }

        if (k == 4)
        {
            if (c == 0)
                continue;
            else if (c == 1)
                s += 'm';
            else
                s += "m" + to_string(c);
        }
    }

    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s, t;
        cin >> s >> t;
        int res = to_dec(s) + to_dec(t);
        cout << to_mcxi(res) << "\n";
    }
}
