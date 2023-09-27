#include<cstdio>
#include<algorithm>
#include<queue>

const int MAX_V=100000;
const int INF=1000000000;

using namespace std;
typedef pair<int,int> P;
struct edge{int to; int cost;};
vector<edge> G[MAX_V];
priority_queue<P,vector<P>,greater<P> > q;
int d[MAX_V];

void init(int v,int e,int r){
    for(int i=0;i<e;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        edge ed;
        ed.cost=c;
        ed.to=b;
        G[a].push_back(ed);
    }
    fill(d,d+v,INF);
    d[r]=0;
}

void dijkstra(int r){
    q.push(P(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        int v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                q.push(P(d[e.to],e.to));
            }
        }
    }
}

int main(){
    int v,e,r;
    scanf("%d %d %d",&v,&e,&r);
    init(v,e,r);
    dijkstra(r);
    for(int i=0;i<v;i++){
        if(d[i]==INF) printf("INF\n");
        else printf("%d\n",d[i]);
    }
}