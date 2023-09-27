#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
#define INF 1e9


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v,e,x,y,w,r;
    pll h;
    cin>>v>>e>>r;
    vector<ll> dist(v,INF);
    dist[r]=0;//nodo de inicio
    vector<vector<pll> > grafo(v,vector<pll> (0));

	for(int i=0;i<e;i++)
    {
        cin>>x>>y>>w;
        h.first=y;
        h.second=w;
        grafo[x].push_back(h);
        /*h.first=x;
        grafo[y].push_back(h);*/
    }

	for(int i=0;i<v-1;i++)
    {
        bool con=0;
        for(int j=0;j<v;j++)
        {
            for(int k=0;k<grafo[j].size();k++)
            {
                if(dist[j]<INF)
                {
                    dist[grafo[j][k].first]=min(dist[grafo[j][k].first],dist[j]+grafo[j][k].second);
                    con=1;
                }
            }
        }
        if(con==0)
            break;
    }

    bool con=0;//detecta ciclo negativo
    for(int j=0;j<v;j++)
    {
        for(int k=0;k<grafo[j].size();k++)
        {
            if(dist[j]<INF&&dist[grafo[j][k].first]>dist[j]+grafo[j][k].second)
            {
                con=1;
            }
        }
    }


    if(con)
    {
        cout<<"NEGATIVE CYCLE\n";
    }
    else
    {
        for(int i=0;i<v;i++)
        {
            if(dist[i]!=INF)
            cout<<dist[i]<<endl;
            else cout<<"INF\n";
        }
    }


	return 0;
}

