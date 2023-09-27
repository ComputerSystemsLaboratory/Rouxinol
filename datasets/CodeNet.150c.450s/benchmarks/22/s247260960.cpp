#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r;
    cin >> a >> b >> r;
    int u[b],v[b],d[b];
    for(int i=0;i<b;i++)
    {
        cin >> u[i] >> v[i] >> d[i];
    }
    int dis[a];
    for(int i=0;i<a;i++)
    {
        dis[i]=INT_MAX;
    }
    dis[r]=0;
    for(int j=1;j<a;j++)
    {
        for(int i=0;i<b;i++)
        {
            if(dis[u[i]]!=INT_MAX)
            {
                if(dis[v[i]]>dis[u[i]]+d[i])
                    dis[v[i]]=dis[u[i]]+d[i];
            }
        }
    }
    int g=0;
    for(int i=0;i<b;i++)
    {
        if(dis[u[i]]!=INT_MAX)
        {
            if(dis[v[i]]>dis[u[i]]+d[i])
            {
                g++;
            }
        }
    }
    if(g>0)
        cout << "NEGATIVE CYCLE" << endl;
    else
    {
        for(int i=0;i<a;i++)
        {
            if(dis[i]==INT_MAX)
                cout << "INF" << endl;
            else
                cout << dis[i] << endl;
        }
    }
}

