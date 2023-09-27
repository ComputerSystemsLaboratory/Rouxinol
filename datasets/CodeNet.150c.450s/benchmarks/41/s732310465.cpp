#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;

int n;
long long d[100][100];
const long long INF=1LL<<32;

void floyd(){
    REP(k,n){
        REP(i,n){
            if(d[i][k]==INF)continue;
            REP(j,n){
                if(d[k][j]==INF)continue;
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}

int main(){
    int e,u,v,c;
    scanf("%d%d",&n,&e);
    REP(i,n){
        REP(j,n){
            d[i][j]=(i==j?0:INF);
        }
    }
    REP(i,e){
        scanf("%d%d%d",&u,&v,&c);
        d[u][v]=c;
    }
    floyd();
    bool flag=false;
    REP(i,n) if(d[i][i]<0) flag=true;
    if(flag){
        printf("NEGATIVE CYCLE\n");
    }else{
        REP(i,n){
            REP(j,n){
                if(j) printf(" ");
                if(d[i][j]==INF) printf("INF");
                else printf("%d",d[i][j]);
            }
            puts("");
        }
    }
    return 0;
}


