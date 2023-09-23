#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
int graph[101][101];
int main(){
    int n,u,k,v;
    scanf("%d",&n);
    fill(graph[0],graph[100],0);
    REP(i,n){
        scanf("%d%d",&u,&k);
        REP(j,k){
            scanf("%d",&v);
            graph[u][v]=1;
        }
    }
    REP(i,n){
        REP(j,n){
            if(j) printf(" ");
            printf("%d",graph[i+1][j+1]);
        }
        puts("");
    }
    return 0;
}


