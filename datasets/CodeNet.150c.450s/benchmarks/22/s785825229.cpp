#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int,int>  pi;
#define F first
#define S second
#define PB push_back
const int N=1e3+10;
const int INF=1e9+10;
int main(){
    int n,m,s,l,r,c,cnt=0,dis[N];
    bool went[N];
    vector<pi> graph[N];
    pi nxt;
    queue<pi> q;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=0;i<n;i++){
        went[i]=false;
        dis[i]=INF;
    }
    dis[s]=0;
    while(m--){
        scanf("%d%d%d",&l,&r,&c);
        graph[l].PB({r,c});
    }
    q.push({s,0});
    while(!q.empty()){
        if(cnt>N*N){
            printf("NEGATIVE CYCLE\n");
            return 0;
        }
        cnt++;
        nxt=q.front();
        q.pop();
        if(nxt.S>dis[nxt.F]||went[nxt.F])continue;
        went[nxt.F]=true;
        for(pi i:graph[nxt.F])if(nxt.S+i.S<dis[i.F]){
            dis[i.F]=nxt.S+i.S;
            went[i.F]=false;
            q.push({i.F,dis[i.F]});
        }
    }
    for(int i=0;i<n;i++){
        if(dis[i]==INF)printf("INF\n");
        else printf("%d\n",dis[i]);
    }
}
