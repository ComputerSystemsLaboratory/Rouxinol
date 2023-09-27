#include<cstdio>
#include<queue>
#include<vector>
#include<map>

using namespace std;
typedef long long int lli;
typedef pair<lli,lli> P;

vector<P> G[500500]; // target, cost
lli dis[100500];

void dijkstra(lli r) {
    for(lli i=0; i<sizeof(dis)/sizeof(lli); i++)
        dis[i] = 0x7FFFFFFF;

    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P(0,r));
    while(!q.empty()) {
        lli cost = q.top().first;
        lli now = q.top().second;
        q.pop();

        if(dis[now] <= cost)
            continue;
        dis[now] = cost;
        for(vector<P>::iterator it = G[now].begin(); it != G[now].end(); it++)
            q.push(P(cost+it->second,it->first));
    }
}

int main(void) {
    lli v,e,r;
    scanf("%lld%lld%lld",&v,&e,&r);
    for(lli i=0; i<e; i++) {
        lli s,t,d;
        scanf("%lld%lld%lld",&s,&t,&d);
        G[s].push_back(P(t,d));
    }
    dijkstra(r);
    for(lli i=0; i<v; i++)
        if(dis[i] == 0x7FFFFFFF)
            printf("INF\n");
        else
            printf("%lld\n", dis[i]);
    return 0;
}