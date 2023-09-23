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

const int MAXT = 11, MAXN = 45, INF = 10000;

int cost[MAXT][MAXT];
int d[MAXT];
bool used[MAXT];
int a, b, c, t, n, anst, ansc, tcost;

int main()
{
    while(cin >> n && n)
    {
        memset(cost, INF, sizeof(cost));
        t = 0;

        REP(n)
        {
            cin >> a >> b >> c;
            cost[a][b] = cost[b][a] = c;
            t = max(t, a+1);
            t = max(t, b+1);
        }
        anst = MAXT, ansc =INF;

        rep(k,t)
        {
            memset(d, INF, sizeof(d));
            memset(used, false, sizeof(used));

            d[k] = 0;
            tcost = 0;
            
            while(true)
            {
                int v = -1;
                rep(i,t)if(!used[i] && (v == -1 || d[i] < d[v])) v = i;
                
                if(v == -1) break;

                used[v] = true;

                rep(i,t) d[i] = min(d[i], d[v] + cost[v][i]);

            }
            REP(t) tcost += d[i];
            if(tcost < ansc) { anst = k; ansc = tcost;}
        }
        cout << anst <<" " << ansc << endl;

    }

    return 0;
}