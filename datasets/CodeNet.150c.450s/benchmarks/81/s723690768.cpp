#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int MAXN = 50, MAXT = 11, INF = (10000);
int d[MAXT][MAXT];
int times[MAXT];
int a, b, c, t;
int anst, ansc;

int main()
{
    int n;
    while(cin >> n && n)
    {
        memset(d, INF, sizeof(d));
        memset(times, 0, sizeof(times));
        t = 0;

        REP(MAXT) d[i][i] = 0;

        REP(n)
        {
            cin >> a >> b >> c;
            d[a][b] = d[b][a] = c;
            t = max(t, a + 1);
            t = max(t, b + 1);
        }
        anst = t;
        ansc = INF;
        //cout << "town"<<t << endl;

        rep(k,t)rep(i,t)rep(j,t)
        {
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }

        rep(i,t)rep(j,t)
        {
            times[i] += d[i][j];
            //cout << i << "to" << j << " " << d[i][j] << endl;
        }

        rep(i,t)if( ansc > times[i]) {anst = i; ansc = times[i];}

        cout << anst << " " << ansc << endl;
    }
    return 0;
}