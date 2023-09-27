#include<bits/stdc++.h>
using namespace std;

const int INF=INT_MAX;

struct bellford
{
    struct edge{int u, v, w;};
    int nv, ne;
    vector<int> d;
    vector<edge> E;

    bellford(int nv, int ne) : nv(nv), ne(ne)
    {
        d.resize(nv, INF);
    }

    void relax(int u, int v, int w)
    {
        if(d[u]!=INF && d[v]>d[u]+w) d[v]=d[u]+w;
    }

    bool get(int s)
    {
        d[s]=0;
        for(int i=0; i<nv-1; i++)
            for(auto &e : E)
                relax(e.u, e.v, e.w);
        
        for(auto &e : E)
            if (d[e.u]!=INF && d[e.v]>d[e.u]+e.w)
                return false;
        return true;
    }
};

int main()
{
    int nv, ne, r;
    cin>> nv >> ne >> r;
    bellford g(nv, ne);
    for(int i=0; i<ne; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.E.push_back({u, v, w});
    }
    if(!g.get(r)) printf("NEGATIVE CYCLE\n");
    else
    {
        for(int i=0; i<nv; i++)
        {
            if(g.d[i]==INF) printf("INF\n");
            else printf("%d\n", g.d[i]);
        }
    }
    
    return 0;
}
