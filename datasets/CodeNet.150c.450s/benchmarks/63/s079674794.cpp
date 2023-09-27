
#include <bits/stdc++.h>
using namespace std;
#define REP(i,x) for(int i = 0;i < x;++i)
#define FOR(i,x,y) for(int i = x;i < y;++i)
#define ALL(a) a.begin(),a.end()
using ll = long long;

int v,e,r;
struct edge
{
    int to,cost;
};
vector<edge>graph[114514];

using P = pair<int,int>;
const int INF = 1234567890;
int dist[114514];
void dijkstra()
{
    fill(dist,dist+114514,INF);
    dist[r] = 0;
    priority_queue<P,vector<P>,greater<P>>que;
    que.push({0,r});
    while(!que.empty())
    {
        P p = que.top(); que.pop();
        int ds = p.first;
        int now = p.second;
        if(dist[now] < ds)continue;
        for(auto& ed : graph[now])
        {
            if(dist[ed.to] > dist[now] + ed.cost)
            {
                dist[ed.to] = dist[now] + ed.cost;
                que.push({dist[ed.to],ed.to});
            }
        }
    }
}

int main()
{
    cin >> v >> e >> r;
    REP(i,e)
    {
        int s,t,d;
        cin >> s >> t >> d;
        graph[s].push_back({t,d});
    }
    dijkstra();
    REP(i,v)
    {
        int dd = dist[i];
        if(dd >= INF)
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << dd << endl;
        }
    }
    return 0;
}