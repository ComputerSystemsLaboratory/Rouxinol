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

int deco(string s)
{
    int ret = 0;
    int tmp = 1;
    rep(i, s.size())
    {

        if ('2' <= s[i] && s[i] <= '9')
        {
            tmp = s[i] - '0';
        }
        else
        {

            if (s[i] == 'm')
                ret += 1000 * tmp;
            if (s[i] == 'c')
                ret += 100 * tmp;
            if (s[i] == 'x')
                ret += 10 * tmp;
            if (s[i] == 'i')
                ret += tmp;
            tmp = 1;
        }
    }
    return ret;
}

string enco(int n)
{
    string ret = "";
    string s = "0123456789";
    string d = "mcxi";
    int k = 1000;
    int kk = 0;
    rep(i, 4)
    {
        int t = n / k;
        if (t != 0)
        {
            if (t == 1)
                ret += string() + d[kk];
            else
                ret += string() + s[t] + d[kk];
        }
        n %= k;
        k /= 10;
        kk++;
    }
    //cerr << string() + s[0] + "123" << endl;
    return ret;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    rep(i, n)
    {
        string s1, s2;
        cin >> s1 >> s2;

        //cerr << deco(s1) << "," << deco(s2) << endl;
        cout
            << enco(deco(s1) + deco(s2)) << endl;
    }
    return 0;
}

