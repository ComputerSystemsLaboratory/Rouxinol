/**
*    author:  y_takano
*    created: 23.06.2020 15:17:48
**/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= (ll)(b); i--)

using namespace std;

struct _dice
{
    int dt, ds, de, dw, dn, du;
};

void dice(_dice &dice, char c)
{
    int tmp;

    switch (c)
    {
    case 'E':
        tmp = dice.dt;
        dice.dt = dice.dw;
        dice.dw = dice.du;
        dice.du = dice.de;
        dice.de = tmp;
        break;
    case 'N':
        tmp = dice.dt;
        dice.dt = dice.ds;
        dice.ds = dice.du;
        dice.du = dice.dn;
        dice.dn = tmp;
        break;
    case 'S':
        tmp = dice.dt;
        dice.dt = dice.dn;
        dice.dn = dice.du;
        dice.du = dice.ds;
        dice.ds = tmp;
        break;
    case 'W':
        tmp = dice.dt;
        dice.dt = dice.de;
        dice.de = dice.du;
        dice.du = dice.dw;
        dice.dw = tmp;
        break;
    }
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    _dice sdice;

    int n, a, b;
    string s = "SSSSNESSSESSSWSSSWSSSESSS";

        cin >> sdice.dt;
        cin >> sdice.ds;
        cin >> sdice.de;
        cin >> sdice.dw;
        cin >> sdice.dn;
        cin >> sdice.du;

    cin >> n;

    REP(i, n)
    {
        cin >> a >> b;
        REP(i, s.size())
        {
            dice(sdice, s[i]);
            if (sdice.dt == a && sdice.ds == b)
            {
                cout << sdice.de << '\n';
                break;
            }
        }
    }

    return 0;
}
