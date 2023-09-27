#include <cstdio>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
#define PB push_back
typedef pair<int,int> P;

int main(){
    int V,E,r;
    scanf("%d%d%d",&V,&E,&r);
    vector<vector<pair<int,int>>> edges(V);
    for(int i=0;i<E;i++){
        int s,t,d;
        scanf("%d%d%d",&s,&t,&d);
        edges[s].PB(P(t,d));
    }
    vector<int> dist(V,INT_MAX);
    dist[r]=0;
    priority_queue<P,vector<P>,greater<P>> pq;
    pq.push(P(0,r));
    while(!pq.empty()){
        P now=pq.top();pq.pop();
        int nd=now.first,nat=now.second;
        if(dist[nat]<nd) continue;
        for(int i=0;i<edges[nat].size();i++){
            int ned=nd+edges[nat][i].second,neat=edges[nat][i].first;
            if(ned < dist[neat]){
                dist[neat]=ned;
                pq.push(P(ned,neat));
            }
        }
    }
    for(int i=0;i<V;i++){
        if(dist[i]==INT_MAX) printf("INF\n");
        else printf("%d\n",dist[i]);
    }
}