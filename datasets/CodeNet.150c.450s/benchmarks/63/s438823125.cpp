#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue <int, vector<int>, greater <int> > a;
    int v,e,r;
    cin >> v >> e >> r;
    vector < pair<int,int> > data[v];
    vector < pair<int,int> > :: iterator it,ip;
    bool mar[v];
    int dis[v],i,j;
    for(int i=0;i<v;i++)
    {
        dis[i]=INT_MAX;
        mar[i]=0;
    }
    dis[r]=0;
    mar[r]=1;
    for(int i=0;i<e;i++)
    {
        int f,g,h;
        cin >> f >> g >> h;
        data[f].push_back( make_pair(g,h));
    }
    a.push(r);
    for(;!a.empty();)
    {
        int p=a.top();
        a.pop();
        for(int i=0;i<data[p].size();i++)
        {
            if(dis[p]+data[p][i].second < dis[data[p][i].first])
            {
                dis[data[p][i].first]=dis[p]+data[p][i].second;
                mar[data[p][i].first]=1;
                a.push(data[p][i].first);
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        if(dis[i]==INT_MAX)
            cout << "INF" << endl;
        else
            cout << dis[i] << endl;
    }
        
}

