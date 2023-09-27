#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for(int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<int, int>;
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    double a, b, c, d, e, f;
    
    while(cin >> a >> b >> c >> d >> e >> f)
    {  
        double x = (c * e - b * f) / (a * e - b * d);
        double y = (a * f - d * c) / (a * e - b * d);

        if(x == 0)
            x = 0;
        
        if(y == 0)
            y = 0;
            
        printf("%.3lf %.3lf\n", x, y);
    }

    
    return 0;
}
