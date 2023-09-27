#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
const int MAX=1e5+1;
const int NIL=-1;
int n,color[MAX];
vector< int > graph[MAX];
void dfs(int r,int c){
    stack< int > S;
    S.push(r);
    color[r]=c;
    while(!S.empty()){
        int u=S.top();S.pop();
        REP(i,graph[u].size()){
            int v=graph[u][i];
            if(color[v]==NIL){
                color[v]=c;
                S.push(v);
            }
        }
    }
}
int main(){
    int s,t,m,q;
    scanf("%d%d",&n,&m);
    REP(i,m){
        scanf("%d%d",&s,&t);
        graph[s].push_back(t);
        graph[t].push_back(s);
    }
    int id=1;
    fill(color,color+MAX-1,NIL);
    REP(u,n){
        if(color[u]==NIL) dfs(u,id++);
    }
    scanf("%d",&q);
    REP(i,q){
        scanf("%d%d",&s,&t);
        printf("%s\n",color[s]==color[t]?"yes":"no");
    }
    return 0;
}


