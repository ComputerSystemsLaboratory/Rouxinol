#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
#define INF 1000000000
using namespace std;
typedef pair<int,int> P;
struct edge{
    int to,cost;
};
vector<edge> G[100000];
int d[100000];
int main(){
    int v,e,r;
    scanf("%d %d %d",&v,&e,&r);
    for(int i=0;i<e;i++){
        int s,t,d;
        edge k;
        scanf("%d %d %d",&s,&t,&d);
        k.cost=d;
        k.to=t;
        G[s].push_back(k);
    }
    priority_queue<P,vector<P>,greater<P> > que;
    fill(d,d+v,INF);
    d[r]=0;
    que.push(P(0,r));
    while(!que.empty()){
        P p=que.top();
        que.pop();
        int x=p.second;
        if(p.first>d[x]) continue;
        for(int i=0;i<G[x].size();i++){
            edge e=G[x][i];
            if(e.cost+d[x]<d[e.to]){
                d[e.to]=e.cost+d[x];
                que.push(P(d[e.to],e.to));
            }
        }
    }
    for(int i=0;i<v;i++){
        if(d[i]!=INF)
            printf("%d\n",d[i]);
        else printf("INF\n");
    }
    return 0;
}