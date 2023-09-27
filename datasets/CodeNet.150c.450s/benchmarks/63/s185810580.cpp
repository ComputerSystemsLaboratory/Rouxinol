#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

#define MAX 100000
#define INFTY 1 << 30
int v,r;
vector<pair<int,int> > adj[MAX];

void dijkstra(){
    priority_queue<pair<int,int> > PQ;
    int d[MAX];
    for(int i = 0; i < v; i++){
        d[i] = INFTY;
    }    
    d[r] = 0;
    PQ.push(make_pair(0,r));
    
    while(!PQ.empty()){
        pair<int,int> m = PQ.top(); PQ.pop();
        int u = m.second;

        if(d[u] < m.first*(-1)) continue;

        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i].first;
            if(d[u]+adj[u][i].second < d[v]){
                d[v] = d[u]+adj[u][i].second;
                PQ.push(make_pair(d[v]*(-1),v));
            }
        }
    }
        for(int i = 0; i < v; i++){
        if(d[i] < INFTY) printf("%d\n",d[i]);
        else printf("INF\n");
    }
}

int main(){
    int e,s,t,d;
    scanf("%d %d %d", &v, &e, &r);
    for(int i = 0; i < e; i++){
        scanf("%d %d %d", &s, &t, &d);
        adj[s].push_back(make_pair(t,d));
    }
    dijkstra();

    return 0;
}
