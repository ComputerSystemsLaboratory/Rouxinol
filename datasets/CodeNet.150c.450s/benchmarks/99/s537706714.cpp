//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2881
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using ll = long long;
using namespace std;

int const MOD = 1e9 + 7;

int comv(string s)
{
    int res = 0;
    int t = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        switch (s[i])
        {
        case 'm':
            t *= 1000;
            res += t;
            t = 1;
            break;
        case 'c':
            t *= 100;
            res += t;
            t = 1;
            break;
        case 'x':
            t *= 10;
            res += t;
            t = 1;
            break;
        case 'i':
            t *= 1;
            res += t;
            t = 1;
            break;
        default:
            break;
        }
        if (s[i] >= '2' && s[i] <= '9')
        {
            t = s[i] - '0';
        }
    }
    return res;
}

string comb(int n)
{
    string s = "";

    int t = 0;
    while (n)
    {
        t++;
        if (n % 10 != 0)
        {
            switch (t)
            {
            case 1:
                s.push_back('i');
                break;
            case 2:
                s.push_back('x');
                break;
            case 3:
                s.push_back('c');
                break;
            case 4:
                s.push_back('m');
                break;
            default:
                break;
            }
            if (n % 10 != 1)
                s.push_back((char)'0' + n % 10);
        }
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s, t;
        cin >> s >> t;

        int n = comv(s);
        int m = comv(t);

        int sum = n + m;
        cout << comb(sum) << endl;
    }
    return 0;
}
