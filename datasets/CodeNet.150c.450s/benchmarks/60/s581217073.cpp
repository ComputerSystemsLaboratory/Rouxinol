#include <bits/stdc++.h>
using namespace std;

static const int MAX = 100;

int main(){
    int n;
    scanf("%d",&n);
    int u,k,adj[MAX][MAX],tmp;
    memset(adj,0,sizeof(adj));
    for(int i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        for(int m=0;m<k;m++){
            scanf("%d",&tmp);
            adj[u-1][tmp-1] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int m=0;m<n;m++){
            if(m) printf(" ");
            printf("%d",adj[i][m]);
        }
        printf("\n");
    }

    return 0;
}