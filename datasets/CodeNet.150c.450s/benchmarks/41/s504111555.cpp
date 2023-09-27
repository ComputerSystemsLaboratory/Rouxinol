#include<bits/stdc++.h>
using namespace std;
#define INF 5000000000
#define INF2 2000000000
using ll=long long;

int main()
{
    ll V,E;cin >> V >>E;
    vector<vector<ll>> dis(V,vector<ll> (V,INF));
    ll u,v,d;
    for (ll i=0;i<E;i++)
    {
        cin >> u >> v >> d;
        dis[u][v]=d;
    }
    bool can=true;
    for (ll i=0;i<V;i++) dis[i][i]=0;
    for (ll k=0;k<V;k++)
    {
        for (ll i=0;i<V;i++)
        {
            for (ll j=0;j<V;j++)
            {
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        } 
    }
    for (ll i=0;i<V;i++) if (dis[i][i]<0) can=false;
    if (!can) cout << "NEGATIVE CYCLE" << endl;
    else
    {
        for (ll i=0;i<V;i++)
        {
            for (ll j=0;j<V;j++)
            {
                if (dis[i][j]>=INF2)
                {
                    if (j==V-1) cout << "INF";
                    else cout << "INF ";
                }
                else
                {
                    if (j==V-1) cout << dis[i][j];
                    else  cout << dis[i][j]<< " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
