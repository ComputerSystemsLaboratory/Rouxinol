#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main(void)
{
    int d, v = 0;
    cin >> d;

    vector<int> c(26), last(26);
    int s[d][26];

    rep(i, 26)
    {
        cin >> c.at(i);
        last.at(i) = 0;
    }

    rep(i, d)
    {
        rep(j, 26)
        {
            cin >> s[i][j];
        }
    }

    rep(i, d)
    {
        int t;
        cin >> t;
        v += s[i][t - 1];
        last.at(t - 1) = i+1;
        rep(j, 26)
        {
            v -= c.at(j) * (i+1 - last.at(j));
        }
        cout << v << endl;
    }

    return 0;
}
