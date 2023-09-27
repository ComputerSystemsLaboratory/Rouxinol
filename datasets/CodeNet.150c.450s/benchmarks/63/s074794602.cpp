#include <bits/stdc++.h>

#define MAX 10005
#define INF 2000000000
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

int dx[]={0,0,-1,+1,-1,+1};
int dy[]={-1,+1,0,0,-1,+1};

void IO()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}

int dist[100005];

set < pair < int , int > > se;
set < pair < int , int > > :: iterator it;
vector < pair < int , int > > graph[500005];

void __init__()
{
    se.clear();
    for(int i=0;i<100005;i++)graph[i].clear();
    for(int i=0;i<100005;i++)dist[i]=INF;
}

void Dijkstra(int s)
{
    dist[s]=0;
    se.insert(make_pair(0,s));
    while(!se.empty()){
        it=se.begin();
        int d=(*it).first;
        int u=(*it).second;
        se.erase(it);
        int si=graph[u].size();
        for(int i=0;i<si;i++){
            int v=graph[u][i].first;
            int cost=graph[u][i].second;
            if(dist[v]>d+cost){
                dist[v]=d+cost;
                se.insert(make_pair(dist[v],v));
            }
        }
    }
}

int main()
{
    //IO();
    int n,e,s,u,v,c;
    while(~scanf("%d %d %d",&n,&e,&s)){
        __init__();
        for(int i=1;i<=e;i++){
            scanf("%d %d %d",&u,&v,&c);
            graph[u].push_back(make_pair(v,c));
        }
        Dijkstra(s);
        for(int i=0;i<n;i++){
            if(dist[i]==INF)printf("INF\n");
            else printf("%d\n",dist[i]);
        }
    }
    return 0;
}