#include<cstdio>
#include<vector>
#define INF 2000000000
#define M 100
#define _for(j,N) for(int i = (j);i < (N);++i)

using namespace std;

long adj[100][100];
int V;
int E;

int main(void){
    scanf("%d %d",&V,&E);
    long s,t,w;

    for(int i = 0; i < V;++i){
        for(int j = 0; j < V;++j){
            adj[i][j] = INF;
            if(i == j) adj[i][i] = 0;
        }
    }

    _for(0,E){
        scanf("%ld %ld %ld",&s,&t,&w);
        adj[s][t] = w;
    }


    _for(0,V){
        for(int j = 0; j < V;++j){
            for(int k = 0;k < V;++k){
                if(adj[j][i] != INF && adj[i][k] != INF && adj[j][k] > adj[j][i] + adj[i][k])
                    adj[j][k] = adj[j][i] + adj[i][k];
            }
        }
    }

    _for(0,V){
        if(adj[i][i] < 0){
        printf("NEGATIVE CYCLE\n");
        return 0;
        }
    }

    for(int i = 0; i < V;++i){
        for(int j = 0; j < V;++j){
            if(adj[i][j] == INF) printf("INF");
            else printf("%ld",adj[i][j]);
            if(j != V-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
