#include <iostream>
#include<cstdio>
using namespace std;
const int INF = (1 << 21);
static int G[100][100];

void AskSSSP(int n){
    
    const int BLACK = 2,GRAY = 1,WHITE =  0;
    int color[n],d[n];
    for(int i = 0;i < n;++i){
        d[i] = INF;
        color[i] = WHITE;
    }
    d[0] = 0;
    int min,u;
    while(1){
        int min = INF;
        for(int i=0;i < n;++i){
            if(color[i] != BLACK && d[i] < min){
                min = d[i];
                u = i;
            }
        }
        if(min == INF) break;
        color[u] = BLACK;
        for(int i=0;i < n;++i){
            if(color[i] != BLACK && G[u][i] != INF){
                if(d[u] + G[u][i] < d[i]){
                    d[i] = d[u] + G[u][i];
                    color[i] = GRAY;
                }
            }
        }
        
    }
    for(int i = 0;i < n;++i) printf("%d %d\n",i,d[i]);

}

int main(void){
    int n,t,k,v,u;
    scanf("%d",&n);
    for(int i = 0;i < n;++i){
        for(int j = 0;j < n;++j){
            G[i][j] = INF;
        }
    }
    for(int i = 0;i < n;++i){
        scanf("%d %d",&t,&k);
        for(int j = 0;j < k;j++){
            scanf("%d %d",&v,&u);
            G[t][v] = u;
        }
    }
    AskSSSP(n);
    
}



