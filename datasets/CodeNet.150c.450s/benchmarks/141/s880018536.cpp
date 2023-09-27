#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for(int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<double, double>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

P sub_vector(P a, P b)
{
    P res;

    res.fi = a.fi - b.fi;
    res.se = a.se - b.se;

    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    double x1, x2, x3, y1, y2, y3, xp, yp;
    
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp)
    {
        P AB = sub_vector(P{x2, y2}, P{x1, y1});   
        P BP = sub_vector(P{xp, yp}, P{x2, y2});

        P BC = sub_vector(P{x3, y3}, P{x2, y2});
        P CP = sub_vector(P{xp, yp}, P{x3, y3});

        P CA = sub_vector(P{x1, y1}, P{x3, y3});
        P AP = sub_vector(P{xp, yp}, P{x1, y1});

        double c1 = AB.fi * BP.se - AB.se * BP.fi;
        double c2 = BC.fi * CP.se - BC.se * CP.fi;
        double c3 = CA.fi * AP.se - CA.se * AP.fi;

        if((c1 < 0 && c2 < 0 && c3 < 0) || (0 < c1 && 0 < c2 && 0 < c3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    
    return 0;
}
