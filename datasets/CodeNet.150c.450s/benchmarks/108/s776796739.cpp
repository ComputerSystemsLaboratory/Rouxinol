#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
const int INF=1<<30;
int n,graph[101][101],v[101];
void bfs(int s){
    queue< int > q;
    fill(v,v+101,INF);
    q.push(s);
    v[s]=0;
    while(!q.empty()){
        int p=q.front();q.pop();
        FOR(i,1,n+1){
            if(!graph[p][i]) continue;
            if(v[i]==INF){
                v[i]=v[p]+1;
                q.push(i);
            }
        }
    }
    FOR(i,1,n+1){
        printf("%d ",i);
        printf("%d\n",v[i]!=INF?v[i]:-1);
    }
}
int main(){
    int u,k,e;
    scanf("%d",&n);
    REP(i,n){
        scanf("%d%d",&u,&k);
        REP(j,k){
            scanf("%d",&e);
            graph[u][e]=1;
        }
    }
    bfs(1);
    return 0;
}


