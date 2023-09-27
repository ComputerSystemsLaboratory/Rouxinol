#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef pair<int, int> ii;

const int MAXN = 100005;
const int INF = 1 << 30;
 
int V, E, S, d[MAXN];
vector<ii> adjList[MAXN];
 
int main() {

    scanf("%d%d%d",&V,&E,&S);
    for (int i = 0, u, v, w; i < E; i++) {
        scanf("%d%d%d",&u,&v,&w);

        adjList[u].push_back(ii(w,v));
      //adjList[v].push_back(ii(w,u));
    }
 
    fill(d,d+V,INF); d[S] = 0;
    priority_queue< ii,vector<ii>,greater<ii> > pq; pq.push(ii(0,S));
    while(!pq.empty()) {
        ii p = pq.top(); pq.pop();
        int dist = p.fi, u = p.se;
 
        if(dist > d[u]) continue;
 
        for (int i = 0; i < adjList[u].size(); i++) {
            ii &v = adjList[u][i];
 
            if (d[v.se] > d[u] + v.fi) {
                d[v.se] = d[u] + v.fi;
                pq.push(ii(d[v.se], v.se));
            }
        }
    }
 
    for (int i = 0; i < V; i++)
        if (d[i] == INF)
            puts("INF");
        else
            printf( "%d\n", d[i] );
 
    return 0;
}