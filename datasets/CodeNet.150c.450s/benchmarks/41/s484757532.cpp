#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXV = 100;
const ll INF = (1LL<<60);

int V, E;
ll adjMat[MAXV][MAXV];

int main(){

    scanf("%d%d",&V,&E);
    for (int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            adjMat[i][j] = INF;

    for (int i = 0, s, t, d; i < E; i++) {
        scanf("%d%d%d",&s,&t,&d);
        
        adjMat[s][t] = d;
    }

    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0;j < V; j++)
                if (adjMat[i][k] != INF && adjMat[k][j] != INF)
                    adjMat[i][j] = min(adjMat[i][j],adjMat[i][k]+adjMat[k][j]);

    for (int i = 0; i < V; i++) {
        if (adjMat[i][i] < 0) {
            printf("NEGATIVE CYCLE\n");

            return 0;
        }
    }

    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            if (j)
                printf(" ");
            if (i == j)
                printf("0");
            else if (adjMat[i][j] >= INF)
                printf("INF");
            else
                printf("%lld",adjMat[i][j]);
        }
        printf("\n");
    }
    return 0;
}