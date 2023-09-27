#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int main()
{
    priority_queue < pii , vector<pii> , greater <pii> > a;
    int V, E;
    cin >> V >> E;
    vector <pii> vec[V];
    int mar[V],dis[V];
    for(int i=0;i<E;i++)
    {
        int u,v,d;
        cin >> u >> v >> d;
        vec[u].push_back(make_pair(v,d));
        vec[v].push_back(make_pair(u,d));
    }
    for(int i=0;i<V;i++)
    {
        mar[i]=0;
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    a.push(make_pair(0,0));
    int sum=0;
    for(;!a.empty();)
    {
        pii t=a.top();
        a.pop();
        if(mar[t.second]==0)
        {
            for(int i=0;i<vec[t.second].size();i++)
            {
                if(dis[vec[t.second][i].first]>vec[t.second][i].second)
                {
                    dis[vec[t.second][i].first]=vec[t.second][i].second;
                    a.push(make_pair(dis[vec[t.second][i].first],vec[t.second][i].first));
                }
            }
            mar[t.second]=1;
            sum+=dis[t.second];
        }
    }
    cout << sum << endl;
}

