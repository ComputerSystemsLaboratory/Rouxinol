#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define F first
#define S second
using namespace std;

typedef pair< int,int > point;
vector< point > graph[101];
vector< int > v(101);
int n;
const int INF=1<<30;

void dijkstra(int s){
    priority_queue< point,vector< point >,greater< point > >pq;
    pq.push({0,s});
    fill(v.begin(),v.end(),INF);
    v[s]=0;
    while(!pq.empty()){
        point p=pq.top();
        pq.pop();
        REP(i,graph[p.S].size()){
            int nex=graph[p.S][i].S;
            int cost=p.F+graph[p.S][i].F;
            if(v[nex]>cost){
                v[nex]=cost;
                pq.push({cost,nex});
            }
        }
    }
}

int main(){
    scanf("%d",&n);
    int u,k,to,c;
    REP(i,n){
        scanf("%d%d",&u,&k);
        REP(j,k){
            scanf("%d%d",&to,&c);
            graph[u].push_back({c,to});
        }
    }
    dijkstra(0);
    REP(i,n){
        printf("%d ",i);
        printf("%d\n",v[i]);
    }
    return 0;
}


