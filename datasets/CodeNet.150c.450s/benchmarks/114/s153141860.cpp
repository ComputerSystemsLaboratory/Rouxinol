#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
const int MAX=100,INF=1<<30,WHI=0,GRA=1,BLA=2;
int n,m[MAX][MAX];
int prim(){
    int u,minv;
    int d[MAX],p[MAX],color[MAX];
    fill(d,d+n+1,INF);
    fill(p,p+n+1,-1);
    fill(color,color+n+1,WHI);
    d[0]=0;
    while(1){
        minv=INF;
        u=-1;
        REP(i,n){
            if(minv>d[i]&&color[i]!=BLA){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1) break;
        color[u]=BLA;
        REP(v,n){
            if(color[v]!=BLA&&m[u][v]!=INF){
                if(m[u][v]<d[v]){
                    d[v]=m[u][v];
                    p[v]=u;
                    color[v]=GRA;
                }
            }
        }
    }
    int sum=0;
    REP(i,n){
        if(p[i]!=-1) sum+=m[i][p[i]];
    }
    return sum;
}
int main(){
    scanf("%d",&n);
    REP(i,n){
        REP(j,n){
            int e;
            scanf("%d",&e);
            m[i][j]=(e==-1)?INF:e;
        }
    }
    printf("%d\n",prim());
    return 0;
}


